<?php
/**
 * @file
 * vragentrommel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vragentrommel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vragentrommel_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vragentrommel_node_info() {
  $items = array(
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
