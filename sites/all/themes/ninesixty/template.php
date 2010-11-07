<?php
// $Id: template.php,v 1.1.2.3 2009/07/18 17:48:55 dvessel Exp $


/**
 * Preprocessor for page.tpl.php template file.
 */
function ninesixty_preprocess_page(&$vars, $hook) {
  // For easy printing of variables.
  $vars['logo_img']         = $vars['logo'] ? theme('image', substr($vars['logo'], strlen(base_path())), t('Home'), t('Home')) : '';
  $vars['linked_logo_img']  = $vars['logo_img'] ? l($vars['logo_img'], '<front>', array('attributes' => array('rel' => 'home'), 'title' => t('Home'), 'html' => TRUE)) : '';
  $vars['linked_site_name'] = $vars['site_name'] ? l($vars['site_name'], '<front>', array('attributes' => array('rel' => 'home'), 'title' => t('Home'))) : '';
  $vars['main_menu_links']      = theme('links', $vars['primary_links'], array('class' => 'links main-menu'));
  $vars['secondary_menu_links'] = theme('links', $vars['secondary_links'], array('class' => 'links secondary-menu'));

  // Make sure framework styles are placed above all others.
  $vars['css_alt'] = ninesixty_css_reorder($vars['css']);
  $vars['styles'] = drupal_get_css($vars['css_alt']);
}

/**
 * Contextually adds 960 Grid System classes.
 *
 * The first parameter passed is the *default class*. All other parameters must
 * be set in pairs like so: "$variable, 3". The variable can be anything available
 * within a template file and the integer is the width set for the adjacent box
 * containing that variable.
 *
 *  class="<?php print ns('grid-16', $var_a, 6); ?>"
 *
 * If $var_a contains data, the next parameter (integer) will be subtracted from
 * the default class. See the README.txt file.
 */
function ns() {
  $args = func_get_args();
  $default = array_shift($args);
  // Get the type of class, i.e., 'grid', 'pull', 'push', etc.
  // Also get the default unit for the type to be procesed and returned.
  list($type, $return_unit) = explode('-', $default);

  // Process the conditions.
  $flip_states = array('var' => 'int', 'int' => 'var');
  $state = 'var';
  foreach ($args as $arg) {
    if ($state == 'var') {
      $var_state = !empty($arg);
    }
    elseif ($var_state) {
      $return_unit = $return_unit - $arg;
    }
    $state = $flip_states[$state];
  }

  $output = '';
  // Anything below a value of 1 is not needed.
  if ($return_unit > 0) {
    $output = $type . '-' . $return_unit;
  }
  return $output;
}

/**
 * This rearranges how the style sheets are included so the framework styles
 * are included first.
 *
 * Sub-themes can override the framework styles when it contains css files with
 * the same name as a framework style. This can be removed once Drupal supports
 * weighted styles.
 */
function ninesixty_css_reorder($css) {
  global $theme_info, $base_theme_info;

  // Dig into the framework .info data.
  $framework = !empty($base_theme_info) ? $base_theme_info[0]->info : $theme_info->info;

  // Pull framework styles from the themes .info file and place them above all stylesheets.
  if (isset($framework['stylesheets'])) {
    foreach ($framework['stylesheets'] as $media => $styles_from_960) {
      // Setup framework group.
      if (isset($css[$media])) {
        $css[$media] = array_merge(array('framework' => array()), $css[$media]);
      }
      else {
        $css[$media]['framework'] = array();
      }
      foreach ($styles_from_960 as $style_from_960) {
        // Force framework styles to come first.
        if (strpos($style_from_960, 'framework') !== FALSE) {
          $framework_shift = $style_from_960;
          $remove_styles = array($style_from_960);
          // Handle styles that may be overridden from sub-themes.
          foreach ($css[$media]['theme'] as $style_from_var => $preprocess) {
            if ($style_from_960 != $style_from_var && basename($style_from_960) == basename($style_from_var)) {
              $framework_shift = $style_from_var;
              $remove_styles[] = $style_from_var;
              break;
            }
          }
          $css[$media]['framework'][$framework_shift] = TRUE;
          foreach ($remove_styles as $remove_style) {
            unset($css[$media]['theme'][$remove_style]);
          }
        }
      }
    }
  }

  return $css;
}

//function ninesixty_breadcrumb($breadcrumb){
//  if (!empty($breadcrumb)) {
//    $breadcrumb[] = drupal_get_title();
//    if ($node = menu_get_object()) {
// 	    switch ($node->type) {
// 	    	case 'program':
// 	    		$book = node_load($node->book['bid']);
// 	    	  if ($book->nid == 174) {
// 	    	  	$view = views_get_view('ba');
//            $path = $view->display['page_1']->display_options['path'];
//            $breadcrumb[1] = l(t($book->title), $path);
// 	    	  }
//        break;
//        case 'course':
//        	$book = node_load($node->book['bid']);
//          $view = views_get_view('advance_programs');
//          $path = $view->display['page_1']->display_options['path'];
//          $breadcrumb[1] = l(t($book->title), $path);
//        break;
// 	    }
// 	    
//    }
//        
//        return '<div class="breadcrumb">'. implode(' » ', $breadcrumb) .'</div>';
//    }
//}

/**
 * Preprocessor for node.tpl.php template file.
 */
function ninesixty_preprocess_node(&$vars) { 
	$node = $vars['node'];
	if ($node->type == 'department' || $node->type == 'program') {
	  $vars['template_files'][] = 'node-ba';
	  foreach ($node->content as $field) {
	    $name = $field['#field_name'];
	    if ($field['#children']) {
	      if ($name != 'field_taxonomy_ref' &&
	      $name != 'field_interested_also_in' &&
	      $name != 'field_start_of_study' &&
	      $name != 'field_course_of_study' ) {
	          $vars['fields'][$name] = _get_full_node_link($node, $name);
	      }  
	    }
	  }
	}//dpm($vars);
}

//===API===

/**
 * return a link to the full node page anchor.
 * @param unknown_type $node
 * @param unknown_type $field_name
 * @return Ambigous <An, string>
 */
function _get_full_node_link($node, $field_name) {
  return l(t($node->content[$field_name]['field']['#title']), $node->path . '/full', array('fragment' => $node->content[$field_name]['field']['#title']));
}
