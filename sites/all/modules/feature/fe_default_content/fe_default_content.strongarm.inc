<?php

/**
 * Implementation of hook_strongarm().
 */
function fe_default_content_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_automatic_for_comments';
  $strongarm->value = '1';

  $export['uuid_automatic_for_comments'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_automatic_for_nodes';
  $strongarm->value = array(
    'challenge' => 'challenge',
    'faq' => 'faq',
    'idea' => 'idea',
    'news' => 'news',
    'project' => 'project',
    'webform' => 'webform',
    'page' => 0,
    'profile' => 0,
  );

  $export['uuid_automatic_for_nodes'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_automatic_for_taxonomy';
  $strongarm->value = array(
    2 => 2,
    3 => 3,
    1 => 0,
  );

  $export['uuid_automatic_for_taxonomy'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_automatic_for_users';
  $strongarm->value = '1';

  $export['uuid_automatic_for_users'] = $strongarm;
  return $export;
}
