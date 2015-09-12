<?php
/**
 * @file
 * adfl_content_type_guest.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_content_type_guest_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function adfl_content_type_guest_node_info() {
  $items = array(
    'guests' => array(
      'name' => t('Guests'),
      'base' => 'node_content',
      'description' => t('We use this content type to create a page about each guest.'),
      'has_title' => '1',
      'title_label' => t('Guest\'s Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
