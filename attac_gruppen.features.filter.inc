<?php
/**
 * @file
 * attac_gruppen.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function attac_gruppen_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'invisimail_encode_js_entities' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 0,
        ),
      ),
      'filter_html' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <i> <strong> <b> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <p> <br> <h1> <h2> <h3> <h4> <table> <thead> <tbody> <th> <tr> <td> <caption><span><div>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_scald_link_filter' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
      'mee_scald_widgets' => array(
        'weight' => -36,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -35,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_qtip' => array(
        'weight' => -34,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'picture' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'icon' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_scald_link_filter' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(),
      ),
      'mee_scald_widgets' => array(
        'weight' => -37,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => -36,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_qtip' => array(
        'weight' => -35,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
