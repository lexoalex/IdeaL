<?php
//===rules actions

/**
* Implementation of hook_rules_action_info().
* @ingroup rules
*/
function ideal_rules_action_info() {
  return array(
    'ideal_action_close_comments' => array(
      'label' => t('close node from adding new comments'),
      'module' => 'Ideal',
      'arguments' => array(
        'node' => array('type' => 'node', 'label' => t('Content')),
        ),
      ),
//      'ideal_action_grant_points_to_comment_author' => array(
//      'label' => t('Grant !points to a comment author ', userpoints_translation()),
//      'arguments' => array(
//          'user' => array('type' => 'user', 'label' => t('User'))
//        ),
//      'module' => 'Ideal',
//      'eval input' => array('points'),
//    ),
  );
}

/**
* Action Implementation: close node from adding new comments.
*/
function ideal_action_close_comments($node) {
  $node->comment = 1;
  return array('node' => $node);
}

///**
// *  Action Implementation: grant points to a committers.
// */
//function userpoints_action_grant_points_to_comment_author($account, $settings) {
//  userpoints_userpointsapi(array('uid' => $account->uid, 'points' => $settings['points']));
//}

//===rules conditions

/**
* Implements hook_rules_condition_info().
*/
function ideal_rules_condition_info() {
  return array(
    'ideal_condition_content_has_term' => array(
      'label' => t('Content has term'),
     	'arguments' => array(
        'node' => array('type' => 'node', 'label' => t('Content')),
        ),
      'help' => t('Check whether the node has a specified term.'),
      'module' => 'Ideal',
    ),
  );
}

/**
 * Condition Implementation: Check if term exists on node.
 */
function ideal_condition_content_has_term($node, $settings) {
  if (!is_numeric($settings['term'])) {
    $settings['term'] = db_result(db_query("SELECT tid FROM {term_data} WHERE LOWER(name) = '%s'", strtolower($settings['term'])));
  }
  foreach ($node->taxonomy as $term) {
    if ($term->tid == $settings['term']) {
       return TRUE;
    }
  }
  return FALSE;
}
