<?php 

/**
 * Form for input term ID or term name. 
 * @param $settings
 * @param $form
 * @param $form_state
 */
function ideal_condition_content_has_term_form($settings, &$form, $form_state) {
  $form['settings']['term'] = array(
    '#type' => 'textfield',
    '#title' => t('Term ID or term name'),
    '#default_value' => !empty($settings['term']) ? $settings['term'] : '',
    '#description' => t("Provide a term ID (tid) or a term name matching text (case is ignore)."),
    '#required' => TRUE,
  );
}

function ideal_condition_content_term_changed_form($settings, &$form, &$form_state) {
  $settings += array('term_id' => '');
  $form['settings']['term_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Term ID'),
    '#default_value' => $settings['term_id'],
    '#description' => t('Select the term id (tid) to look at.'),
    '#required' => TRUE,
  );
}