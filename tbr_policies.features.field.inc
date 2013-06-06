<?php
/**
 * @file
 * tbr_policies.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tbr_policies_field_default_fields() {
  $fields = array();

  // Exported field: 'node-policy_guideline-field_applicable_divisions'.
  $fields['node-policy_guideline-field_applicable_divisions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_applicable_divisions',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'applicable_divisons',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_applicable_divisions',
      'label' => 'Applicable Divisions',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_contact'.
  $fields['node-policy_guideline-field_contact'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'policy_guideline_contacts',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_contact',
      'label' => 'Contact',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '11',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_definitions'.
  $fields['node-policy_guideline-field_definitions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_definitions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_definitions',
      'label' => 'Definitions',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_exhibits'.
  $fields['node-policy_guideline-field_exhibits'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_exhibits',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'private',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => 13,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_accessible_icon',
          'weight' => '9',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_exhibits',
      'label' => 'Exhibits',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'exhibits/[current-page:url:args:last]',
        'file_extensions' => 'txt pdf doc docx xls xlsx',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'private' => 'private',
            'public' => 'public',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'video' => 0,
            0 => 0,
            'document' => 'document',
            'image' => 'image',
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 0,
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 0,
            'upload' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '14',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_policy'.
  $fields['node-policy_guideline-field_policy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_policy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_policy',
      'label' => 'Policy',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
        ),
        'type' => 'text_textarea',
        'weight' => '7',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_policy_area'.
  $fields['node-policy_guideline-field_policy_area'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_policy_area',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tbr_policies_and_guidelines',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_policy_area',
      'label' => 'Policy Area',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
      'workbench_access_field' => 1,
    ),
  );

  // Exported field: 'node-policy_guideline-field_policy_name'.
  $fields['node-policy_guideline-field_policy_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_policy_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_policy_name',
      'label' => 'Policy Number',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_policy_related'.
  $fields['node-policy_guideline-field_policy_related'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_policy_related',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'page' => 0,
          'policy_guideline' => 'policy_guideline',
          'webform' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 12,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '12',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_policy_related',
      'label' => 'Related Policies',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '13',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_purpose'.
  $fields['node-policy_guideline-field_purpose'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_purpose',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_purpose',
      'label' => 'Purpose',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_relations'.
  $fields['node-policy_guideline-field_relations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_relations',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'relations',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '11',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_relations',
      'label' => 'Related Topics',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '12',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_sources'.
  $fields['node-policy_guideline-field_sources'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sources',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sources',
      'label' => 'Sources',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_topics_outline'.
  $fields['node-policy_guideline-field_topics_outline'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_topics_outline',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '// Getting policy field data
$thisinput = $entity->field_policy[LANGUAGE_NONE][0][\'value\'];

if (isset($thisinput)) {
	// Main output variable
	$valoare = \'\';
	
	// Clearning Purpose variable
	$ispurpose = \'\'; 
	
	// Clearing Definitions variable
	$isdefinitions = \'\'; 
	
	// Setting i to zero
	$i = 0;
	
	// Check to see if there is Purpose Data.  If so, set variable.
	if (isset($entity->field_purpose[LANGUAGE_NONE][0][\'value\'])) {
		$ispurpose = $entity->field_purpose[LANGUAGE_NONE][0][\'value\'];
	}
	
	// Check to see if there is Definition Data.  If so, set variable.
	if (isset($entity->field_definitions[LANGUAGE_NONE][0][\'value\'])) {
		$isdefinitions = $entity->field_definitions[LANGUAGE_NONE][0][\'value\'];
	}
	
	// Setting regex what to look for. In this case, links with the name attribute
	$regexp = "<a\\s[^>]*name=(\\"??)([^\\" >]*?)\\\\1[^>]*>(.*)<\\/a>";
	
	// Finding the links with \'name\' attributes in the policy data $thisinput  
	if(preg_match_all("/$regexp/siU", $thisinput, $matches, PREG_SET_ORDER)) {
		foreach($matches as $match) {
		  // Set the title
		  $topics[$i][\'title\'] = $match[3];
		  
		  // Set the link
		  $topics[$i][\'href\'] = $match[2];
		  
		  // Increase i for the next go round
		  $i++;
		}
	}
	
	// Function to sort the arrays by title    
	function compareByName($topics, $b) {
	  return strcmp($topics["title"], $b["title"]);
	}
	
	// Doing the Sorting using the compareByName function
	usort($topics, \'compareByName\');
	
	// Open the unordered list
	$valoare = "<ul>";
	
	// If the Purpose variable is set and isn\'t blank, use it
	if (isset($ispurpose) && $ispurpose !== \'\') {
	  $valoare .= \'<li><a href="#purpose" title="Purpose">Purpose</a></li>\';
	}
	
	// If the Definition variable is set and isn\'t blank, use it
	if (isset($isdefinitions) && $isdefinitions !== \'\') {
	  $valoare .= \'<li><a href="#definitions" title="Definitions">Defintions</a></li>\';
	}
	
	// Doing the loop through the sorted array and setting the list value
	foreach($topics as $topic) {
		$valoare .= \'<li><a href="#\' . $topic[\'href\'] . \'" title="\' . $topic[\'title\'] . \'">\' . $topic[\'title\'] . \'</a></li>\';
	}
	
	// Close the list
	$valoare .= "</ul>";
	
	// Send that puppy to display
	$entity_field[0][\'value\'] = $valoare;

}',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'longtext',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '0',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_unsanitized',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_unsanitized',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_topics_outline',
      'label' => 'Topics Outline',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed',
        'weight' => '8',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'node-policy_guideline-field_topics_outline_throughput'.
  $fields['node-policy_guideline-field_topics_outline_throughput'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_topics_outline_throughput',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'computed_field',
      'settings' => array(
        'code' => '// Getting policy field data
$thisinput = $entity->field_policy[LANGUAGE_NONE][0][\'value\'];

if (isset($thisinput)) {
	// Main output variable
	$valoare = \'\';
	
	// Clearning Purpose variable
	$ispurpose = \'\'; 
	
	// Clearing Definitions variable
	$isdefinitions = \'\'; 
	
	// Setting i to zero
	$i = 0;
	
	// Check to see if there is Purpose Data.  If so, set variable.
	if (isset($entity->field_purpose[LANGUAGE_NONE][0][\'value\'])) {
		$ispurpose = $entity->field_purpose[LANGUAGE_NONE][0][\'value\'];
	}
	
	// Check to see if there is Definition Data.  If so, set variable.
	if (isset($entity->field_definitions[LANGUAGE_NONE][0][\'value\'])) {
		$isdefinitions = $entity->field_definitions[LANGUAGE_NONE][0][\'value\'];
	}
	
	// Setting regex what to look for. In this case, links with the name attribute
	$regexp = "<a\\s[^>]*name=(\\"??)([^\\" >]*?)\\\\1[^>]*>(.*)<\\/a>";
	
	// Finding the links with \'name\' attributes in the policy data $thisinput  
	if(preg_match_all("/$regexp/siU", $thisinput, $matches, PREG_SET_ORDER)) {
		foreach($matches as $match) {
		  // Set the title
		  $topics[$i][\'title\'] = $match[3];
		  
		  // Set the link
		  $topics[$i][\'href\'] = $match[2];
		  
		  // Increase i for the next go round
		  $i++;
		}
	}
	
	// Open the unordered list
	$valoare = "<ul>";
	
	// If the Purpose variable is set and isn\'t blank, use it
	if (isset($ispurpose) && $ispurpose !== \'\') {
	  $valoare .= \'<li><a href="#purpose">Purpose</a></li>\';
	}
	
	// If the Definition variable is set and isn\'t blank, use it
	if (isset($isdefinitions) && $isdefinitions !== \'\') {
	  $valoare .= \'<li><a href="#definitions">Defintions</a></li>\';
	}
	
	// Doing the loop through the sorted array and setting the list value
	foreach($topics as $topic) {
		$valoare .= \'<li><a href="#\' . $topic[\'href\'] . \'" title="\' . $topic[\'title\'] . \'">\' . $topic[\'title\'] . \'</a></li>\';
	}
	
	// Close the list
	$valoare .= "</ul>";
	
	// Send that puppy to display
	$entity_field[0][\'value\'] = $valoare;

}',
        'database' => array(
          'data_default' => '',
          'data_index' => 0,
          'data_length' => '32',
          'data_not_NULL' => 0,
          'data_precision' => '10',
          'data_scale' => '2',
          'data_size' => 'normal',
          'data_type' => 'longtext',
        ),
        'display_format' => '$display_output = $entity_field_item[\'value\'];',
        'store' => 1,
      ),
      'translatable' => '0',
      'type' => 'computed',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_plain',
          'weight' => 14,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'computed_field',
          'settings' => array(),
          'type' => 'computed_field_unsanitized',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_topics_outline_throughput',
      'label' => 'Topics Outline Throughput',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed',
        'weight' => '9',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-applicable_divisons-field_division_icon'.
  $fields['taxonomy_term-applicable_divisons-field_division_icon'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_division_icon',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'applicable_divisons',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_division_icon',
      'label' => 'Division Icon',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'divisons',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'oembed' => 0,
            'private' => 'private',
            'public' => 'public',
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'document' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'media_internet' => 'media_internet',
            'upload' => 'upload',
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '31',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-policy_guideline_contacts-field_email_address'.
  $fields['taxonomy_term-policy_guideline_contacts-field_email_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_email_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline_contacts',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_email_address',
      'label' => 'Email Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '32',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Exported field: 'taxonomy_term-policy_guideline_contacts-field_phone'.
  $fields['taxonomy_term-policy_guideline_contacts-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'phone',
      'settings' => array(
        'country' => 'ca',
      ),
      'translatable' => '0',
      'type' => 'phone',
    ),
    'field_instance' => array(
      'bundle' => 'policy_guideline_contacts',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'phone',
          'settings' => array(),
          'type' => 'phone',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'ca_phone_parentheses' => 1,
        'ca_phone_separator' => '-',
        'phone_country_code' => 0,
        'phone_default_country_code' => '1',
        'phone_int_max_length' => 15,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone_textfield',
        'weight' => '31',
      ),
      'workbench_access_field' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Applicable Divisions');
  t('Contact');
  t('Definitions');
  t('Division Icon');
  t('Email Address');
  t('Exhibits');
  t('Phone');
  t('Policy');
  t('Policy Area');
  t('Policy Number');
  t('Purpose');
  t('Related Policies');
  t('Related Topics');
  t('Sources');
  t('Topics Outline');
  t('Topics Outline Throughput');

  return $fields;
}
