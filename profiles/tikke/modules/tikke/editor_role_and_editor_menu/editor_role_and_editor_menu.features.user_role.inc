<?php
/**
 * @file
 * editor_role_and_editor_menu.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function editor_role_and_editor_menu_user_default_roles() {
  $roles = array();

  // Exported role: מנהל אתר.
  $roles['מנהל אתר'] = array(
    'name' => 'מנהל אתר',
    'weight' => 3,
  );

  return $roles;
}
