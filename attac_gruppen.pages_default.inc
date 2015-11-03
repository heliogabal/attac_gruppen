<?php
/**
 * @file
 * attac_gruppen.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function attac_gruppen_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Gruppenseite',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG membership from a group node and user',
        'keyword' => 'og_membership',
        'name' => 'og_membership_from_group_and_user',
        'context' => array(
          0 => 'argument_entity_id:node_1',
        ),
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'AG des Beitrages',
        'keyword' => 'ag_taxonomy_term',
        'name' => 'term_from_node',
        'vid' => '1',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Taxonomie-Begriff von Beitrag (in Beitrag: AG [field_inhalt_ag])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_inhalt_ag-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group_content',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'seitenspalte',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Zentriert',
        'width' => '75.02024184021556',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'seitenspalte' => array(
        'type' => 'region',
        'title' => 'Seitenspalte',
        'width' => '24.979758159784442',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
      'center' => NULL,
      'seitenspalte' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aeaf18cc-3ae8-4633-b1bb-f30ad9cd8ad4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-582db00e-4a7c-42e8-a727-ee2950942754';
    $pane->panel = 'left';
    $pane->type = 'og_menu_single_menu';
    $pane->subtype = 'og_menu_single_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 0,
      'return' => 'Abschließen',
      'cancel' => 'Abbrechen',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-cKDKvYNrDvunDGr_TIRam2vmxJ3pnVg_KOGjFyTTero',
      'form_token' => 'OYMIvwKROu-5InQMLfpds7KzpK7pko4NLFncjbmoW7w',
      'form_id' => 'og_menu_single_pane_edit_form',
      'op' => 'Abschließen',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ag-menu card news sidemenu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '582db00e-4a7c-42e8-a727-ee2950942754';
    $display->content['new-582db00e-4a7c-42e8-a727-ee2950942754'] = $pane;
    $display->panels['left'][0] = 'new-582db00e-4a7c-42e8-a727-ee2950942754';
    $pane = new stdClass();
    $pane->pid = 'new-5bda69c1-f30e-4e90-a4e6-bac09607572d';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'termine';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'context' => array(
        0 => 'argument_entity_id:node_1.field_adresse',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'card',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5bda69c1-f30e-4e90-a4e6-bac09607572d';
    $display->content['new-5bda69c1-f30e-4e90-a4e6-bac09607572d'] = $pane;
    $display->panels['left'][1] = 'new-5bda69c1-f30e-4e90-a4e6-bac09607572d';
    $pane = new stdClass();
    $pane->pid = 'new-54226631-a4df-45a4-a0d7-0c9f21a08f54';
    $pane->panel = 'left';
    $pane->type = 'node_create_links';
    $pane->subtype = 'node_create_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(),
      'field_name' => 'og_group_ref',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '54226631-a4df-45a4-a0d7-0c9f21a08f54';
    $display->content['new-54226631-a4df-45a4-a0d7-0c9f21a08f54'] = $pane;
    $display->panels['left'][2] = 'new-54226631-a4df-45a4-a0d7-0c9f21a08f54';
    $pane = new stdClass();
    $pane->pid = 'new-92a9c534-62cc-4620-9922-ad9ada31d765';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'og_membership:og_membership_request';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_og_membership_from_group_and_user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '92a9c534-62cc-4620-9922-ad9ada31d765';
    $display->content['new-92a9c534-62cc-4620-9922-ad9ada31d765'] = $pane;
    $display->panels['left'][3] = 'new-92a9c534-62cc-4620-9922-ad9ada31d765';
    $pane = new stdClass();
    $pane->pid = 'new-1fc777e3-a76a-476d-9424-be7e12db68bd';
    $pane->panel = 'middle';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fc777e3-a76a-476d-9424-be7e12db68bd';
    $display->content['new-1fc777e3-a76a-476d-9424-be7e12db68bd'] = $pane;
    $display->panels['middle'][0] = 'new-1fc777e3-a76a-476d-9424-be7e12db68bd';
    $pane = new stdClass();
    $pane->pid = 'new-b0e72eb7-3197-4234-af49-cf3c79a15458';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b0e72eb7-3197-4234-af49-cf3c79a15458';
    $display->content['new-b0e72eb7-3197-4234-af49-cf3c79a15458'] = $pane;
    $display->panels['right'][0] = 'new-b0e72eb7-3197-4234-af49-cf3c79a15458';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function attac_gruppen_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'schaltzentrale';
  $page->task = 'page';
  $page->admin_title = 'Schaltzentrale';
  $page->admin_description = 'Die Schaltzentrale ermöglicht die Erstellung aller Inhalte von zentraler Stelle aus.';
  $page->path = 'admin/cockpit';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 9,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Schaltzentrale',
    'name' => 'management',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schaltzentrale_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'schaltzentrale';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Cockpit Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'cockpit',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Nutzer',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG membership from a group node and user',
        'keyword' => 'og_membership',
        'name' => 'og_membership_from_group_and_user',
        'context' => array(
          1 => 'context_user_1',
        ),
        'id' => 1,
      ),
    ),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
            ),
          ),
          'context' => 'context_user_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Schaltzentrale';
  $display->uuid = '30112bfb-57b6-454d-a8b3-a42ee43fcdd6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b8bca50-1557-474f-9ee0-e0b3807bd1ee';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'cockpit-letzte_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b8bca50-1557-474f-9ee0-e0b3807bd1ee';
    $display->content['new-7b8bca50-1557-474f-9ee0-e0b3807bd1ee'] = $pane;
    $display->panels['left_above'][0] = 'new-7b8bca50-1557-474f-9ee0-e0b3807bd1ee';
    $pane = new stdClass();
    $pane->pid = 'new-a4356b22-5c4c-4bb2-acc7-b505845eccb4';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'cockpit-letzte_ag_seiten';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a4356b22-5c4c-4bb2-acc7-b505845eccb4';
    $display->content['new-a4356b22-5c4c-4bb2-acc7-b505845eccb4'] = $pane;
    $display->panels['left_below'][0] = 'new-a4356b22-5c4c-4bb2-acc7-b505845eccb4';
    $pane = new stdClass();
    $pane->pid = 'new-9e27c7df-71a0-4ecf-8b24-e915ee469a1a';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9e27c7df-71a0-4ecf-8b24-e915ee469a1a';
    $display->content['new-9e27c7df-71a0-4ecf-8b24-e915ee469a1a'] = $pane;
    $display->panels['left_below'][1] = 'new-9e27c7df-71a0-4ecf-8b24-e915ee469a1a';
    $pane = new stdClass();
    $pane->pid = 'new-851c5b5b-f8b3-4d57-8490-e9b94c3102cf';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'cockpit-letzte_termine';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '851c5b5b-f8b3-4d57-8490-e9b94c3102cf';
    $display->content['new-851c5b5b-f8b3-4d57-8490-e9b94c3102cf'] = $pane;
    $display->panels['right_above'][0] = 'new-851c5b5b-f8b3-4d57-8490-e9b94c3102cf';
    $pane = new stdClass();
    $pane->pid = 'new-94ec8b03-168c-4f90-bd4b-9ffb49374a43';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'cockpit-letzte_protokolle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94ec8b03-168c-4f90-bd4b-9ffb49374a43';
    $display->content['new-94ec8b03-168c-4f90-bd4b-9ffb49374a43'] = $pane;
    $display->panels['right_below'][0] = 'new-94ec8b03-168c-4f90-bd4b-9ffb49374a43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_schaltzentrale__cockpit-ags';
  $handler->task = 'page';
  $handler->subtask = 'schaltzentrale';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Cockpit AGs',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'cockpit',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Benutzer',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    ),
    'name' => 'cockpit-ags',
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_brick_top' => NULL,
      'two_brick_left_above' => NULL,
      'two_brick_right_above' => NULL,
      'two_brick_middle' => NULL,
      'two_brick_left_below' => NULL,
      'two_brick_right_below' => NULL,
      'two_brick_bottom' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Schaltzentrale';
  $display->uuid = '30112bfb-57b6-454d-a8b3-a42ee43fcdd6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1cfc417e-6e76-4add-b997-1003f63d34ea';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1cfc417e-6e76-4add-b997-1003f63d34ea';
    $display->content['new-1cfc417e-6e76-4add-b997-1003f63d34ea'] = $pane;
    $display->panels['left_above'][0] = 'new-1cfc417e-6e76-4add-b997-1003f63d34ea';
    $pane = new stdClass();
    $pane->pid = 'new-320d016d-8379-4362-a66f-24056ac10560';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '320d016d-8379-4362-a66f-24056ac10560';
    $display->content['new-320d016d-8379-4362-a66f-24056ac10560'] = $pane;
    $display->panels['left_below'][0] = 'new-320d016d-8379-4362-a66f-24056ac10560';
    $pane = new stdClass();
    $pane->pid = 'new-f1b73942-8ad7-4c80-b717-df1427b1e87d';
    $pane->panel = 'left_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1b73942-8ad7-4c80-b717-df1427b1e87d';
    $display->content['new-f1b73942-8ad7-4c80-b717-df1427b1e87d'] = $pane;
    $display->panels['left_below'][1] = 'new-f1b73942-8ad7-4c80-b717-df1427b1e87d';
    $pane = new stdClass();
    $pane->pid = 'new-9bd4c2ec-2071-40b7-9f20-114d7528a72f';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bd4c2ec-2071-40b7-9f20-114d7528a72f';
    $display->content['new-9bd4c2ec-2071-40b7-9f20-114d7528a72f'] = $pane;
    $display->panels['right_above'][0] = 'new-9bd4c2ec-2071-40b7-9f20-114d7528a72f';
    $pane = new stdClass();
    $pane->pid = 'new-b03c7c5d-5cc9-444b-bc9f-5686e064487c';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b03c7c5d-5cc9-444b-bc9f-5686e064487c';
    $display->content['new-b03c7c5d-5cc9-444b-bc9f-5686e064487c'] = $pane;
    $display->panels['right_below'][0] = 'new-b03c7c5d-5cc9-444b-bc9f-5686e064487c';
    $pane = new stdClass();
    $pane->pid = 'new-49ae3215-7bdb-464e-ad62-eb2120ead45f';
    $pane->panel = 'right_below';
    $pane->type = 'views_panes';
    $pane->subtype = 'ag_cockpit-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '49ae3215-7bdb-464e-ad62-eb2120ead45f';
    $display->content['new-49ae3215-7bdb-464e-ad62-eb2120ead45f'] = $pane;
    $display->panels['right_below'][1] = 'new-49ae3215-7bdb-464e-ad62-eb2120ead45f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['schaltzentrale'] = $page;

  return $pages;

}
