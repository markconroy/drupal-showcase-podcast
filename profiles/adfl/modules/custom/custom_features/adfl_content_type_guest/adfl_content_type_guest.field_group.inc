<?php
/**
 * @file
 * adfl_content_type_guest.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adfl_content_type_guest_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guest_basic_info|node|guests|form';
  $field_group->group_name = 'group_guest_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'guests';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_podcast_about_the_guest',
      1 => 'field_podcast_guest_links',
      2 => 'title',
      3 => 'field_main_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-guest-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_guest_basic_info|node|guests|form'] = $field_group;

  return $export;
}
