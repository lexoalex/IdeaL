<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function main_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: create idea content
  $permissions['create idea content'] = array(
    'name' => 'create idea content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: subscribe to comments
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: use vote up/down
  $permissions['use vote up/down'] = array(
    'name' => 'use vote up/down',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: use vote up/down on nodes
  $permissions['use vote up/down on nodes'] = array(
    'name' => 'use vote up/down on nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: view addthis
  $permissions['view addthis'] = array(
    'name' => 'view addthis',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: view faq page
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  // Exported permission: view vote up/down count on nodes
  $permissions['view vote up/down count on nodes'] = array(
    'name' => 'view vote up/down count on nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'privilege',
      '4' => 'professional',
    ),
  );

  return $permissions;
}
