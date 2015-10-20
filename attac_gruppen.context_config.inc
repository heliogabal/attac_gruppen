<?php
/**
 * @file
 * attac_gruppen.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function attac_gruppen_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'bild_ag_seite';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'file' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-bild_ag-seite',
    ),
    'text' => array(
      '*' => 'passthrough',
    ),
    'twitter' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'file' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'image_box',
      'settings' => array(
        'classes' => '',
        'caption' => '[atom:title], by [atom:author]',
      ),
    ),
    'text' => array(
      '*' => 'default',
    ),
    'twitter' => array(
      '*' => 'default',
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '380',
    'height' => '',
  );
  $export['bild_ag_seite'] = $context_config;

  return $export;
}
