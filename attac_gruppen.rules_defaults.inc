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
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_facebook_post" } },
        { "data_is_empty" : { "data" : [ "node:field-facebook-post" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_news_bild" } }
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
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-picture" ],
            "value" : [ "node:field-news-bild:0:url" ]
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
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-facebook-post" ],
            "value" : [ "entity-created" ]
          }
        },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
      ]
    }
  }');
  $items['rules_in_facebook_ver_ffentlichen_wenn_flag_gesetzt_wurde'] = entity_import('rules_config', '{ "rules_in_facebook_ver_ffentlichen_wenn_flag_gesetzt_wurde" : {
      "LABEL" : "Update Facebook Post",
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
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_facebook_post" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-facebook-post" ] } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_bilder" } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "facebook_publication",
              "id" : [ "node:field-facebook-post:fbpid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "facebook_post" : "Facebook Post" } }
          }
        },
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
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-picture" ],
            "value" : [ "node:field-bilder:0:url" ]
          }
        },
        { "edit_in_facebook" : {
            "USING" : {
              "publication_id" : [ "entity-created" ],
              "privacy" : "EVERYONE",
              "retry" : "1",
              "destination" : "168269653374575"
            },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id_updated" : "Facebook publication returned ID updated" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:facebook-id" ],
            "value" : [ "facebook-publication-id-updated" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "data_set" : { "data" : [ "node:field-facebook-post" ], "value" : [ "facebook-post" ] } },
        { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } }
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
