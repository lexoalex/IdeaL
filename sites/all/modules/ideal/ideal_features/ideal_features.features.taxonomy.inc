<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ideal_features_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Categories',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_categories',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
    'in_action' => array(
      'name' => 'In action',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_in_action',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
    'tags' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_tags',
      'weight' => '0',
      'type' => NULL,
      'nodes' => array(),
    ),
  );
}
