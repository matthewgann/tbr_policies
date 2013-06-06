<?php
/**
 * @file
 * tbr_policies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tbr_policies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_term_for_policies';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy Term for Policies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_policy_name' => 'field_policy_name',
    'field_policy_area' => 'field_policy_area',
    'field_applicable_divisions' => 'field_applicable_divisions',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_policy_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_policy_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_applicable_divisions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = 'Icon Legend';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
//$terms = taxonomy_vocabulary_machine_name_load(\'applicable_divisons\');

foreach(taxonomy_get_tree(7) as $icon) {
	//dsm($icon);	
	$term = taxonomy_term_load($icon->tid);
echo "<div class=\'term_icon\'>";
        echo "<img src=\'" . image_style_url( \'icon\', $term->field_division_icon[\'und\'][0][\'uri\']) . "\' title=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\' alt=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\'class=\'term-image\' /> - " . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'];
        echo "</div> ";
}
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no policies or guidelines that match your criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_name']['id'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['field'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['label'] = 'Policy #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Policy Area */
  $handler->display->display_options['fields']['field_policy_area']['id'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['table'] = 'field_data_field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['field'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['label'] = 'Policy/Guideline Area';
  $handler->display->display_options['fields']['field_policy_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_policy_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Applicable Divisions */
  $handler->display->display_options['fields']['field_applicable_divisions']['id'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['field'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['label'] = '';
  $handler->display->display_options['fields']['field_applicable_divisions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['text'] = '[field_applicable_divisions-tid]';
  $handler->display->display_options['fields']['field_applicable_divisions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicable_divisions']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_applicable_divisions']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Applies To';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach($data->field_field_applicable_divisions as $mydata) {
	if (isset($mydata[\'raw\'][\'tid\'])) {
		$term = taxonomy_term_load($mydata[\'raw\'][\'tid\']);
		//dsm($term);
		//dsm($term->field_division_icon);
                //echo $term->field_division_icon[\'und\'][0][\'uri\'];
               echo "<div class=\'division_term_icon btn disabled\'>";
               echo "<img src=\'" . image_style_url( \'icon\', $term->field_division_icon[\'und\'][0][\'uri\']) . "\' title=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\' alt=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\'class=\'term-image\' />";
               echo "</div> ";
	}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Policy Number (field_policy_name) */
  $handler->display->display_options['sorts']['field_policy_name_value']['id'] = 'field_policy_name_value';
  $handler->display->display_options['sorts']['field_policy_name_value']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['sorts']['field_policy_name_value']['field'] = 'field_policy_name_value';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Policy Number (field_policy_name) */
  $handler->display->display_options['filters']['field_policy_name_value']['id'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['filters']['field_policy_name_value']['field'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_policy_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_policy_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['operator_id'] = 'field_policy_name_value_op';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['label'] = 'Policy Number';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['operator'] = 'field_policy_name_value_op';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['identifier'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Applicable Divisions (field_applicable_divisions) */
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['id'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['field'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['operator_id'] = 'field_applicable_divisions_tid_op';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['label'] = 'Applicable Divisions';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['operator'] = 'field_applicable_divisions_tid_op';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['identifier'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['vocabulary'] = 'applicable_divisons';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    17 => '17',
    25 => '25',
    26 => '26',
    27 => '27',
    28 => '28',
    29 => '29',
    30 => '30',
    16 => '16',
    33 => '33',
    34 => '34',
    35 => '35',
    36 => '36',
    38 => '38',
    37 => '37',
    18 => '18',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tbr_policies_and_guidelines';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_name']['id'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['field'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['label'] = 'Policy #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Policy Area */
  $handler->display->display_options['fields']['field_policy_area']['id'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['table'] = 'field_data_field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['field'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['label'] = 'Policy/Guideline Area';
  $handler->display->display_options['fields']['field_policy_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_policy_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Applicable Divisions */
  $handler->display->display_options['fields']['field_applicable_divisions']['id'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['field'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['label'] = '';
  $handler->display->display_options['fields']['field_applicable_divisions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['text'] = '[field_applicable_divisions-tid]';
  $handler->display->display_options['fields']['field_applicable_divisions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicable_divisions']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_applicable_divisions']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Applies To';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach($data->field_field_applicable_divisions as $mydata) {
	if (isset($mydata[\'raw\'][\'tid\'])) {
		$term = taxonomy_term_load($mydata[\'raw\'][\'tid\']);
		//dsm($term);
		//dsm($term->field_division_icon);
                //echo $term->field_division_icon[\'und\'][0][\'uri\'];
               echo "<div class=\'division_term_icon btn disabled\'>";
               echo "<img src=\'" . image_style_url( \'icon\', $term->field_division_icon[\'und\'][0][\'uri\']) . "\' title=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\' alt=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\'class=\'term-image\' />";
               echo "</div> ";
	}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'areas/%';

  /* Display: Purposes */
  $handler = $view->new_display('page', 'Purposes', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_name']['id'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['field'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['label'] = 'Policy #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Policy Area */
  $handler->display->display_options['fields']['field_policy_area']['id'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['table'] = 'field_data_field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['field'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_policy_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Applicable Divisions */
  $handler->display->display_options['fields']['field_applicable_divisions']['id'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['field'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicable_divisions']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_applicable_divisions']['delta_offset'] = '0';
  /* Field: Content: Purpose */
  $handler->display->display_options['fields']['field_purpose']['id'] = 'field_purpose';
  $handler->display->display_options['fields']['field_purpose']['table'] = 'field_data_field_purpose';
  $handler->display->display_options['fields']['field_purpose']['field'] = 'field_purpose';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tbr_policies_and_guidelines' => 'tbr_policies_and_guidelines',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary_options']['override'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  $handler->display->display_options['path'] = 'purposes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Policy/Guideline Purposes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Everything */
  $handler = $view->new_display('page', 'Everything', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_name']['id'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['field'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['label'] = 'Policy #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Policy Area */
  $handler->display->display_options['fields']['field_policy_area']['id'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['table'] = 'field_data_field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['field'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['label'] = 'Policy/Guideline Area';
  $handler->display->display_options['fields']['field_policy_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Applicable Divisions */
  $handler->display->display_options['fields']['field_applicable_divisions']['id'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['field'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['label'] = '';
  $handler->display->display_options['fields']['field_applicable_divisions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['text'] = '[field_applicable_divisions-tid]';
  $handler->display->display_options['fields']['field_applicable_divisions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicable_divisions']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_applicable_divisions']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Applies To';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach($data->field_field_applicable_divisions as $mydata) {
	if (isset($mydata[\'raw\'][\'tid\'])) {
		$term = taxonomy_term_load($mydata[\'raw\'][\'tid\']);
		//dsm($term);
		//dsm($term->field_division_icon);
                //echo $term->field_division_icon[\'und\'][0][\'uri\'];
               echo "<div class=\'division_term_icon btn disabled\'>";
               echo "<img src=\'" . image_style_url( \'icon\', $term->field_division_icon[\'und\'][0][\'uri\']) . "\' title=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\' alt=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\'class=\'term-image\' />";
               echo "</div> ";
	}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'everything';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Guidelines and Policies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Web widget - Personnel Guidelines */
  $handler = $view->new_display('web_widgets', 'Web widget - Personnel Guidelines', 'web_widgets_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    28 => '28',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tbr_policies_and_guidelines';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'widgets/peronnel-guidelines';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['embed_style'] = 'inline';

  /* Display: Personnel Policies and Guidelines */
  $handler = $view->new_display('page', 'Personnel Policies and Guidelines', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_name']['id'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['field'] = 'field_policy_name';
  $handler->display->display_options['fields']['field_policy_name']['label'] = 'Policy #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Policy Area */
  $handler->display->display_options['fields']['field_policy_area']['id'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['table'] = 'field_data_field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['field'] = 'field_policy_area';
  $handler->display->display_options['fields']['field_policy_area']['label'] = 'Policy/Guideline Area';
  $handler->display->display_options['fields']['field_policy_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Applicable Divisions */
  $handler->display->display_options['fields']['field_applicable_divisions']['id'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['field'] = 'field_applicable_divisions';
  $handler->display->display_options['fields']['field_applicable_divisions']['label'] = '';
  $handler->display->display_options['fields']['field_applicable_divisions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_applicable_divisions']['alter']['text'] = '[field_applicable_divisions-tid]';
  $handler->display->display_options['fields']['field_applicable_divisions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_applicable_divisions']['type'] = 'ds_taxonomy_view_mode';
  $handler->display->display_options['fields']['field_applicable_divisions']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Applies To';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach($data->field_field_applicable_divisions as $mydata) {
	if (isset($mydata[\'raw\'][\'tid\'])) {
		$term = taxonomy_term_load($mydata[\'raw\'][\'tid\']);
		//dsm($term);
		//dsm($term->field_division_icon);
                //echo $term->field_division_icon[\'und\'][0][\'uri\'];
               echo "<div class=\'division_term_icon btn disabled\'>";
               echo "<img src=\'" . image_style_url( \'icon\', $term->field_division_icon[\'und\'][0][\'uri\']) . "\' title=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\' alt=\'" . $term->field_division_icon[\'und\'][0][\'field_file_image_alt_text\'][\'und\'][0][\'value\'] . "\'class=\'term-image\' />";
               echo "</div> ";
	}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Policy Number (field_policy_name) */
  $handler->display->display_options['filters']['field_policy_name_value']['id'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['table'] = 'field_data_field_policy_name';
  $handler->display->display_options['filters']['field_policy_name_value']['field'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_policy_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_policy_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['operator_id'] = 'field_policy_name_value_op';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['label'] = 'Policy Number';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['operator'] = 'field_policy_name_value_op';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['identifier'] = 'field_policy_name_value';
  $handler->display->display_options['filters']['field_policy_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Applicable Divisions (field_applicable_divisions) */
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['id'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['table'] = 'field_data_field_applicable_divisions';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['field'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['operator_id'] = 'field_applicable_divisions_tid_op';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['label'] = 'Applicable Divisions';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['operator'] = 'field_applicable_divisions_tid_op';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['identifier'] = 'field_applicable_divisions_tid';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['vocabulary'] = 'applicable_divisons';
  $handler->display->display_options['filters']['field_applicable_divisions_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    28 => '28',
    36 => '36',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tbr_policies_and_guidelines';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'everything';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Guidelines and Policies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Web widget - Personnel Policies */
  $handler = $view->new_display('web_widgets', 'Web widget - Personnel Policies', 'web_widgets_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    36 => '36',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'tbr_policies_and_guidelines';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['path'] = 'widgets/peronnel-policies';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['embed_style'] = 'inline';
  $export['taxonomy_term_for_policies'] = $view;

  return $export;
}
