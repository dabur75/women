<?php
/**
 * @file
 * minisite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function minisite_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create about content'.
  $permissions['create about content'] = array(
    'name' => 'create about content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create bussiness content'.
  $permissions['create bussiness content'] = array(
    'name' => 'create bussiness content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create post content'.
  $permissions['create post content'] = array(
    'name' => 'create post content',
    'roles' => array(
      'active' => 'active',
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any about content'.
  $permissions['delete any about content'] = array(
    'name' => 'delete any about content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bussiness content'.
  $permissions['delete any bussiness content'] = array(
    'name' => 'delete any bussiness content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any post content'.
  $permissions['delete any post content'] = array(
    'name' => 'delete any post content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own about content'.
  $permissions['delete own about content'] = array(
    'name' => 'delete own about content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bussiness content'.
  $permissions['delete own bussiness content'] = array(
    'name' => 'delete own bussiness content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own post content'.
  $permissions['delete own post content'] = array(
    'name' => 'delete own post content',
    'roles' => array(
      'active' => 'active',
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any about content'.
  $permissions['edit any about content'] = array(
    'name' => 'edit any about content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bussiness content'.
  $permissions['edit any bussiness content'] = array(
    'name' => 'edit any bussiness content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any post content'.
  $permissions['edit any post content'] = array(
    'name' => 'edit any post content',
    'roles' => array(
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own about content'.
  $permissions['edit own about content'] = array(
    'name' => 'edit own about content',
    'roles' => array(
      'active' => 'active',
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bussiness content'.
  $permissions['edit own bussiness content'] = array(
    'name' => 'edit own bussiness content',
    'roles' => array(
      'active' => 'active',
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own post content'.
  $permissions['edit own post content'] = array(
    'name' => 'edit own post content',
    'roles' => array(
      'active' => 'active',
      'administrator' => 'administrator',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_post_teaser'.
  $permissions['view field_post_teaser'] = array(
    'name' => 'view field_post_teaser',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'מנהל אתר' => 'מנהל אתר',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
