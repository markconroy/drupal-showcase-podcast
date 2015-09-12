<?php
/**
 * @file
 * adfl_content_type_podcast.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function adfl_content_type_podcast_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_basic_info|node|podcast|form';
  $field_group->group_name = 'group_podcast_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_podcast_short_description',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-podcast-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_basic_info|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_guest_info|node|podcast|form';
  $field_group->group_name = 'group_podcast_guest_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guest Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_podcast_guest',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-podcast-guest-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_guest_info|node|podcast|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_podcast_info|node|podcast|form';
  $field_group->group_name = 'group_podcast_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'podcast';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Podcast Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_date',
      1 => 'field_main_image',
      2 => 'field_podcast_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-podcast-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_podcast_info|node|podcast|form'] = $field_group;

  return $export;
}
