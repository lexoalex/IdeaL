<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ideal_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin:admin
  $menu_links['admin:admin'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administer',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '9',
  );
  // Exported menu link: admin:admin/advanced_help
  $menu_links['admin:admin/advanced_help'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/advanced_help',
    'router_path' => 'admin/advanced_help',
    'link_title' => 'Advanced help',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/build
  $menu_links['admin:admin/build'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build',
    'router_path' => 'admin/build',
    'link_title' => 'Site building',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your site looks and feels.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/build/block
  $menu_links['admin:admin/build/block'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/block',
    'router_path' => 'admin/build/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/context
  $menu_links['admin:admin/build/context'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/context',
    'router_path' => 'admin/build/context',
    'link_title' => 'Context',
    'options' => array(
      'attributes' => array(
        'title' => 'Associate menus, views, blocks, etc. with different contexts to structure your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/features
  $menu_links['admin:admin/build/features'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/features',
    'router_path' => 'admin/build/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/flags
  $menu_links['admin:admin/build/flags'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/flags',
    'router_path' => 'admin/build/flags',
    'link_title' => 'Flags',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure flags for marking content with arbitary information (such as <em>offensive</em> or <em>bookmarked</em>).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/menu
  $menu_links['admin:admin/build/menu'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/menu',
    'router_path' => 'admin/build/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Control your site\'s navigation menu, primary links and secondary links. as well as rename and reorganize menu items.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/modules
  $menu_links['admin:admin/build/modules'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/modules',
    'router_path' => 'admin/build/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable add-on modules for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/path
  $menu_links['admin:admin/build/path'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/path',
    'router_path' => 'admin/build/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/themes
  $menu_links['admin:admin/build/themes'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/themes',
    'router_path' => 'admin/build/themes',
    'link_title' => 'Themes',
    'options' => array(
      'attributes' => array(
        'title' => 'Change which theme your site uses or allows users to set.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/build/views
  $menu_links['admin:admin/build/views'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/build/views',
    'router_path' => 'admin/build/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Views are customized lists of content on your system; they are highly configurable and give you control over how lists of content are presented.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: admin:admin/content
  $menu_links['admin:admin/content'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content management',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage your site\'s content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/content/comment
  $menu_links['admin:admin/content/comment'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment moderation queue.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/flags
  $menu_links['admin:admin/content/flags'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/flags',
    'router_path' => 'admin/content/flags',
    'link_title' => 'Reported abuse',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/node
  $menu_links['admin:admin/content/node'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/node',
    'router_path' => 'admin/content/node',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'View, edit, and delete your site\'s content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/node-settings
  $menu_links['admin:admin/content/node-settings'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/node-settings',
    'router_path' => 'admin/content/node-settings',
    'link_title' => 'Post settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Control posting behavior, such as teaser length, requiring previews before posting, and the number of posts on the front page.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/rss-publishing
  $menu_links['admin:admin/content/rss-publishing'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/rss-publishing',
    'router_path' => 'admin/content/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/taxonomy
  $menu_links['admin:admin/content/taxonomy'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/taxonomy',
    'router_path' => 'admin/content/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/types
  $menu_links['admin:admin/content/types'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/types',
    'router_path' => 'admin/content/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage posts by content type, including default status, front page promotion, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/content/webform
  $menu_links['admin:admin/content/webform'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/content/webform',
    'router_path' => 'admin/content/webform',
    'link_title' => 'Webforms',
    'options' => array(
      'attributes' => array(
        'title' => 'View and edit all the available webforms on your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin:admin/generate
  $menu_links['admin:admin/generate'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/generate',
    'router_path' => 'admin/generate',
    'link_title' => 'Generate items',
    'options' => array(
      'attributes' => array(
        'title' => 'Populate your database with dummy items.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/generate/content
  $menu_links['admin:admin/generate/content'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/generate/content',
    'router_path' => 'admin/generate/content',
    'link_title' => 'Generate content',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of nodes and comments. Optionally delete current items.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/generate',
  );
  // Exported menu link: admin:admin/generate/taxonomy
  $menu_links['admin:admin/generate/taxonomy'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/generate/taxonomy',
    'router_path' => 'admin/generate/taxonomy',
    'link_title' => 'Generate categories',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of vocabularies and terms. Optionally delete current categories.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/generate',
  );
  // Exported menu link: admin:admin/generate/user
  $menu_links['admin:admin/generate/user'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/generate/user',
    'router_path' => 'admin/generate/user',
    'link_title' => 'Generate users',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of users. Optionally delete current users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/generate',
  );
  // Exported menu link: admin:admin/generate/votingapi
  $menu_links['admin:admin/generate/votingapi'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/generate/votingapi',
    'router_path' => 'admin/generate/votingapi',
    'link_title' => 'Generate votes',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of votes on site content. Optionally delete existing votes.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/generate',
  );
  // Exported menu link: admin:admin/help
  $menu_links['admin:admin/help'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '9',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/reports
  $menu_links['admin:admin/reports'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports from system logs and other status information.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/reports/access-denied
  $menu_links['admin:admin/reports/access-denied'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin:admin/reports/dblog
  $menu_links['admin:admin/reports/dblog'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log entries',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin:admin/reports/page-not-found
  $menu_links['admin:admin/reports/page-not-found'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin:admin/reports/search
  $menu_links['admin:admin/reports/search'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin:admin/reports/status
  $menu_links['admin:admin/reports/status'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'admin/reports',
  );
  // Exported menu link: admin:admin/rules
  $menu_links['admin:admin/rules'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/rules',
    'router_path' => 'admin/rules',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Rules administration links.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/rules/ie
  $menu_links['admin:admin/rules/ie'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/rules/ie',
    'router_path' => 'admin/rules/ie',
    'link_title' => 'Import / Export',
    'options' => array(
      'attributes' => array(
        'title' => 'Export your rules as text or import rules.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/rules',
  );
  // Exported menu link: admin:admin/rules/rule_sets
  $menu_links['admin:admin/rules/rule_sets'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/rules/rule_sets',
    'router_path' => 'admin/rules/rule_sets',
    'link_title' => 'Rule sets',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and manage rule sets.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/rules',
  );
  // Exported menu link: admin:admin/rules/settings
  $menu_links['admin:admin/rules/settings'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/rules/settings',
    'router_path' => 'admin/rules/settings',
    'link_title' => 'Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Set display options, show/hide Rules messages.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'admin/rules',
  );
  // Exported menu link: admin:admin/rules/trigger
  $menu_links['admin:admin/rules/trigger'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/rules/trigger',
    'router_path' => 'admin/rules/trigger',
    'link_title' => 'Triggered rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Customize your site by configuring rules that are evaluated on events.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-2',
    'parent_path' => 'admin/rules',
  );
  // Exported menu link: admin:admin/settings
  $menu_links['admin:admin/settings'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings',
    'router_path' => 'admin/settings',
    'link_title' => 'Site configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust basic site configuration options.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-5',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/settings/actions
  $menu_links['admin:admin/settings/actions'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/actions',
    'router_path' => 'admin/settings/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/addthis
  $menu_links['admin:admin/settings/addthis'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/addthis',
    'router_path' => 'admin/settings/addthis',
    'link_title' => 'AddThis',
    'options' => array(
      'attributes' => array(
        'title' => 'Set username and customize look and feel for <a href="http://www.addthis.com/">AddThis</a> button.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/admin
  $menu_links['admin:admin/settings/admin'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/admin',
    'router_path' => 'admin/settings/admin',
    'link_title' => 'Administration tools',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for site administration tools.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/admin_menu
  $menu_links['admin:admin/settings/admin_menu'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/admin_menu',
    'router_path' => 'admin/settings/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/clean-urls
  $menu_links['admin:admin/settings/clean-urls'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/clean-urls',
    'router_path' => 'admin/settings/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/comment_notify
  $menu_links['admin:admin/settings/comment_notify'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/comment_notify',
    'router_path' => 'admin/settings/comment_notify',
    'link_title' => 'Comment notify',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings for e-mails about new comments.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/date-time
  $menu_links['admin:admin/settings/date-time'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/date-time',
    'router_path' => 'admin/settings/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for how Drupal displays date and time, as well as the system\'s default timezone.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/devel
  $menu_links['admin:admin/settings/devel'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/devel',
    'router_path' => 'admin/settings/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/build/block">block administration</a> page.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/error-reporting
  $menu_links['admin:admin/settings/error-reporting'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/error-reporting',
    'router_path' => 'admin/settings/error-reporting',
    'link_title' => 'Error reporting',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how Drupal deals with errors including 403/404 errors as well as PHP error reporting.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/faq
  $menu_links['admin:admin/settings/faq'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/faq',
    'router_path' => 'admin/settings/faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => 'Allows the user to configure the layout of questions and answers on a FAQ page.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/file-system
  $menu_links['admin:admin/settings/file-system'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/file-system',
    'router_path' => 'admin/settings/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/filters
  $menu_links['admin:admin/settings/filters'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/filters',
    'router_path' => 'admin/settings/filters',
    'link_title' => 'Input formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/image-toolkit
  $menu_links['admin:admin/settings/image-toolkit'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/image-toolkit',
    'router_path' => 'admin/settings/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/logging
  $menu_links['admin:admin/settings/logging'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/logging',
    'router_path' => 'admin/settings/logging',
    'link_title' => 'Logging and alerts',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destination, such as syslog, database, email, ...etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/logging/dblog
  $menu_links['admin:admin/settings/logging/dblog'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/logging/dblog',
    'router_path' => 'admin/settings/logging/dblog',
    'link_title' => 'Database logging',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging to the Drupal database logs. This is the most common method for small to medium sites on shared hosting. The logs are viewable from the admin pages.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings/logging',
  );
  // Exported menu link: admin:admin/settings/performance
  $menu_links['admin:admin/settings/performance'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/performance',
    'router_path' => 'admin/settings/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/search
  $menu_links['admin:admin/settings/search'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/search',
    'router_path' => 'admin/settings/search',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/site-information
  $menu_links['admin:admin/settings/site-information'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/site-information',
    'router_path' => 'admin/settings/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change basic site information, such as the site name, slogan, e-mail address, mission, front page and more.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/site-maintenance
  $menu_links['admin:admin/settings/site-maintenance'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/site-maintenance',
    'router_path' => 'admin/settings/site-maintenance',
    'link_title' => 'Site maintenance',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site off-line for maintenance or bring it back online.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/strongarm
  $menu_links['admin:admin/settings/strongarm'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/strongarm',
    'router_path' => 'admin/settings/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/userpoints
  $menu_links['admin:admin/settings/userpoints'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/userpoints',
    'router_path' => 'admin/settings/userpoints',
    'link_title' => '!Points settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for points',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/voteupdown
  $menu_links['admin:admin/settings/voteupdown'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/voteupdown',
    'router_path' => 'admin/settings/voteupdown',
    'link_title' => 'Vote Up/Down',
    'options' => array(
      'attributes' => array(
        'title' => 'Control the functioning of Vote Up/Down.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/votingapi
  $menu_links['admin:admin/settings/votingapi'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/votingapi',
    'router_path' => 'admin/settings/votingapi',
    'link_title' => 'Voting API',
    'options' => array(
      'attributes' => array(
        'title' => 'Global settings for the Voting API.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/webform
  $menu_links['admin:admin/settings/webform'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/webform',
    'router_path' => 'admin/settings/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Global configuration of webform functionality.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/settings/wysiwyg
  $menu_links['admin:admin/settings/wysiwyg'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/settings/wysiwyg',
    'router_path' => 'admin/settings/wysiwyg',
    'link_title' => 'Wysiwyg',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure client-side editors.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin:admin/user
  $menu_links['admin:admin/user'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user',
    'router_path' => 'admin/user',
    'link_title' => 'User management',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage your site\'s users, groups and access to site features.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Exported menu link: admin:admin/user/permissions
  $menu_links['admin:admin/user/permissions'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/permissions',
    'router_path' => 'admin/user/permissions',
    'link_title' => 'Permissions',
    'options' => array(
      'attributes' => array(
        'title' => 'Determine access to features by selecting permissions for roles.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin:admin/user/roles
  $menu_links['admin:admin/user/roles'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/roles',
    'router_path' => 'admin/user/roles',
    'link_title' => 'Roles',
    'options' => array(
      'attributes' => array(
        'title' => 'List, edit, or add user roles.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin:admin/user/rules
  $menu_links['admin:admin/user/rules'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/rules',
    'router_path' => 'admin/user/rules',
    'link_title' => 'Access rules',
    'options' => array(
      'attributes' => array(
        'title' => 'List and create rules to disallow usernames, e-mail addresses, and IP addresses.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin:admin/user/settings
  $menu_links['admin:admin/user/settings'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/settings',
    'router_path' => 'admin/user/settings',
    'link_title' => 'User settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, and user pictures.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin:admin/user/user
  $menu_links['admin:admin/user/user'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/user',
    'router_path' => 'admin/user/user',
    'link_title' => 'Users',
    'options' => array(
      'attributes' => array(
        'title' => 'List, add, and edit users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin:admin/user/userpoints
  $menu_links['admin:admin/user/userpoints'] = array(
    'menu_name' => 'admin',
    'link_path' => 'admin/user/userpoints',
    'router_path' => 'admin/user/userpoints',
    'link_title' => '!Points',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage points',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: devel:devel/cache/clear
  $menu_links['devel:devel/cache/clear'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Empty cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear the CSS cache and all database cache tables which store page, node, theme and variable caches.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/elements
  $menu_links['devel:devel/elements'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/elements',
    'router_path' => 'devel/elements',
    'link_title' => 'Hook_elements()',
    'options' => array(
      'attributes' => array(
        'title' => 'View the active form/render elements for this site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/menu/reset
  $menu_links['devel:devel/menu/reset'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/reset',
    'router_path' => 'devel/menu/reset',
    'link_title' => 'Rebuild menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Rebuild menu based on hook_menu() and revert any custom changes. All menu items return to their default settings.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/php
  $menu_links['devel:devel/php'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/php',
    'router_path' => 'devel/php',
    'link_title' => 'Execute PHP Code',
    'options' => array(
      'attributes' => array(
        'title' => 'Execute some PHP code',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/phpinfo
  $menu_links['devel:devel/phpinfo'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/phpinfo',
    'router_path' => 'devel/phpinfo',
    'link_title' => 'PHPinfo()',
    'options' => array(
      'attributes' => array(
        'title' => 'View your server\'s PHP configuration',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/reference
  $menu_links['devel:devel/reference'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reference',
    'router_path' => 'devel/reference',
    'link_title' => 'Function reference',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of currently defined user functions with documentation links.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/reinstall
  $menu_links['devel:devel/reinstall'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reinstall',
    'router_path' => 'devel/reinstall',
    'link_title' => 'Reinstall modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Run hook_uninstall() and then hook_install() for a given module.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/session
  $menu_links['devel:devel/session'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/session',
    'router_path' => 'devel/session',
    'link_title' => 'Session viewer',
    'options' => array(
      'attributes' => array(
        'title' => 'List the contents of $_SESSION.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/theme/registry
  $menu_links['devel:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: devel:devel/variable
  $menu_links['devel:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:bookmarks
  $menu_links['navigation:bookmarks'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'bookmarks',
    'router_path' => 'bookmarks',
    'link_title' => 'My bookmarks',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:faq
  $menu_links['navigation:faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: navigation:filter/tips
  $menu_links['navigation:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:logout
  $menu_links['navigation:logout'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: navigation:myuserpoints
  $menu_links['navigation:myuserpoints'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'myuserpoints',
    'router_path' => 'myuserpoints',
    'link_title' => 'My !points',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add
  $menu_links['navigation:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create content',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: navigation:node/add/faq
  $menu_links['navigation:node/add/faq'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faq',
    'router_path' => 'node/add/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'A frequently asked question and its answer.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/idea
  $menu_links['navigation:node/add/idea'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/idea',
    'router_path' => 'node/add/idea',
    'link_title' => 'Idea',
    'options' => array(
      'attributes' => array(
        'title' => 'An idea which suggested by a user',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/profile
  $menu_links['navigation:node/add/profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/profile',
    'router_path' => 'node/add/profile',
    'link_title' => 'Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'A user profile built as content.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/webform
  $menu_links['navigation:node/add/webform'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/webform',
    'router_path' => 'node/add/webform',
    'link_title' => 'Webform',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:search
  $menu_links['navigation:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:user/%
  $menu_links['navigation:user/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'user/%',
    'router_path' => 'user/%',
    'link_title' => 'My account',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:userpoints
  $menu_links['navigation:userpoints'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'userpoints',
    'router_path' => 'userpoints',
    'link_title' => 'Users by !points',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:faq
  $menu_links['primary-links:faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:in-action
  $menu_links['primary-links:in-action'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'in-action',
    'router_path' => 'in-action',
    'link_title' => 'Ideas in action',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:node/add/idea
  $menu_links['primary-links:node/add/idea'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/idea',
    'router_path' => 'node/add/idea',
    'link_title' => 'New Idea',
    'options' => array(
      'attributes' => array(
        'title' => 'Suggest a new idea',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:popular-ideas
  $menu_links['primary-links:popular-ideas'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'popular-ideas',
    'router_path' => 'popular-ideas',
    'link_title' => 'Popular Ideas',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:recent-ideas
  $menu_links['primary-links:recent-ideas'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'recent-ideas',
    'router_path' => 'recent-ideas',
    'link_title' => 'Recent Ideas',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: primary-links:user
  $menu_links['primary-links:user'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login/Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('!Points');
  t('!Points settings');
  t('Access rules');
  t('Actions');
  t('AddThis');
  t('Administer');
  t('Administration menu');
  t('Administration tools');
  t('Advanced help');
  t('Blocks');
  t('Clean URLs');
  t('Comment notify');
  t('Comments');
  t('Compose tips');
  t('Content');
  t('Content management');
  t('Content types');
  t('Context');
  t('Create content');
  t('Database logging');
  t('Date and time');
  t('Devel settings');
  t('Empty cache');
  t('Error reporting');
  t('Execute PHP Code');
  t('FAQ');
  t('Features');
  t('File system');
  t('Flags');
  t('Frequently Asked Questions');
  t('Function reference');
  t('Generate categories');
  t('Generate content');
  t('Generate items');
  t('Generate users');
  t('Generate votes');
  t('Help');
  t('Hook_elements()');
  t('Idea');
  t('Ideas in action');
  t('Image toolkit');
  t('Import / Export');
  t('Input formats');
  t('Log out');
  t('Logging and alerts');
  t('Login/Register');
  t('Menus');
  t('Modules');
  t('My !points');
  t('My account');
  t('My bookmarks');
  t('New Idea');
  t('PHPinfo()');
  t('Performance');
  t('Permissions');
  t('Popular Ideas');
  t('Post settings');
  t('Profile');
  t('RSS publishing');
  t('Rebuild menus');
  t('Recent Ideas');
  t('Recent log entries');
  t('Reinstall modules');
  t('Reported abuse');
  t('Reports');
  t('Roles');
  t('Rule sets');
  t('Rules');
  t('Search');
  t('Search settings');
  t('Session viewer');
  t('Settings');
  t('Site building');
  t('Site configuration');
  t('Site information');
  t('Site maintenance');
  t('Status report');
  t('Strongarm');
  t('Taxonomy');
  t('Theme registry');
  t('Themes');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Triggered rules');
  t('URL aliases');
  t('User management');
  t('User settings');
  t('Users');
  t('Users by !points');
  t('Variable editor');
  t('Views');
  t('Vote Up/Down');
  t('Voting API');
  t('Webform');
  t('Webforms');
  t('Wysiwyg');


  return $menu_links;
}
