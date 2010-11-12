<?php
//===rules actions

/**
* Implementation of hook_rules_action_info().
* @ingroup rules
*/
function ideal_rules_action_info() {
  return array(
    'ideal_close_comments' => array(
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
* @ingroup rules
*/
function ideal_close_comments($node) {
  //if ($node = node_load($nid)) {
    $node->comment = 1;
  //}; 
  return array('node' => $node);
  
}

//===rules conditions

/**
* Implements hook_rules_condition_info().
*/
function ideal_rules_condition_info() {
  return array(
    'ideal_condition_term_exists' => array(
      'label' => t('Term exists'),
     'eval input' => array('term_exists|vocab_text', 'term_exists|term_text'),
      'help' => t('Check whether the specified term exists.'),
      'module' => 'Taxonomy',
    ),
  );
}

/**
 * Condition Implementation: Check if term exists on node.
 */
function ideal_condition_term_exists($settings) {
  $vid = $settings['vocabulary']['vocab_select'];
  $term_text = $settings['term_exists']['term_text'];
  $terms = taxonomy_get_term_by_name($term_text);

  if (!$vid) {
    // Term of any vocabulary is a match.
    return count($terms) > 0;
  }
  foreach ($terms as $term) {
    if ($term->vid == $vid) {
      return TRUE;
    }
  }
  return FALSE;
}
