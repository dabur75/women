<?php
/**
 * @file
 * minisite.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function minisite_user_default_roles() {
  $roles = array();

  // Exported role: active.
  $roles['active'] = array(
    'name' => 'active',
    'weight' => 4,
  );

  return $roles;
}
