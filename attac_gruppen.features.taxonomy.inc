<?php
/**
 * @file
 * attac_gruppen.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function attac_gruppen_taxonomy_default_vocabularies() {
  return array(
    'themen' => array(
      'name' => 'Themen',
      'machine_name' => 'themen',
      'description' => 'Themen können Inhalten als Stichworte hinzugefügt werden.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
