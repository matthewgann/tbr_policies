<?php
/**
 * @file
 * tbr_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tbr_policies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tbr_policies_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tbr_policies_image_default_styles() {
  $styles = array();

  // Exported image style: icon.
  $styles['icon'] = array(
    'name' => 'icon',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '30',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tbr_policies_node_info() {
  $items = array(
    'policy_guideline' => array(
      'name' => t('Policy/Guideline'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Policy'),
      'help' => '',
    ),
  );
  return $items;
}
