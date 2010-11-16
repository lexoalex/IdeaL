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
  );
}

/**
* Action Implementation: close node from adding new comments.
*/
function ideal_action_close_comments($node) {
  $node->comment = 1;
  return array('node' => $node);
}

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
    'ideal_condition_content_term_changed' => array(
      'label' => t('Term has changed'),
      'arguments' => array(
        'node' => array('type' => 'node', 'label' => t('Content containing changes')),
        'node_unchanged' => array('type' => 'node', 'label' => t('Content not containing changes')),
      ),
      'help' => t('You should make sure that the used term exists in the given content type.'),
      'module' => 'Ideal',
    ),  
  );
}

/**
 * Condition Implementation: Check if term exists on node.
 */
function ideal_condition_content_has_term($node, $settings) {
  if (!is_numeric($settings['term'])) {
    //$settings['term'] = db_result(db_query("SELECT tid FROM {term_data} WHERE LOWER(name) = '%s'", strtolower($settings['term'])));
    $terms = taxonomy_get_term_by_name($settings['term']);
    foreach ($terms as $tr) {
      foreach ($node->taxonomy as $term) {
        if (is_numeric($term)) {
          $term = taxonomy_get_term($term);
        }
        if ($term->tid == $tr->tid) {
          return TRUE;
        }
      }
    }
  }
  
  foreach ($node->taxonomy as $term) {
    if (is_numeric($term)) {
      $term = taxonomy_get_term($term);
    }
    if ($term->tid == $settings['term']) {
      return TRUE;
    }
  }
  return FALSE;
}
/**
 * Condition Implementation: Check if the term has changed.
 */
function ideal_condition_content_term_changed($node1, $node2, $settings) {
  if (!empty($settings['term'])) {
    foreach ($node1->taxonomy as $term1) {
      if (is_numeric($term1)) {
        $term1 = taxonomy_get_term($term1);
      }
      foreach ($node2->taxonomy as $term2) {
        if (is_numeric($term2)) {
          $term2 = taxonomy_get_term($term2);
        }
        if ($term1->tid == $term2->tid) {
          return TRUE;
        }
      }
    }
  }
  return FALSE;
}
