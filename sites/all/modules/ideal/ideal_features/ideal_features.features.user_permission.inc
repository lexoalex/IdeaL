<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ideal_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
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

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: access vote up/down statistics
  $permissions['access vote up/down statistics'] = array(
    'name' => 'access vote up/down statistics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access webform results
  $permissions['access webform results'] = array(
    'name' => 'access webform results',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer addthis
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer comment notify
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer faq
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer faq order
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer flags
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer userpoints
  $permissions['administer userpoints'] = array(
    'name' => 'administer userpoints',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer vote up/down
  $permissions['administer vote up/down'] = array(
    'name' => 'administer vote up/down',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer vote up/down on nodes
  $permissions['administer vote up/down on nodes'] = array(
    'name' => 'administer vote up/down on nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer voting api
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear webform results
  $permissions['clear webform results'] = array(
    'name' => 'clear webform results',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create faq
  $permissions['create faq'] = array(
    'name' => 'create faq',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create webforms
  $permissions['create webforms'] = array(
    'name' => 'create webforms',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any idea content
  $permissions['delete any idea content'] = array(
    'name' => 'delete any idea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete faq content
  $permissions['delete faq content'] = array(
    'name' => 'delete faq content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own idea content
  $permissions['delete own idea content'] = array(
    'name' => 'delete own idea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any idea content
  $permissions['edit any idea content'] = array(
    'name' => 'edit any idea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own idea content
  $permissions['edit own idea content'] = array(
    'name' => 'edit own idea content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own webforms
  $permissions['edit own webforms'] = array(
    'name' => 'edit own webforms',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit webform submissions
  $permissions['edit webform submissions'] = array(
    'name' => 'edit webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit webforms
  $permissions['edit webforms'] = array(
    'name' => 'edit webforms',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'privilege',
      '3' => 'professional',
    ),
  );

  // Exported permission: reset abuse flags
  $permissions['reset abuse flags'] = array(
    'name' => 'reset abuse flags',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: reset vote up/down votes
  $permissions['reset vote up/down votes'] = array(
    'name' => 'reset vote up/down votes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: see vote up/down node stats
  $permissions['see vote up/down node stats'] = array(
    'name' => 'see vote up/down node stats',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for additional processing
  $permissions['use PHP for additional processing'] = array(
    'name' => 'use PHP for additional processing',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
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
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'administrator',
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

  // Exported permission: view own userpoints
  $permissions['view own userpoints'] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view userpoints
  $permissions['view userpoints'] = array(
    'name' => 'view userpoints',
    'roles' => array(
      '0' => 'administrator',
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
