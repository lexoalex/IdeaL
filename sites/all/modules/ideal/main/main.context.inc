<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function main_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ideas-block_1' => array(
          'module' => 'views',
          'delta' => 'ideas-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-ideas-block_2' => array(
          'module' => 'views',
          'delta' => 'ideas-block_2',
          'region' => 'content',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['front_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_comments-block',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-terms-block_2' => array(
          'module' => 'views',
          'delta' => 'terms-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-terms-block_1' => array(
          'module' => 'views',
          'delta' => 'terms-block_1',
          'region' => 'right',
          'weight' => 2,
        ),
        'ideal-categories' => array(
          'module' => 'ideal',
          'delta' => 'categories',
          'region' => 'right',
          'weight' => 3,
        ),
        'ideal-tags' => array(
          'module' => 'ideal',
          'delta' => 'tags',
          'region' => 'right',
          'weight' => 4,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['sitewide'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'view_ideas';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'ideas:page_1' => 'ideas:page_1',
        'ideas:page_2' => 'ideas:page_2',
        'ideas:page_3' => 'ideas:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_comments-block' => array(
          'module' => 'views',
          'delta' => 'recent_comments-block',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['view_ideas'] = $context;
  return $export;
}
