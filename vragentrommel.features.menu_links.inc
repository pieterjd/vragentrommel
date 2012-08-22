<?php
/**
 * @file
 * vragentrommel.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vragentrommel_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add/question
  $menu_links['main-menu:node/add/question'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/question',
    'router_path' => 'node/add/question',
    'link_title' => 'Ask a question',
    'options' => array(
      'attributes' => array(
        'title' => 'Click this link to ask a question',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:question-overview
  $menu_links['main-menu:question-overview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'question-overview',
    'router_path' => 'question-overview',
    'link_title' => 'Question Overview',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:unanswered-questions
  $menu_links['main-menu:unanswered-questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'unanswered-questions',
    'router_path' => 'unanswered-questions',
    'link_title' => 'Unanswered Questions',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ask a question');
  t('Question Overview');
  t('Unanswered Questions');


  return $menu_links;
}
