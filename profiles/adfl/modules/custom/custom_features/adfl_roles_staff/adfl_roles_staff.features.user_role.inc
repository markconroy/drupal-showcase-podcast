<?php
/**
 * @file
 * adfl_roles_staff.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function adfl_roles_staff_user_default_roles() {
  $roles = array();

  // Exported role: Staff User.
  $roles['Staff User'] = array(
    'name' => 'Staff User',
    'weight' => 2,
  );

  return $roles;
}
