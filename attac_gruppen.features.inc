<?php
/**
 * @file
 * attac_gruppen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function attac_gruppen_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function attac_gruppen_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function attac_gruppen_node_info() {
  $items = array(
    'ag_seite' => array(
      'name' => t('AG-Seite'),
      'base' => 'node_content',
      'description' => t('AG-Seiten können als Unterseiten einer AG und dem AG-Menu hinzugefügt werden. Sie eignen sich für statischen Inhalt, der sich eher selten ändert. '),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'artikel' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Ein Artikel ist ein abgeschlossenes Inhaltselement auf den AG-Unterseiten.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gruppe' => array(
      'name' => t('Arbeitsgruppe'),
      'base' => 'node_content',
      'description' => t('Arbeitsgruppen haben Mitglieder und können gruppeninterne oder öffentliche Inhalte erstellen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
