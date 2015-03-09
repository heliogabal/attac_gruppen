<?php
/**
 * @file
 * attac_gruppen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function attac_gruppen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_arbeitsgruppen:node/84
  $menu_links['main-menu_arbeitsgruppen:node/84'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/84',
    'router_path' => 'node/%',
    'link_title' => 'Arbeitsgruppen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_arbeitsgruppen:node/84',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: main-menu_argumente:node/83
  $menu_links['main-menu_argumente:node/83'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/83',
    'router_path' => 'node/%',
    'link_title' => 'Argumente',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_argumente:node/83',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_degrowth:node/85
  $menu_links['main-menu_degrowth:node/85'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/85',
    'router_path' => 'node/%',
    'link_title' => 'Degrowth',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_degrowth:node/85',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_energie:node/100
  $menu_links['main-menu_energie:node/100'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/100',
    'router_path' => 'node/%',
    'link_title' => 'Energie',
    'options' => array(
      'identifier' => 'main-menu_energie:node/100',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_finanzmrkte:node/101
  $menu_links['main-menu_finanzmrkte:node/101'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/101',
    'router_path' => 'node/%',
    'link_title' => 'Finanzmärkte',
    'options' => array(
      'identifier' => 'main-menu_finanzmrkte:node/101',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_gender:node/102
  $menu_links['main-menu_gender:node/102'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/102',
    'router_path' => 'node/%',
    'link_title' => 'Gender',
    'options' => array(
      'identifier' => 'main-menu_gender:node/102',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_globalisierung-und-krieg:node/103
  $menu_links['main-menu_globalisierung-und-krieg:node/103'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/103',
    'router_path' => 'node/%',
    'link_title' => 'Globalisierung und Krieg',
    'options' => array(
      'identifier' => 'main-menu_globalisierung-und-krieg:node/103',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_migration--antirassismus:node/104
  $menu_links['main-menu_migration--antirassismus:node/104'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/104',
    'router_path' => 'node/%',
    'link_title' => 'Migration & Antirassismus',
    'options' => array(
      'identifier' => 'main-menu_migration--antirassismus:node/104',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_noya:https://noyaberlin.wordpress.com/
  $menu_links['main-menu_noya:https://noyaberlin.wordpress.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://noyaberlin.wordpress.com/',
    'router_path' => '',
    'link_title' => 'Noya',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_noya:https://noyaberlin.wordpress.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_pg-agenda-2010:http://attacberlin.de/agenda2010/
  $menu_links['main-menu_pg-agenda-2010:http://attacberlin.de/agenda2010/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://attacberlin.de/agenda2010/',
    'router_path' => '',
    'link_title' => 'PG Agenda 2010',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pg-agenda-2010:http://attacberlin.de/agenda2010/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_pg-bahn:node/107
  $menu_links['main-menu_pg-bahn:node/107'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/107',
    'router_path' => 'node/%',
    'link_title' => 'PG Bahn',
    'options' => array(
      'identifier' => 'main-menu_pg-bahn:node/107',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_pg-krise--protest:node/108
  $menu_links['main-menu_pg-krise--protest:node/108'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'PG Krise & Protest',
    'options' => array(
      'identifier' => 'main-menu_pg-krise--protest:node/108',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_pg-nottip:node/109
  $menu_links['main-menu_pg-nottip:node/109'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/109',
    'router_path' => 'node/%',
    'link_title' => 'PG noTTIP',
    'options' => array(
      'identifier' => 'main-menu_pg-nottip:node/109',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_solidarische-konomie:node/105
  $menu_links['main-menu_solidarische-konomie:node/105'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'Solidarische Ökonomie',
    'options' => array(
      'identifier' => 'main-menu_solidarische-konomie:node/105',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Exported menu link: main-menu_sprache:node/106
  $menu_links['main-menu_sprache:node/106'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/106',
    'router_path' => 'node/%',
    'link_title' => 'Sprache',
    'options' => array(
      'identifier' => 'main-menu_sprache:node/106',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_arbeitsgruppen:node/84',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Arbeitsgruppen');
  t('Argumente');
  t('Degrowth');
  t('Energie');
  t('Finanzmärkte');
  t('Gender');
  t('Globalisierung und Krieg');
  t('Migration & Antirassismus');
  t('Noya');
  t('PG Agenda 2010');
  t('PG Bahn');
  t('PG Krise & Protest');
  t('PG noTTIP');
  t('Solidarische Ökonomie');
  t('Sprache');


  return $menu_links;
}
