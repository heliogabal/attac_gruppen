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
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "scald" && $api == "context_config") {
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
 * Implements hook_flag_default_flags().
 */
function attac_gruppen_flag_default_flags() {
  $flags = array();
  // Exported flag: "Facebook Artikel".
  $flags['facebook_artikel'] = array(
    'entity_type' => 'node',
    'title' => 'Facebook Artikel',
    'global' => 1,
    'types' => array(
      0 => 'artikel',
      1 => 'news',
    ),
    'flag_short' => 'Auf Facebook veröffentlichen',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Von Facebook entfernen',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'ical' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'ag_artikel_startseite' => 0,
      'block' => 0,
      'kalender_popup' => 0,
      'plenum_startseite' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'attac_gruppen',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Frontpage Artikel".
  $flags['frontpage_artikel'] = array(
    'entity_type' => 'node',
    'title' => 'Frontpage Artikel',
    'global' => 1,
    'types' => array(
      0 => 'artikel',
      1 => 'news',
    ),
    'flag_short' => 'Auf der Startseite veröffentlichen',
    'flag_long' => 'Hier klicken, um den Artikel auf der Startseite anzuzeigen',
    'flag_message' => 'Auf der Startseite',
    'unflag_short' => 'Von der Startseite entfernen',
    'unflag_long' => 'Hier klicken, um den Artikel von der Startseite zu entfernen',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'ical' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'ag_artikel_startseite' => 0,
      'block' => 0,
      'kalender_popup' => 0,
      'plenum_startseite' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => 'own',
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'attac_gruppen',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function attac_gruppen_image_default_styles() {
  $styles = array();

  // Exported image style: bild_ag-seite.
  $styles['bild_ag-seite'] = array(
    'label' => 'Bild AG-Seite',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 380,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'gruppe' => array(
      'name' => t('Arbeitsgruppe'),
      'base' => 'node_content',
      'description' => t('Arbeitsgruppen haben Mitglieder und können gruppeninterne oder öffentliche Inhalte erstellen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
