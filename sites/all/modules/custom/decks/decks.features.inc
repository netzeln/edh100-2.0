<?php
/**
 * @file
 * decks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function decks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function decks_node_info() {
  $items = array(
    'deck' => array(
      'name' => t('Deck'),
      'base' => 'node_content',
      'description' => t('a deck in the collection'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
