<?php
/**
 * @file
 * vragentrommel.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vragentrommel_default_rules_configuration() {
  $items = array();
  $items['rules_send_mail_on_new_question'] = entity_import('rules_config', '{ "rules_send_mail_on_new_question" : {
      "LABEL" : "send mail on new question",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "question" : "question" } }
          }
        },
        { "list_contains" : { "list" : [ "node:field-course-term" ], "item" : "52256" } },
        { "AND" : [] }
      ],
      "DO" : []
    }
  }');
  $items['rules_set_state_to_answered_if_a_question_is_answer'] = entity_import('rules_config', '{ "rules_set_state_to_answered_if_a_question_is_answer" : {
      "LABEL" : "Set state to answered if a question is answered",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "question" : "question" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-answer:value" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-state:name" ], "value" : "Answered" } }
      ]
    }
  }');
  return $items;
}
