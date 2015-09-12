<?php
/**
 * @file
 * adfl_content_type_static_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adfl_content_type_static_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function adfl_content_type_static_page_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Static Page'),
      'base' => 'node_content',
      'description' => t('We use this content type to create pages whose content does not change very often, such as an "About Us" page or a "Privacy Policy" page.'),
      'has_title' => '1',
      'title_label' => t('Page Title'),
      'help' => '',
    ),
  );
  return $items;
}
