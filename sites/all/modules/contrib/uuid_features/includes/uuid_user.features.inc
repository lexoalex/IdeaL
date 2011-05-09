<?php
/**
 * @file
 * Features hooks for the uuid_node features component.
 */

/**
 * Implementation of hook_features_export_options().
 */
function uuid_user_features_export_options() {
  $options = array();

  $types = node_get_types('names');

  $query = 'SELECT u.uid, u.name, uu.uuid
    FROM {users} u 
    INNER JOIN {uuid_users} uu 
    ON u.uid = uu.uid 
    ORDER BY u.name ASC';
  $result = db_query($query);
  while ($user = db_fetch_object($result)) {
    $options[$user->uuid] = check_plain($user->name . ": " . $user->uid);
  }

  return $options;
}

/**
 * Implementation of hook_features_export().
 */
function uuid_user_features_export($data, &$export, $module_name = '') {
  $pipe = array();

  $export['dependencies']['uuid_features'] = 'uuid_features';

  uuid_features_load_module_includes();

  foreach ($data as $uuid) {
    $export['features']['uuid_user'][$uuid] = $uuid;
  }

  return $pipe;
}

/**
 * Implementation of hook_features_export_render().
 */
function uuid_user_features_export_render($module, $data) {
  $translatables = $code = array();

  uuid_features_load_module_includes();

  $code[] = '  $users = array();';
  $code[] = '';
  foreach ($data as $uuid) {
    $uid =  db_result(db_query('SELECT uid FROM {uuid_users} WHERE uuid = "%s"', $uuid));
    $user = user_load($uid);
    $export = $user;

    unset($export->uid);

    // The hook_alter signature is:
    // hook_uuid_node_features_export_render_alter(&$export, $node, $module);
    drupal_alter('uuid_user_features_export_render', $export, $node, $module);

    $code[] = '  $users[] = '. features_var_export($export, '  ') .';';
  }

  if (!empty($translatables)) {
    $code[] = features_translatables_export($translatables, '  ');
  }

  $code[] = '  return $users;';
  $code = implode("\n", $code);
  return array('uuid_features_default_user' => $code);
}

/**
 * Implementation of hook_features_revert().
 */
function uuid_user_features_revert($module) {
  uuid_node_features_rebuild($module);
}

/**
 * Implementation of hook_features_rebuild().
 * Rebuilds nodes based on UUID from code defaults.
 */
function uuid_user_features_rebuild($module) {
  $users = module_invoke($module, 'uuid_features_default_user');
  if (!empty($users)) {
    module_load_include('inc', 'user', 'user.pages');

    foreach ($users as $data) {
      $user = (object)$data;

      $existing = uuid_get_serial_id('users', 'uid', $data['uuid']);

      if (!empty($existing)) {
        $user->uid = $existing->uid;
      }

      // The hook_alter signature is:
      // hook_uuid_user_features_rebuild_alter(&node, $module);
      drupal_alter('uuid_user_features_rebuild', $node, $module);

      user_save($user);
    }
  }
}
