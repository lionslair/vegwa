<?php
/**
 * @file
 * vegwa_organisations_contacts.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vegwa_organisations_contacts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vegwa_organisations_contacts_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => t('Contact details for a related person'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('This holds all the details of the organisation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
