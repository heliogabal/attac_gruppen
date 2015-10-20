<?php
/**
 * @file
 * attac_gruppen.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function attac_gruppen_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'Deutsch',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
  );
  return $languages;
}
