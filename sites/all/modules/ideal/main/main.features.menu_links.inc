<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function main_menu_default_menu_links() {
  $menu_links = array();

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
  t('FAQ');
  t('Ideas in action');
  t('Login/Register');
  t('New Idea');
  t('Popular Ideas');
  t('Recent Ideas');


  return $menu_links;
}
