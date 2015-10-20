<?php
/**
 * @file
 * attac_gruppen.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function attac_gruppen_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: og-menu-single.
  $menus['og-menu-single'] = array(
    'menu_name' => 'og-menu-single',
    'title' => 'Arbeitsgruppen',
    'description' => 'Contains all the links for organic groups and their menus',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Arbeitsgruppen');
  t('Contains all the links for organic groups and their menus');

  return $menus;
}
