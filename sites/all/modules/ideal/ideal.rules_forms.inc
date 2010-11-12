<?php 

/**
 * Condition Taxonomy: form to enter a term to check
 */
function ideal_condition_term_exists_form($settings, &$form) {
  $form['settings']['term_exists'] = array(
    '#type' => 'fieldset',
    '#title' => t('Vocabulary and term definition'),
  );
  $options = _rules_action_taxonomy_get_vocab();
  $options[0] = t('None');
  $form['settings']['term_exists']['vocab_select'] = array(
   '#type' => 'select',
    '#title' => t('Select a vocabulary'),
    '#options' => $options,
    '#default_value' => !empty($settings['term_exists']['vocab_select']) ? $settings['term_exists']['vocab_select'] : '',
    '#description' => t('Select None if any term from any vocabulary is acceptable. Otherwise select the exact vocabulary.'),
    '#required' => TRUE,
    '#disabled' => empty($options),
  );
  $form['settings']['term_exists']['term_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter the name of the term'),
    '#default_value' => !empty($settings['term_exists']['term_text']) ? $settings['term_exists']['term_text'] : '',
    '#disabled' => empty($options),
    '#description' => t('Enter the name of the term to search for. Remember that the case is ignored.'),
  );
}
