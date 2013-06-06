<?php
/**
 * @file
 * tbr_policies.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tbr_policies_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|policy_guideline|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'policy_guideline';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'policy_contact_full' => array(
      'weight' => '13',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Contact',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'print_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'print-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_policy_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_applicable_divisions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_purpose' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Purpose',
          'lb-el' => 'a',
          'lb-at' => 'id="purpose" name="purpose"',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_definitions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'a',
          'lb-at' => 'id="definitions" name="definitions"',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_policy' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Policy/Guideline',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_topics_outline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-columns',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_policy_area' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Policy/Guideline Area',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_relations' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_sources' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_policy_related' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_exhibits' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_topics_outline_throughput' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-columns',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|policy_guideline|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|policy_guideline_contacts|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'policy_guideline_contacts';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|policy_guideline_contacts|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|policy_guideline_contacts|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'policy_guideline_contacts';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|policy_guideline_contacts|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tbr_policies_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'policy_contact_full';
  $ds_field->label = 'Policy Contact Full';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-contact:name]<br>
<a href="tel:[node:field-contact:field-phone]">[node:field-contact:field-phone]</a><br>
[node:field-contact:field_email_address]<br>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['policy_contact_full'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'policy_name_and_number';
  $ds_field->label = 'Policy Name and Number';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:title] - [node:field_policy_name]',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['policy_name_and_number'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'print_date';
  $ds_field->label = 'Print Date';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
echo "Printed on " . date("F j, Y, g:i a");
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['print_date'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_policies';
  $ds_field->label = 'Related Policies';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
//$entity->field_definitions[LANGUAGE_NONE][0][\'value\'];
var_dump($entity->field_related_policies);
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['related_policies'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tbr_policies_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|policy_guideline|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'policy_guideline';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_topics_outline_throughput',
        1 => 'field_policy_name',
        2 => 'print_date',
        3 => 'field_topics_outline',
        4 => 'field_policy_area',
        5 => 'group_topics',
        6 => 'field_applicable_divisions',
        7 => 'field_purpose',
        8 => 'field_definitions',
        9 => 'field_policy',
        10 => 'field_exhibits',
        11 => 'field_sources',
        12 => 'field_relations',
        13 => 'field_policy_related',
        14 => 'policy_contact_full',
        15 => 'group_topics_alpha',
        16 => 'group_topics_outline',
      ),
    ),
    'fields' => array(
      'field_topics_outline_throughput' => 'ds_content',
      'field_policy_name' => 'ds_content',
      'print_date' => 'ds_content',
      'field_topics_outline' => 'ds_content',
      'field_policy_area' => 'ds_content',
      'group_topics' => 'ds_content',
      'field_applicable_divisions' => 'ds_content',
      'field_purpose' => 'ds_content',
      'field_definitions' => 'ds_content',
      'field_policy' => 'ds_content',
      'field_exhibits' => 'ds_content',
      'field_sources' => 'ds_content',
      'field_relations' => 'ds_content',
      'field_policy_related' => 'ds_content',
      'policy_contact_full' => 'ds_content',
      'group_topics_alpha' => 'ds_content',
      'group_topics_outline' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '2',
    'page_option_title' => '%node:title',
  );
  $export['node|policy_guideline|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|policy_guideline_contacts|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'policy_guideline_contacts';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_phone',
        2 => 'field_email_address',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_email_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|policy_guideline_contacts|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|policy_guideline_contacts|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'policy_guideline_contacts';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_phone',
        2 => 'field_email_address',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_email_address' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['taxonomy_term|policy_guideline_contacts|full'] = $ds_layout;

  return $export;
}
