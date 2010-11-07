<?php
/**
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
