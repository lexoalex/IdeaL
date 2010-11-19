<?php

/**
 * Implementation of hook_views_default_views().
 */
function main_views_default_views() {
  $views = array();

  // Exported view: admin_content2
  $view = new view;
  $view->name = 'admin_content2';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Default', 'default');
  $handler->override_option('relationships', array(
    'flag_content_rel' => array(
      'label' => 'flag - worth checking',
      'required' => 0,
      'flag' => 'worth_checking',
      'user_scope' => 'any',
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Title',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'type' => array(
      'label' => 'Type',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'Author',
      'link_to_user' => 1,
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'edit_node' => array(
      'label' => 'Edit',
      'text' => '',
      'exclude' => 0,
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'ops' => array(
      'label' => 'Flag link',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_type' => '',
      'exclude' => 0,
      'id' => 'ops',
      'table' => 'flag_content',
      'field' => 'ops',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'changed' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'title' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'title_op',
        'identifier' => 'title',
        'label' => 'Title contains',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'type_op',
        'identifier' => 'type',
        'label' => 'Type',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'keys' => array(
      'operator' => 'optional',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'keys_op',
        'identifier' => 'keys',
        'label' => 'Search',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'keys',
      'table' => 'search_index',
      'field' => 'keys',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'flagged' => array(
      'operator' => '=',
      'value' => 'All',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'flagged ',
        'label' => 'worth checking Flagged',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'flagged',
      'table' => 'flag_content',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer nodes',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'תוכן');
  $handler->override_option('empty', 'There are no objects satisfying the filter settings. Try changing them to get some results.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'type' => 'type',
      'name' => 'name',
      'edit_node' => 'edit_node',
      'ops' => 'ops',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '&nbsp;',
      ),
      'type' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'edit_node' => array(
        'separator' => '',
      ),
      'ops' => array(
        'separator' => '',
      ),
    ),
    'default' => '-1',
    'execution_type' => '1',
    'display_type' => '0',
    'hide_select_all' => 0,
    'skip_confirmation' => 0,
    'display_result' => 1,
    'merge_single_action' => 0,
    'selected_operations' => array(
      'flag_nodes:1980f2a3af0b5c3577850d4ba2600405' => 'flag_nodes:1980f2a3af0b5c3577850d4ba2600405',
      'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
      'flag_nodes:c67ca81009ff2486c09c91ac4d34c17c' => 'flag_nodes:c67ca81009ff2486c09c91ac4d34c17c',
      'flag_nodes:07ba074634c78075cbd0483fc51bb48a' => 'flag_nodes:07ba074634c78075cbd0483fc51bb48a',
      'flag_nodes:6fde15a46a35c34bc4deff5701049525' => 'flag_nodes:6fde15a46a35c34bc4deff5701049525',
      'flag_nodes:096d26f1e5ab0b4f2cc724cc0cc9be11' => 'flag_nodes:096d26f1e5ab0b4f2cc724cc0cc9be11',
      'views_bulk_operations_fields_action' => 'views_bulk_operations_fields_action',
      'views_bulk_operations_taxonomy_action' => 'views_bulk_operations_taxonomy_action',
      'node_promote_action' => 'node_promote_action',
      'node_publish_action' => 'node_publish_action',
      'node_unpromote_action' => 'node_unpromote_action',
      'node_save_action' => 'node_save_action',
      'flag_nodes:76e4c513dfadc798e2eb84ad0a677401' => 'flag_nodes:76e4c513dfadc798e2eb84ad0a677401',
      'flag_nodes:208a3d40409f50d07196ea1dcab3cb37' => 'flag_nodes:208a3d40409f50d07196ea1dcab3cb37',
      'flag_nodes:ef2bd7ade3e65234493d8eee4a20deb2' => 'flag_nodes:ef2bd7ade3e65234493d8eee4a20deb2',
      'node_unpublish_action' => 'node_unpublish_action',
      'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0',
      'node_assign_owner_action' => 0,
      'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
      'system_message_action' => 0,
      'views_bulk_operations_ruleset_action_rules_set_1' => 0,
      'views_bulk_operations_action' => 0,
      'views_bulk_operations_script_action' => 0,
      'node_make_sticky_action' => 0,
      'node_make_unsticky_action' => 0,
      'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
      'views_bulk_operations_argument_selector_action' => 0,
      'views_bulk_operations_ruleset_action_rules_points_to_comments_authors' => 0,
      'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
      'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
      'system_goto_action' => 0,
      'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
      'system_send_email_action' => 0,
      'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
      'node_unpublish_by_keyword_action' => 0,
    ),
    'views_bulk_operations_fields_action' => array(
      'php_code' => 0,
      'display_fields' => array(
        '_all_' => '_all_',
      ),
      '_error_element_base' => 'style_options][views_bulk_operations_fields_action][',
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('path', 'admin/content/node3');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'content 3',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  // Exported view: ideas
  $view = new view;
  $view->name = 'ideas';
  $view->description = 'List of ideas sort by popular, recent, all-times etc\'';
  $view->tag = 'ideas';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'votingapi_cache' => array(
      'label' => 'Vote results',
      'required' => 0,
      'votingapi' => array(
        'value_type' => 'points',
        'tag' => 'vote',
        'function' => 'sum',
      ),
      'id' => 'votingapi_cache',
      'table' => 'node',
      'field' => 'votingapi_cache',
      'relationship' => 'none',
    ),
    'flag_content_rel' => array(
      'label' => 'flag',
      'required' => 0,
      'flag' => 'in_action',
      'user_scope' => 'any',
      'id' => 'flag_content_rel',
      'table' => 'node',
      'field' => 'flag_content_rel',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('fields', array(
    'vud_node_widget' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'html' => FALSE,
        'strip_tags' => FALSE,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'vud_node_widget',
      'table' => 'node',
      'field' => 'vud_node_widget',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'By [name]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 1,
      'anonymous_text' => 'Guest',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'body' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '600',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'body',
      'table' => 'node_revisions',
      'field' => 'body',
      'relationship' => 'none',
    ),
    'comment_count' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'Comments [[comment_count]]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'comment_count',
      'table' => 'node_comment_statistics',
      'field' => 'comment_count',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'idea' => 'idea',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'flagged' => array(
      'operator' => '=',
      'value' => '0',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'flagged',
      'table' => 'flag_content',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'tid_op',
        'identifier' => 'tid',
        'label' => 'Categories',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '3',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'tid_1' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'tid_1_op',
        'identifier' => 'tid_1',
        'label' => 'Tags',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '2',
      'id' => 'tid_1',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Ideas');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler = $view->new_display('page', 'popular', 'page_1');
  $handler->override_option('sorts', array(
    'value' => array(
      'order' => 'DESC',
      'id' => 'value',
      'table' => 'votingapi_cache',
      'field' => 'value',
      'relationship' => 'votingapi_cache',
    ),
  ));
  $handler->override_option('title', 'Popular Ideas');
  $handler->override_option('path', 'popular-ideas');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Popular Ideas',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'recent', 'page_2');
  $handler->override_option('title', 'Recent Ideas');
  $handler->override_option('path', 'recent-ideas');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Recent Ideas',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'in action', 'page_3');
  $handler->override_option('sorts', array(
    'value' => array(
      'order' => 'DESC',
      'id' => 'value',
      'table' => 'votingapi_cache',
      'field' => 'value',
      'relationship' => 'votingapi_cache',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'idea' => 'idea',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'flagged' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'flagged',
      'table' => 'flag_content',
      'field' => 'flagged',
      'relationship' => 'flag_content_rel',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('title', 'Ideas in action');
  $handler->override_option('path', 'in-action');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Ideas in action',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'recent - block', 'block_1');
  $handler->override_option('fields', array(
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Recent Ideas');
  $handler->override_option('items_per_page', 10);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('row_options', array(
    'inline' => array(
      'created' => 'created',
      'title' => 'title',
    ),
    'separator' => '',
    'hide_empty' => 1,
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'recent close - block', 'block_2');
  $handler->override_option('fields', array(
    'created' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Ideas In action');
  $handler->override_option('items_per_page', 10);
  $handler->override_option('use_pager', FALSE);
  $handler->override_option('row_options', array(
    'inline' => array(
      'created' => 'created',
      'title' => 'title',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: ideas_archive
  $view = new view;
  $view->name = 'ideas_archive';
  $view->description = 'Display a list of months that link to content for that month.';
  $view->tag = 'default';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'order' => 'DESC',
      'granularity' => 'second',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'created_year_month' => array(
      'id' => 'created_year_month',
      'table' => 'node',
      'field' => 'created_year_month',
      'default_action' => 'summary desc',
      'style_plugin' => 'default_summary',
      'style_options' => array(
        'count' => 1,
        'override' => 1,
        'items_per_page' => '30',
      ),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1',
      'relationship' => 'none',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'default_argument_type' => 'fixed',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'operator' => '=',
      'value' => 1,
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Aarchive');
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'teaser' => TRUE,
    'links' => TRUE,
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('path', 'archive');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->override_option('arguments', array(
    'created_year_month' => array(
      'id' => 'created_year_month',
      'table' => 'node',
      'field' => 'created_year_month',
      'default_action' => 'summary asc',
      'style_plugin' => 'default_summary',
      'style_options' => array(
        'count' => 1,
        'override' => 0,
        'items_per_page' => '30',
      ),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '%1',
      'relationship' => 'none',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'default_argument_type' => 'fixed',
    ),
  ));
  $handler->override_option('block_description', 'Archive list');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: recent_comments
  $view = new view;
  $view->name = 'recent_comments';
  $view->description = 'Contains a block and a page to list recent comments; ';
  $view->tag = 'default';
  $view->view_php = '';
  $view->base_table = 'comments';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'nid' => array(
      'id' => 'nid',
      'table' => 'comments',
      'field' => 'nid',
      'label' => 'Node',
      'required' => FALSE,
    ),
  ));
  $handler->override_option('fields', array(
    'subject' => array(
      'id' => 'subject',
      'table' => 'comments',
      'field' => 'subject',
      'label' => '',
      'link_to_comment' => 1,
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'comments',
      'field' => 'timestamp',
      'label' => '',
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'comments',
      'field' => 'timestamp',
      'order' => 'DESC',
      'granularity' => 'second',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'nid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Recent comments');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('use_more', 1);
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('fields', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Reply to',
      'relationship' => 'nid',
      'link_to_node' => 1,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'comments',
      'field' => 'timestamp',
      'label' => '',
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'relationship' => 'none',
    ),
    'subject' => array(
      'id' => 'subject',
      'table' => 'comments',
      'field' => 'subject',
      'label' => '',
      'link_to_comment' => 1,
      'relationship' => 'none',
    ),
    'comment' => array(
      'id' => 'comment',
      'table' => 'comments',
      'field' => 'comment',
      'label' => '',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
      'timestamp' => 'timestamp',
    ),
    'separator' => '&nbsp;',
  ));
  $handler->override_option('path', 'comments/recent');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->override_option('block_description', 'Recent comments view');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  // Exported view: terms
  $view = new view;
  $view->name = 'terms';
  $view->description = 'Summary of terms';
  $view->tag = 'terms';
  $view->view_php = '';
  $view->base_table = 'term_data';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'vid' => array(
      'label' => 'node',
      'required' => 0,
      'id' => 'vid',
      'table' => 'term_node',
      'field' => 'vid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'name' => array(
      'label' => 'Term',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_taxonomy' => 1,
      'exclude' => 1,
      'id' => 'name',
      'table' => 'term_data',
      'field' => 'name',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[name]  ( [nid] )',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 1,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'relationship' => 'vid',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'views_sql_groupedfields' => array(
      'label' => 'Group By Fields',
      'alter' => array(
        'alter_text' => FALSE,
        'text' => '',
        'make_link' => FALSE,
        'path' => '',
        'alt' => '',
        'link_class' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'trim' => FALSE,
        'max_length' => '',
        'word_boundary' => TRUE,
        'ellipsis' => TRUE,
        'strip_tags' => FALSE,
        'html' => FALSE,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => '1',
      'id' => 'views_sql_groupedfields',
      'table' => 'views_groupby',
      'field' => 'views_sql_groupedfields',
      'relationship' => 'none',
      'views_groupby_fields_to_group' => array(
        'name' => 'name',
      ),
      'views_groupby_sql_function' => 'count',
      'views_groupby_fields_to_aggregate' => array(
        'nid' => 'nid',
      ),
      'views_groupby_field_sortby' => 'nid',
      'views_groupby_sortby_direction' => 'desc',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'vid' => array(
      'operator' => 'in',
      'value' => array(
        '3' => '3',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'vid',
      'table' => 'term_data',
      'field' => 'vid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('style_options', array(
    'grouping' => '',
  ));
  $handler = $view->new_display('block', 'Categories', 'block_1');
  $handler->override_option('filters', array(
    'vid' => array(
      'operator' => 'in',
      'value' => array(
        '3' => '3',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'vid',
      'table' => 'term_data',
      'field' => 'vid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Categories');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Tags', 'block_2');
  $handler->override_option('filters', array(
    'vid' => array(
      'operator' => 'in',
      'value' => array(
        '2' => '2',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'vid',
      'table' => 'term_data',
      'field' => 'vid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Tags');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
