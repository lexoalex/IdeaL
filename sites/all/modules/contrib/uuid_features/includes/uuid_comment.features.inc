<?php 
/**
 * @file
 * Features hooks for the uuid_comment features component.
 */

/**
 * Implementation of hook_features_export_options().
 */
function uuid_comment_features_export_options() {
  $options = array();

  $query = 'SELECT c.cid, c.pid, c.nid, c.subject, n.title AS title, u.uuid
    FROM {comments} c 
    INNER JOIN {uuid_comments} u 
    ON c.cid = u.cid
    INNER JOIN {node} n 
    ON n.nid = c.nid
    ORDER BY n.title ASC, c.subject ASC';
  $result = db_query($query);
  while ($comment = db_fetch_object($result)) {
    $options[$comment->uuid] = check_plain($comment->title .' - '. $comment->subject);
  }

  return $options;
}

/**
 * Implementation of hook_features_export().
 */
function uuid_comment_features_export($data, &$export, $module_name = '') {
  $pipe = array();

  $export['dependencies']['comment'] = 'comment';
  $export['dependencies']['uuid'] = 'uuid';
  $export['dependencies']['uuid_features'] = 'uuid_features';
  
  foreach ($data as $uuid) {
    $export['features']['uuid_comment'][$uuid] = $uuid;
  }

  return $pipe;
}

/**
 * Implementation of hook_features_export_render().
 */
function uuid_comment_features_export_render($module, $data) {
  $translatables = $code = array();

  $code[] = '  $comments = array();';
  $code[] = '';
  foreach ($data as $uuid) {
    $cid =  db_result(db_query('SELECT cid FROM {uuid_comments} WHERE uuid = "%s"', $uuid));
    $comment = db_fetch_object(db_query('SELECT * FROM {comments} WHERE cid = %d', $cid));
    if (!$comment) {
      continue;
    }
    
    $export = $comment;
    unset($export->cid);
    unset($export->nid);
    unset($export->uid);
    unset($export->hostname);
    
    $export->uuid = $uuid;
   
    // Get the UUID of the comment's node.
    $query = 'SELECT un.uuid FROM {uuid_node} un WHERE un.nid = %d';
    $node_uuid = db_result(db_query($query, $comment->nid));
    $export->uuid_node = $node_uuid;
    
    $query = 'SELECT uu.uuid FROM {uuid_users} uu WHERE uu.uid = %d';
    $user_uuid = db_result(db_query($query, $comment->uid));  
    $export->uuid_user = $user_uuid;
    
    $code[] = '  $comment[] = '. features_var_export($export, '  ') .';';
  }

  if (!empty($translatables)) {
    $code[] = features_translatables_export($translatables, '  ');
  }

  $code[] = '  return $comments;';
  $code = implode("\n", $code);
  return array('uuid_features_default_comments' => $code);
}

/**
 * Implementation of hook_features_revert().
 */
function uuid_comment_features_revert($module) {
  uuid_comment_features_rebuild($module);
}

/**
 * Implementation of hook_features_rebuild().
 */
function uuid_comment_features_rebuild($module) {
  $comments = module_invoke($module, 'uuid_features_default_comments');
  if (!empty($comments)) {
    foreach ($comments as $data) {
      $existing = uuid_get_serial_id('comments', 'cid', $data['uuid']);
      if (!empty($existing)) {
        $data['cid'] = $existing;
      }
      $existing = uuid_get_serial_id('node', 'nid', $data['uuid']);
      if (!empty($existing)) {
        $data['nid'] = $existing;
      }
      $existing = uuid_get_serial_id('users', 'uid', $data['uuid']);
      if (!empty($existing)) {
        $data['uid'] = $existing;
      }
      
      save_comment($data);

      // TODO: remove when http://drupal.org/node/860442 is resolved.
      uuid_set_uuid('comment', 'cid', $data['cid'], $data['uuid']);
    }
  }
}
