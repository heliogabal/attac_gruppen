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
  $items['rules_in_facebook_ver_ffentlichen'] = entity_import('rules_config', '{ "rules_in_facebook_ver_ffentlichen" : {
      "LABEL" : "In Facebook ver\\u00f6ffentlichen",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "facebook custom" ],
      "REQUIRES" : [ "flag", "rules", "fb_autopost_entity" ],
      "ON" : {
        "node_insert--artikel" : { "bundle" : "artikel" },
        "node_insert--news" : { "bundle" : "news" }
      },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "facebook_artikel",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ]
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "post",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-name" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:body:value" ]
          }
        },
        { "publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "168269653374575" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:facebook-id" ],
            "value" : [ "facebook-publication-id" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ] } }
      ]
    }
  }');
  $items['rules_in_facebook_ver_ffentlichen_wenn_flag_gesetzt_wurde'] = entity_import('rules_config', '{ "rules_in_facebook_ver_ffentlichen_wenn_flag_gesetzt_wurde" : {
      "LABEL" : "In Facebook ver\\u00f6ffentlichen, wenn Flag gesetzt wurde",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "OWNER" : "rules",
      "TAGS" : [ "facebook custom" ],
      "REQUIRES" : [ "flag", "rules", "fb_autopost_entity" ],
      "ON" : {
        "node_update--artikel" : { "bundle" : "artikel" },
        "node_update--news" : { "bundle" : "news" }
      },
      "IF" : [
        { "flag_flagged_node" : {
            "flag" : "facebook_artikel",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ]
          }
        }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "post",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-name" ],
            "value" : [ "node:title" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:body:value" ]
          }
        },
        { "publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "168269653374575" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:facebook-id" ],
            "value" : [ "facebook-publication-id" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ] } }
      ]
    }
  }');
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
