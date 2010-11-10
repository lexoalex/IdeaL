<?php

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return
 *   An array of modules to enable.
 */
function ideal_pro_profile_modules() { 
    $core = array(
      'comment', 
      'dblog',
      'help', 
    	'menu',  
    	'path',
    	'search',
    	'taxonomy',
      'tracker',
    );
    
    $contrib = array(
      //pressflow
      'cookie_cache_bypass',
      'path_alias_cache',
      //ctools
      'ctools', 
       
      'addthis', 
      'admin', 
      'admin_menu',  
      'adminrole', 
      'advanced_help', 
      'backup_migrate',  
      'backup_migrate_files',  
      'boxes', 
      'comment_notify',  
      'content', 
 //   'content_profile', 
 //   'content_profile_registration',  
 //   'content_profile_tokens', 
      'content_taxonomy',  
      'content_taxonomy_options', 
      'context', 
      'context_layouts', 
      'context_ui',
      'devel', 
 //   'devel_generate',  
      'diff',
      'faq', 
      'features',  
      'flag',  
      'flag_abuse',   
      'ideal',
    	'install_profile_api',
      'jquery_ui',
    	'login_destination',
      'main',
      'optionwidgets', 
    	'pathauto', 
    	'rules', 
    	'rules_admin', 
    	'strongarm', 
    	'token', 
    	'userpoints',
    	'userpoints_rules',  
    	'views', 
    	'views_ui',  
    	'votingapi', 
    	'vud', 
    	'vud_node',  
    	'webform', 
    	'wysiwyg', 
    );
    return array_merge($core, $contrib);
}

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function ideal_pro_profile_details() {
  return array(
    'name' => 'IdeaL',
    'description' => 'This profile will enable the default functionality for an Idea Management web site.'
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function ideal_pro_profile_task_list() {
  
  global $conf;
  $conf['site_name'] = '';
  $conf['site_footer'] = 'IdeaL by <a href="http://www.linnovate.net">Linnovate</a>';
  $conf['theme_settings'] = array(
    'default_logo' => 0,
    'logo_path' => 'profiles/ideal_pro/ideal_pro_logo.png',
  );
}

/**
 * Perform any final installation tasks for this profile.
 *
 * The installer goes through the profile-select -> locale-select
 * -> requirements -> database -> profile-install-batch
 * -> locale-initial-batch -> configure -> locale-remaining-batch
 * -> finished -> done tasks, in this order, if you don't implement
 * this function in your profile.
 *
 * If this function is implemented, you can have any number of
 * custom tasks to perform after 'configure', implementing a state
 * machine here to walk the user through those tasks. First time,
 * this function gets called with $task set to 'profile', and you
 * can advance to further tasks by setting $task to your tasks'
 * identifiers, used as array keys in the hook_profile_task_list()
 * above. You must avoid the reserved tasks listed in
 * install_reserved_tasks(). If you implement your custom tasks,
 * this function will get called in every HTTP request (for form
 * processing, printing your information screens and so on) until
 * you advance to the 'profile-finished' task, with which you
 * hand control back to the installer. Each custom page you
 * return needs to provide a way to continue, such as a form
 * submission or a link. You should also set custom page titles.
 *
 * You should define the list of custom tasks you implement by
 * returning an array of them in hook_profile_task_list(), as these
 * show up in the list of tasks on the installer user interface.
 *
 * Remember that the user will be able to reload the pages multiple
 * times, so you might want to use variable_set() and variable_get()
 * to remember your data and control further processing, if $task
 * is insufficient. Should a profile want to display a form here,
 * it can; the form should set '#redirect' to FALSE, and rely on
 * an action in the submit handler, such as variable_set(), to
 * detect submission and proceed to further tasks. See the configuration
 * form handling code in install_tasks() for an example.
 *
 * Important: Any temporary variables should be removed using
 * variable_del() before advancing to the 'profile-finished' phase.
 *
 * @param $task
 *   The current $task of the install system. When hook_profile_tasks()
 *   is first called, this is 'profile'.
 * @param $url
 *   Complete URL to be used for a link or form action on a custom page,
 *   if providing any, to allow the user to proceed with the installation.
 *
 * @return
 *   An optional HTML string to display to the user. Only used if you
 *   modify the $task, otherwise discarded.
 */
function ideal_pro_profile_tasks(&$task, $url) {
  
  install_include(ideal_pro_profile_modules());

  // Insert default user-defined node types into the database. For a complete
  // list of available node type attributes, refer to the node type API
  // documentation at: http://api.drupal.org/api/HEAD/function/hook_node_info.
  $types = array(
    array(
      'type' => 'page',
      'name' => st('Page'),
      'module' => 'node',
      'description' => st("A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an \"About us\" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site's initial home page."),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
      'help' => '',
      'min_word_count' => '',
    ),
//    array(
//      'type' => 'idea',
//      'name' => st('Idea'),
//      'module' => 'node',
//    	'title_label' => 'Idea',
//  		'body_label' => 'description',
//      'description' => st("An <em>idea</em>, allows authenticated users to describe their ideas."),
//      'custom' => TRUE,
//      'modified' => TRUE,
//      'locked' => FALSE,
//      'help' => '',
//      'min_word_count' => '',
//    	'node_options' => 
//        array (
//          'status' =>   TRUE,
//          'promote' =>  FALSE,
//          'sticky' =>   FALSE,
//          'revision' => FALSE,
//        ),
//      'language_content_type' => '0',
//      'upload' => '0',
//      'nodewords' => 0,
//      'modified' => '1',
//      'locked' => '0',
//      'rdf_schema_class' => '',
//      'comment' => '2',
//      'comment_default_mode' => '3',
//      'comment_default_order' => '1',
//      'comment_default_per_page' => '50',
//      'comment_controls' => '3',
//      'comment_anonymous' => 0,
//      'comment_subject_field' => '0',
//      'comment_preview' => '0',
//      'comment_form_location' => '1',
//      'xmlsitemap_node_type_priority' => '0.5',
//      'xmlsitemap_old_priority' => '0.5',  
//    ),
  );

  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }
  
  // Default page to not be promoted and have comments disabled.
  variable_set('node_options_page', array('status'));
  variable_set('comment_page', COMMENT_NODE_DISABLED);

  // Don't display date and author information for page nodes by default.
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_page'] = FALSE;
  variable_set('theme_settings', $theme_settings);
  
  //theme info
  _ideal_pro_set_theme('ideal_theme', 'rubik', 'home');
      
  //creates dummy terms.
  _ideal_pro_create_terms();
  
  //creates dummy users.
  _ideal_pro_add_users();
  
  //creates dummy ideas.
  _ideal_pro_add_ideas();
  
  //creates general pages.
  _ideal_pro_add_pages();
  
  //creates menu items.
  _ideal_pro_add_menu_items();
  
  // Update the menu router information.
  menu_rebuild();
}

/**
 * Implementation of hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function ideal_pro_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure') {
    // Set default for site name field.
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  }
}

/**
 * themes settings
 * @param $default_theme
 * @param $admin_theme
 * @param u$frontpage
 */
function  _ideal_pro_set_theme($default_theme, $admin_theme, $frontpage) {
  //disabled the drupal default theme
  install_disable_theme('garland');
  
  //default theme
  install_default_theme($default_theme);
  
  //admin theme
  install_admin_theme($default_theme);
  variable_set('node_admin_theme', TRUE); 
  
  // Basic settings.
  variable_set('site_frontpage', $frontpage);
  
  //remove default blocks
  install_disable_block('user', 0, $default_theme);//login block.
  install_disable_block('user', 1, $default_theme);//navigation block
  install_disable_block('system', 0, $default_theme);//powered by drupal block.
  
  // Set welcome message for anonymous users
  variable_set('front_page', 'Welcome to '. variable_get('site_name', 'IdeaL') .'!');
}

/**
 * Create dummy terms.
 */
function _ideal_pro_create_terms() {
  $vids = array(2, 3, 4);
  foreach ($vids as $vid) {
    $names = array(abc, def, ghi);
    foreach ($names as $name) {
      install_taxonomy_add_term($vid, $name . ' - ' . $vid);
    }
  }
}

/**
 * Add dummy users.
 */
function _ideal_pro_add_users() {
  $users = array(dan, ben, sara);
  foreach($users as $user){
    install_add_user($user, $user . '1234', $user . '@email.com', 'authenticated user', 1);
  }
}

/**
 * Generate dummy of content type idea.
 */
function _ideal_pro_add_ideas() {
  $user = user_load(array('uid' => 1));
  $properties = array(
  	'type' => 'idea',
  	'uid' => 1,
    'name' => $user->name,
  );
  $ideas = array('Good idea', 'Great idea', 'An idea');
  foreach($ideas as $idea){
    install_create_node($idea, 'Your idea description..', $properties);
  } 
}

/**
 * Generate general pages.
 */
function _ideal_pro_add_pages() {
  $user = user_load(array('uid' => 1));
  $properties = array(
  	'type' => 'page',
  	'uid' => 1,
    'name' => $user->name,
  );
  $pages = array('About us', 'Terms of Use', 'Privacy Policy');
  foreach($pages as $page){
    install_create_node($page, 'Your content goes here', $properties);
  }
}

/**
 * Set menu items..
 */
function _ideal_pro_add_menu_items() {
  //install_menu_create_menu_item($path, $title, $description = '', $menu = 'navigation', $plid = 0, $weight = 0, $module = 'menu', $hidden = 0, $has_children = 0, $expanded = 0, $customized = 0, $updated = 0);
  install_menu_create_menu_item('about-us','About Us','', 'primary-links', 0, 1);
  install_menu_create_menu_item('terms-of-use','Terms of Use', '', 'primary-links', 0, 2);
  install_menu_create_menu_item('privacy-policy','Privacy Policy', '', 'primary-links', 0, 3);
  install_menu_create_menu_item('faq','FAQ', '', 'primary-links', 0, 4);
}

