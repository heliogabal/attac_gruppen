<?php
/**
 * @file
 * attac_gruppen.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function attac_gruppen_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|ag_seite|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'ag_seite';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|ag_seite|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|artikel|ag_artikel_startseite';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'artikel';
  $ds_fieldsetting->view_mode = 'ag_artikel_startseite';
  $ds_fieldsetting->settings = array(
    'ds_flag_facebook_artikel' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'div',
        'class' => 'more-link',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|artikel|ag_artikel_startseite'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|gruppe|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'gruppe';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|gruppe|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function attac_gruppen_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ag_seite|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ag_seite';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-one';
  $ds_layout->settings = array(
    'regions' => array(
      'one_main' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_bilder',
      ),
    ),
    'fields' => array(
      'title' => 'one_main',
      'body' => 'one_main',
      'field_bilder' => 'one_main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one_main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|ag_seite|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ag_seite|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ag_seite';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'og_group_ref',
        2 => 'redirect',
        3 => 'path',
        4 => 'body',
        5 => 'field_bilder',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'og_group_ref' => 'central',
      'redirect' => 'central',
      'path' => 'central',
      'body' => 'central',
      'field_bilder' => 'central',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ag_seite|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|artikel|ag_artikel_startseite';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'artikel';
  $ds_layout->view_mode = 'ag_artikel_startseite';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'node_link',
        3 => 'flag_frontpage_artikel',
        4 => 'ds_flag_facebook_artikel',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
      'flag_frontpage_artikel' => 'ds_content',
      'ds_flag_facebook_artikel' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|artikel|ag_artikel_startseite'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gruppe|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gruppe';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|gruppe|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function attac_gruppen_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ag_artikel_startseite';
  $ds_view_mode->label = 'AG Artikel Startseite';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ag_artikel_startseite'] = $ds_view_mode;

  return $export;
}
