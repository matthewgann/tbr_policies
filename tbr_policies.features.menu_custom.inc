<?php
/**
 * @file
 * tbr_policies.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tbr_policies_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-test-menu.
  $menus['menu-test-menu'] = array(
    'menu_name' => 'menu-test-menu',
    'title' => 'Policies and Guidelines',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Policies and Guidelines');


  return $menus;
}
