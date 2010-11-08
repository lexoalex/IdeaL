<?php

/**
 * Implementation of hook_user_default_roles().
 */
function main_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: privilege
  $roles['privilege'] = array(
    'name' => 'privilege',
  );

  // Exported role: professional
  $roles['professional'] = array(
    'name' => 'professional',
  );

  return $roles;
}
