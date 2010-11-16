<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function main_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function main_flag_default_flags() {
$flags = array();
// Exported flag: "Comment Abuse".
$flags[] = array (
  'content_type' => 'comment',
  'name' => 'abuse_comment',
  'title' => 'Comment Abuse',
  'global' => '0',
  'types' => 
  array (
    0 => 'idea',
  ),
  'flag_short' => 'Flag as offensive',
  'flag_long' => 'Flag this content as offensive.',
  'flag_message' => '',
  'unflag_short' => 'Flag as non-offensive',
  'unflag_long' => 'Flag this content as non-offensive.',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'confirm',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'access_author' => '',
  'show_on_comment' => 1,
  'flag_confirmation' => 'Are you sure you want to flag this content as offensive?',
  'unflag_confirmation' => 'Are you sure you want to flag this content as non-offensive?',
  'module' => 'main',
  'api_version' => 2,
);
// Exported flag: "Node Abuse".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'abuse_node',
  'title' => 'Node Abuse',
  'global' => '0',
  'types' => 
  array (
    0 => 'idea',
  ),
  'flag_short' => 'Flag as offensive',
  'flag_long' => 'Flag this content as offensive.',
  'flag_message' => '',
  'unflag_short' => 'Flag as non-offensive',
  'unflag_long' => 'Flag this content as non-offensive.',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'confirm',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'flag_confirmation' => 'Are you sure you want to flag this content as offensive?',
  'unflag_confirmation' => 'Are you sure you want to flag this content as non-offensive?',
  'module' => 'main',
  'api_version' => 2,
);
// Exported flag: "User Abuse".
$flags[] = array (
  'content_type' => 'user',
  'name' => 'abuse_user',
  'title' => 'User Abuse',
  'global' => '0',
  'types' => 
  array (
  ),
  'flag_short' => 'Report User',
  'flag_long' => 'Report this user as offensive.',
  'flag_message' => '',
  'unflag_short' => 'Remove Report',
  'unflag_long' => 'Remove your report about this user.',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'confirm',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'show_on_profile' => 1,
  'access_uid' => '',
  'flag_confirmation' => 'Are you sure you want to report this user as offensive?',
  'unflag_confirmation' => 'Are you sure you want to remove your report of this user?',
  'module' => 'main',
  'api_version' => 2,
);
// Exported flag: "Bookmarks".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'bookmarks',
  'title' => 'Bookmarks',
  'global' => '0',
  'types' => 
  array (
    0 => 'idea',
  ),
  'flag_short' => 'Bookmark this',
  'flag_long' => 'Add this post to your bookmarks',
  'flag_message' => 'This post has been added to your bookmarks',
  'unflag_short' => 'Unbookmark this',
  'unflag_long' => 'Remove this post from your bookmarks',
  'unflag_message' => 'This post has been removed from your bookmarks',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 2,
    ),
    'unflag' => 
    array (
      0 => 2,
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 1,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'main',
  'api_version' => 2,
);
// Exported flag: "In Action".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'in_action',
  'title' => 'In Action',
  'global' => '1',
  'types' => 
  array (
    0 => 'idea',
  ),
  'flag_short' => 'Flag as In Action ',
  'flag_long' => 'close this idea for comments and voting',
  'flag_message' => '',
  'unflag_short' => 'Unflagged as In Action ',
  'unflag_long' => 'open this idea for comments and voting',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'normal',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 5,
    ),
    'unflag' => 
    array (
      0 => 5,
    ),
  ),
  'show_on_page' => 1,
  'show_on_teaser' => 0,
  'show_on_form' => 1,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'main',
  'api_version' => 2,
);
return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function main_node_info() {
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
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function main_rules_defaults() {
  return array(
    'rules' => array(
      'main_88' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - under review',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has been changed',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content containing changes',
                ),
                'node_unchanged' => array(
                  'type' => 'node',
                  'label' => 'Content not containing changes',
                ),
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_field_changed',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
                'node_unchanged' => 'node_unchanged',
              ),
            ),
            '#type' => 'condition',
          ),
          '2' => array(
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'Under Review',
                ),
              ),
              'code' => '',
              'vars' => array(),
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
              'points' => '3',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'main_89' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'In action - launched',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Saved content\'s field \'field_in_action\' has been changed',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content containing changes',
                ),
                'node_unchanged' => array(
                  'type' => 'node',
                  'label' => 'Content not containing changes',
                ),
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_field_changed',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
                'node_unchanged' => 'node_unchanged',
              ),
            ),
            '#type' => 'condition',
          ),
          '2' => array(
            '#type' => 'condition',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'Launched',
                ),
              ),
              'code' => '',
              'vars' => array(),
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
              'points' => '10',
              '#argument map' => array(
                'user' => 'author',
              ),
            ),
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'main_91' => array(
        '#type' => 'rule',
        '#set' => 'rules_points_to_comments_authors',
        '#label' => 'under review comment author points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          '1' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Content\'s field \'field_in_action\' has been changed',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content containing changes',
                ),
                'node_unchanged' => array(
                  'type' => 'node',
                  'label' => 'Content not containing changes',
                ),
              ),
              'module' => 'CCK',
            ),
            '#name' => 'content_rules_field_changed',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
                'node_unchanged' => 'node',
              ),
            ),
            '#type' => 'condition',
            '#weight' => 0,
          ),
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Content\'s field \'field_in_action\' has value',
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
            '#name' => 'content_rules_field_has_value',
            '#settings' => array(
              'field_name' => 'field_in_action',
              '#argument map' => array(
                'node' => 'node',
              ),
              'value' => array(
                '0' => array(
                  'value' => 'Under Review',
                ),
              ),
              'code' => '',
              'vars' => array(),
            ),
            '#type' => 'condition',
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
      'main_86' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Idea points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
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
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'points' => '5',
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
          ),
        ),
        '#version' => 6003,
      ),
      'main_87' => array(
        '#type' => 'rule',
        '#set' => 'event_comment_insert',
        '#label' => 'Comment points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
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
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'points' => '1',
              '#argument map' => array(
                'user' => 'comment_author',
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
          ),
        ),
        '#version' => 6003,
      ),
      'main_92' => array(
        '#type' => 'rule',
        '#set' => 'rules_points_to_comments_authors',
        '#label' => 'launched comment author points',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'points',
          '1' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Content has term',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Ideal',
            ),
            '#name' => 'ideal_condition_content_has_term',
            '#settings' => array(
              'term' => 'launched',
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
              'points' => '2',
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
      'main_93' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_in_action',
        '#label' => 'In Action - close for new comments',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'in action',
          'main' => 'main',
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
            '#name' => 'ideal_action_close_comments',
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
      'main_73' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_node',
        '#label' => 'Node abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'flag' => 'abuse_node',
              '#argument map' => array(
                'object' => 'node',
                'user' => 'flagging_user',
              ),
            ),
            '#name' => 'flag_rules_condition_flagged_node',
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
          ),
        ),
        '#actions' => array(
          '0' => array(
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
            '#type' => 'action',
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'main_84' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_comment',
        '#label' => 'Comment abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'main' => 'main',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              'flag' => 'abuse_comment',
              '#argument map' => array(
                'object' => 'comment',
                'user' => 'flagging_user',
              ),
            ),
            '#name' => 'flag_rules_condition_flagged_comment',
            '#info' => array(
              'label' => 'Flag "Comment Abuse" is flagged, for flagged comment',
              'base' => 'flag_rules_condition_flagged',
              'label callback' => 'flag_rules_condition_flagged_label',
              'arguments' => array(
                'flag' => array(
                  'type' => 'flag',
                  'label' => 'Flag',
                  'flag_type' => 'comment',
                ),
                'object' => array(
                  'type' => 'comment',
                  'label' => 'Flagged comment',
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
      'main_85' => array(
        '#type' => 'rule',
        '#set' => 'event_flag_flagged_abuse_user',
        '#label' => 'User abuse',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'abuse',
          'main' => 'main',
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
    ),
    'rule_sets' => array(
      'rules_points_to_comments_authors' => array(
        'arguments' => array(
          'user' => array(
            'label' => 'User',
            'type' => 'user',
          ),
          'node' => array(
            'label' => 'Content',
            'type' => 'node',
          ),
          'node2' => array(
            'label' => 'Content2',
            'type' => 'node',
          ),
        ),
        'label' => 'points to comments authors',
        'status' => 'default',
        'categories' => array(
          '0' => 'points',
          'main' => 'main',
        ),
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function main_views_api() {
  return array(
    'api' => '2',
  );
}
