<?php
/**
 * @file
 * editor_role_and_editor_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function editor_role_and_editor_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-manage.
  $menus['menu-manage'] = array(
    'menu_name' => 'menu-manage',
    'title' => 'ניהול',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ניהול');


  return $menus;
}
