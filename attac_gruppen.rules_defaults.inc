<?php
/**
 * @file
 * attac_gruppen.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function attac_gruppen_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_editor_on_login'] = entity_import('rules_config', '{ "rules_redirect_editor_on_login" : {
      "LABEL" : "Redirect Editor on Login",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "custom" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "3" : "3" } } } }
      ],
      "DO" : [
        { "redirect" : { "url" : "admin\\/structure\\/menu\\/manage\\/main-menu", "force" : "0" } }
      ]
    }
  }');
  return $items;
}
