<?php
/**
 * @file
 * minisite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function minisite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function minisite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function minisite_node_info() {
  $items = array(
    'about' => array(
      'name' => t('אודותיי'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => t('משתמשת יקרה,
עמוד זה יאפשר לך להוסיף מידע אודותייך. כל המידע בעמוד זה יופיע תחת הקישור בתפריט שלך - אודותיי. '),
    ),
    'bussiness' => array(
      'name' => t('העסק שלי'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת [לשימוש פנימי בלבד]'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('פוסט'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'help' => t('משתמשת יקרה, </br>
עמוד זה מאפשר לך להוסיף פוסט חדש לאתר. </br>
הפוסט יפורסם בבלוג הראשי של האתר ובעמוד האישי שלך. '),
    ),
  );
  return $items;
}
