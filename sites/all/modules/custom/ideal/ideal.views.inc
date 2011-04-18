<?php 
/**
* Implementation of hook_views_data().
*/
function ideal_views_data() {
 	// Table definition.
 	$data['first_stage_comments_count']['table']['group'] = t('Node');
	$data['first_stage_comments_count']['table']['join'] = array(
		'#global' => array(),
 	);
 	// Fields.
 	$data['first_stage_comments_count']['null'] = array(
   	'title' => t('First stage comments count'),
   	'help' => t("Returns the count of only the first stage comments"),
   	'field' => array(
   		'handler' => 'views_handler_field_first_stage_comments',
 	  ),
 	);
 	
 	// Table definition.
 	$data['ideal_view']['table']['group'] = t('View');
	$data['ideal_view']['table']['join'] = array(
		'#global' => array(),
 	);
 	// Fields.
 	$data['ideal_view']['view'] = array(
   	'title' => t('Ideal view'),
   	'help' => t('Returns view'),
   	'field' => array(
   		'handler' => 'views_handler_field_ideal_view',
 	  ),
 	);
 	return $data;
} 