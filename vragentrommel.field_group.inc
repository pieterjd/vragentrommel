<?php
/**
 * @file
 * vragentrommel.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vragentrommel_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_response|node|question|form';
  $field_group->group_name = 'group_response';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Response by Expert',
    'weight' => '4',
    'children' => array(
      0 => 'field_answer',
      1 => 'field_responder',
      2 => 'field_attachments',
      3 => 'field_state',
      4 => 'field_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Response by Expert',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_response|node|question|form'] = $field_group;

  return $export;
}
