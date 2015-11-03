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
    'arbeitsgruppen' => array(
      'name' => 'Arbeitsgruppen',
      'machine_name' => 'arbeitsgruppen',
      'description' => 'Kategorisierung nach AGs, um z.B. themenspezifische Artikel und gefilterte Termine zu ermöglichen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'themen' => array(
      'name' => 'Themen',
      'machine_name' => 'themen',
      'description' => 'Themen können Inhalten als Stichworte hinzugefügt werden.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
