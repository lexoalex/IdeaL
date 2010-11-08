<?php

/**
 * Implementation of hook_strongarm().
 */
function main_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_nodetype_profile';
  $strongarm->value = 1;

  $export['addthis_nodetype_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';

  $export['clean_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_idea';
  $strongarm->value = array(
    'title' => '-9',
    'body_field' => '-8',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-4',
    'path' => '3',
    'detailed_question' => '-2',
    'flag' => '-3',
    'vud_node_widget_display' => '-10',
    'xmlsitemap' => '4',
  );

  $export['content_extra_weights_idea'] = $strongarm;
  return $export;
}
