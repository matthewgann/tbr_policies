<?php
/**
 * @file
 * tbr_policies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tbr_policies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_alpha|node|policy_guideline|full';
  $field_group->group_name = 'group_topics_alpha';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_guideline';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_topics';
  $field_group->data = array(
    'label' => 'Topics (A to Z)',
    'weight' => '24',
    'children' => array(
      0 => 'field_topics_outline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_topics_alpha|node|policy_guideline|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_outline|node|policy_guideline|full';
  $field_group->group_name = 'group_topics_outline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_guideline';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_topics';
  $field_group->data = array(
    'label' => 'Topics (Outline)',
    'weight' => '25',
    'children' => array(
      0 => 'field_topics_outline_throughput',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_topics_outline|node|policy_guideline|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics|node|policy_guideline|full';
  $field_group->group_name = 'group_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_guideline';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '4',
    'children' => array(
      0 => 'group_topics_alpha',
      1 => 'group_topics_outline',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_topics|node|policy_guideline|full'] = $field_group;

  return $export;
}
