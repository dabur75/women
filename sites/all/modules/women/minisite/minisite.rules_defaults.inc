<?php
/**
 * @file
 * minisite.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function minisite_default_rules_configuration() {
  $items = array();
  $items['rules_create_custom_pages_to_profiles'] = entity_import('rules_config', '{ "rules_create_custom_pages_to_profiles" : {
      "LABEL" : "Create custom pages to profiles",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "main",
              "param_title" : "\\u05e8\\u05d0\\u05e9\\u05d9 - [account:name]",
              "param_author" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "main_created" : "Create Main node" } }
          }
        },
        { "entity_save" : { "data" : [ "main-created" ], "immediate" : 1 } },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "about",
              "param_title" : "\\u05de\\u05d9\\u05d3\\u05e2 \\u05d0\\u05d5\\u05d3\\u05d5\\u05ea [account:name]",
              "param_author" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "create_about" : "Create about node" } }
          }
        },
        { "entity_save" : { "data" : [ "create-about" ], "immediate" : 1 } },
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "bussiness",
              "param_title" : "\\u05de\\u05d9\\u05d3\\u05e2 \\u05e2\\u05dc \\u05d4\\u05e2\\u05e1\\u05e7 \\u05e9\\u05dc [account:name]",
              "param_author" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "bussiness_node" : "Create bussiness node" } }
          }
        },
        { "entity_save" : { "data" : [ "bussiness-node" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
