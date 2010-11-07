<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ideal_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ideal_features_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
      'module' => 'features',
      'description' => t('An idea which suggested by a user'),
      'has_title' => '1',
      'title_label' => t('Idea'),
      'has_body' => '1',
      'body_label' => t('description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function ideal_features_rules_defaults() {
  return array(
    'rules' => array(
      'ideal_features_1' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_node',
        '#label' => 'Node abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Flag "Node Abuse" is flagged, for flagged content',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'node',
                ),
                'object' => array(
                  'type' => 'node',
                  'label' => 'Flagged content',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#name' => 'flag_rules_condition_flagged_node',
            '#settings' => array(
              'flag' => 'abuse_node',
              '#argument map' => array(
                'object' => 'node',
                'user' => 'flagging_user',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A content has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                    '1' => 'node',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_2' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - under review',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => '69',
                ),
              ),
              'code' => '',
            ),
            '#name' => 'content_rules_field_has_value',
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '3',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_3' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - launched',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => '72',
                ),
              ),
              'code' => '',
            ),
            '#name' => 'content_rules_field_has_value',
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
          ),
        ),
        '#actions' => array(
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '10',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_4' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_in_action',
        '#label' => 'In Action - close for new comments',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'in action',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Flagged content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'close node from adding new comments',
              'module' => 'Ideal',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
            ),
            '#name' => 'ideal_close_comments',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_5' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_comment',
        '#label' => 'Comment abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Flag "Node Abuse" is flagged, for flagged content',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'node',
                ),
                'object' => array(
                  'type' => 'node',
                  'label' => 'Flagged content',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#name' => 'flag_rules_condition_flagged_node',
            '#settings' => array(
              'flag' => 'abuse_node',
              '#argument map' => array(
                'object' => 'node',
                'user' => 'flagging_user',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A ccomment has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                    '1' => 'node',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_6' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_user',
        '#label' => 'User abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'flag' => 'abuse_user',
              '#argument map' => array(
                'object' => 'account',
                'user' => 'flagging_user',
              ),
            ),
            '#name' => 'flag_rules_condition_flagged_user',
            '#info' => array(
              'label' => 'Flag "User Abuse" is flagged, for flagged user',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'user',
                ),
                'object' => array(
                  'type' => 'user',
                  'label' => 'Flagged user',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#name' => 'rules_action_mail',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A user has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_7' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Idea points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '5',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_8' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_insert',
        '#label' => 'Comment points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Commented content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#settings' => array(
              'points' => '1',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_9' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_node',
        '#label' => 'Node abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Flag "Node Abuse" is flagged, for flagged content',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'node',
                ),
                'object' => array(
                  'type' => 'node',
                  'label' => 'Flagged content',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#name' => 'flag_rules_condition_flagged_node',
            '#settings' => array(
              'flag' => 'abuse_node',
              '#argument map' => array(
                'object' => 'node',
                'user' => 'flagging_user',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A content has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                    '1' => 'node',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_10' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - under review',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => '69',
                ),
              ),
              'code' => '',
            ),
            '#name' => 'content_rules_field_has_value',
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '3',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_11' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - launched',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => '72',
                ),
              ),
              'code' => '',
            ),
            '#name' => 'content_rules_field_has_value',
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has value',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'eval input' => array(
                '0' => 'code',
                '1' => 'value|0|value',
              ),
              'module' => 'CCK',
            ),
          ),
        ),
        '#actions' => array(
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '10',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_12' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_in_action',
        '#label' => 'In Action - close for new comments',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'in action',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Flagged content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'close node from adding new comments',
              'module' => 'Ideal',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
            ),
            '#name' => 'ideal_close_comments',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_13' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_comment',
        '#label' => 'Comment abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Flag "Node Abuse" is flagged, for flagged content',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'node',
                ),
                'object' => array(
                  'type' => 'node',
                  'label' => 'Flagged content',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#name' => 'flag_rules_condition_flagged_node',
            '#settings' => array(
              'flag' => 'abuse_node',
              '#argument map' => array(
                'object' => 'node',
                'user' => 'flagging_user',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A ccomment has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                    '1' => 'node',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_mail',
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_14' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_user',
        '#label' => 'User abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'flag' => 'abuse_user',
              '#argument map' => array(
                'object' => 'account',
                'user' => 'flagging_user',
              ),
            ),
            '#name' => 'flag_rules_condition_flagged_user',
            '#info' => array(
              'label' => 'Flag "User Abuse" is flagged, for flagged user',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'user',
                ),
                'object' => array(
                  'type' => 'user',
                  'label' => 'Flagged user',
                ),
                'user' => array(
                  'type' => 'user',
                  'label' => 'User on whose behalf to check',
                  'description' => 'For non-global flags, this is the user on whose behalf the flag is checked.',
                ),
              ),
              'module' => 'Flag',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Send a mail to an arbitrary mail address',
              'module' => 'System',
              'eval input' => array(
                '0' => 'subject',
                '1' => 'message',
                '2' => 'from',
                '3' => 'to',
              ),
            ),
            '#name' => 'rules_action_mail',
            '#settings' => array(
              'to' => 'raz@linnovate.net',
              'from' => '',
              'subject' => 'A user has been flagged as abuse',
              'message' => '[node:node-path] has been flagged as abuse by: [flagging_user:account-url]',
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => 'flagging_user',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_15' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Idea points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'points' => '5',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'ideal_features_16' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_insert',
        '#label' => 'Comment points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'ideal_features' => 'ideal_features',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'idea' => 'idea',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Commented content is Idea',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Grant points to a user',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'Userpoints',
              'eval input' => array(
                '0' => 'points',
              ),
            ),
            '#name' => 'userpoints_action_grant_points',
            '#settings' => array(
              'points' => '1',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function ideal_features_views_api() {
  return array(
    'api' => '2',
  );
}
