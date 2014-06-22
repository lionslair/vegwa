<?php
/**
 * @file
 * vegwa_organisations_contacts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vegwa_organisations_contacts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25,50,100,200,500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_original_organisation_id' => 'field_original_organisation_id',
    'field_contact_firstname' => 'field_contact_firstname',
    'field_contact_lastname' => 'field_contact_lastname',
    'field_contact_email' => 'field_contact_email',
    'field_contact_mobile' => 'field_contact_mobile',
    'field_contact_skype' => 'field_contact_skype',
    'field_contact_town' => 'field_contact_town',
    'field_primary_contact' => 'field_primary_contact',
    'field_contact_organisation' => 'field_contact_organisation',
    'edit_node' => 'edit_node',
    'view_node' => 'view_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_original_organisation_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_mobile' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_skype' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_town' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_primary_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_organisation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_contact_firstname']['id'] = 'field_contact_firstname';
  $handler->display->display_options['fields']['field_contact_firstname']['table'] = 'field_data_field_contact_firstname';
  $handler->display->display_options['fields']['field_contact_firstname']['field'] = 'field_contact_firstname';
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  /* Field: Content: Mobile */
  $handler->display->display_options['fields']['field_contact_mobile']['id'] = 'field_contact_mobile';
  $handler->display->display_options['fields']['field_contact_mobile']['table'] = 'field_data_field_contact_mobile';
  $handler->display->display_options['fields']['field_contact_mobile']['field'] = 'field_contact_mobile';
  /* Field: Content: Skype */
  $handler->display->display_options['fields']['field_contact_skype']['id'] = 'field_contact_skype';
  $handler->display->display_options['fields']['field_contact_skype']['table'] = 'field_data_field_contact_skype';
  $handler->display->display_options['fields']['field_contact_skype']['field'] = 'field_contact_skype';
  /* Field: Content: Town */
  $handler->display->display_options['fields']['field_contact_town']['id'] = 'field_contact_town';
  $handler->display->display_options['fields']['field_contact_town']['table'] = 'field_data_field_contact_town';
  $handler->display->display_options['fields']['field_contact_town']['field'] = 'field_contact_town';
  /* Field: Content: Primary Contact */
  $handler->display->display_options['fields']['field_primary_contact']['id'] = 'field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['table'] = 'field_data_field_primary_contact';
  $handler->display->display_options['fields']['field_primary_contact']['field'] = 'field_primary_contact';
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_contact_organisation']['id'] = 'field_contact_organisation';
  $handler->display->display_options['fields']['field_contact_organisation']['table'] = 'field_data_field_contact_organisation';
  $handler->display->display_options['fields']['field_contact_organisation']['field'] = 'field_contact_organisation';
  $handler->display->display_options['fields']['field_contact_organisation']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'view';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First Name (field_contact_firstname) */
  $handler->display->display_options['filters']['field_contact_firstname_value']['id'] = 'field_contact_firstname_value';
  $handler->display->display_options['filters']['field_contact_firstname_value']['table'] = 'field_data_field_contact_firstname';
  $handler->display->display_options['filters']['field_contact_firstname_value']['field'] = 'field_contact_firstname_value';
  $handler->display->display_options['filters']['field_contact_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['operator_id'] = 'field_contact_firstname_value_op';
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['operator'] = 'field_contact_firstname_value_op';
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['identifier'] = 'field_contact_firstname_value';
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Last Name (field_contact_lastname) */
  $handler->display->display_options['filters']['field_contact_lastname_value']['id'] = 'field_contact_lastname_value';
  $handler->display->display_options['filters']['field_contact_lastname_value']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['filters']['field_contact_lastname_value']['field'] = 'field_contact_lastname_value';
  $handler->display->display_options['filters']['field_contact_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['operator_id'] = 'field_contact_lastname_value_op';
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['operator'] = 'field_contact_lastname_value_op';
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['identifier'] = 'field_contact_lastname_value';
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Email (field_contact_email) */
  $handler->display->display_options['filters']['field_contact_email_email']['id'] = 'field_contact_email_email';
  $handler->display->display_options['filters']['field_contact_email_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['filters']['field_contact_email_email']['field'] = 'field_contact_email_email';
  $handler->display->display_options['filters']['field_contact_email_email']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_email_email']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_email_email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['operator_id'] = 'field_contact_email_email_op';
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['operator'] = 'field_contact_email_email_op';
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['identifier'] = 'field_contact_email_email';
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_email_email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Mobile (field_contact_mobile) */
  $handler->display->display_options['filters']['field_contact_mobile_value']['id'] = 'field_contact_mobile_value';
  $handler->display->display_options['filters']['field_contact_mobile_value']['table'] = 'field_data_field_contact_mobile';
  $handler->display->display_options['filters']['field_contact_mobile_value']['field'] = 'field_contact_mobile_value';
  $handler->display->display_options['filters']['field_contact_mobile_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_mobile_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_mobile_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['operator_id'] = 'field_contact_mobile_value_op';
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['label'] = 'Mobile';
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['operator'] = 'field_contact_mobile_value_op';
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['identifier'] = 'field_contact_mobile_value';
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_mobile_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Town (field_contact_town) */
  $handler->display->display_options['filters']['field_contact_town_value']['id'] = 'field_contact_town_value';
  $handler->display->display_options['filters']['field_contact_town_value']['table'] = 'field_data_field_contact_town';
  $handler->display->display_options['filters']['field_contact_town_value']['field'] = 'field_contact_town_value';
  $handler->display->display_options['filters']['field_contact_town_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_town_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_town_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['operator_id'] = 'field_contact_town_value_op';
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['label'] = 'Town';
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['operator'] = 'field_contact_town_value_op';
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['identifier'] = 'field_contact_town_value';
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_town_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Primary Contact (field_primary_contact) */
  $handler->display->display_options['filters']['field_primary_contact_value']['id'] = 'field_primary_contact_value';
  $handler->display->display_options['filters']['field_primary_contact_value']['table'] = 'field_data_field_primary_contact';
  $handler->display->display_options['filters']['field_primary_contact_value']['field'] = 'field_primary_contact_value';
  $handler->display->display_options['filters']['field_primary_contact_value']['group'] = 1;
  $handler->display->display_options['filters']['field_primary_contact_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['operator_id'] = 'field_primary_contact_value_op';
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['label'] = 'Primary Contact';
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['operator'] = 'field_primary_contact_value_op';
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['identifier'] = 'field_primary_contact_value';
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_primary_contact_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Organisation (field_contact_organisation) */
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['id'] = 'field_contact_organisation_target_id';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['table'] = 'field_data_field_contact_organisation';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['field'] = 'field_contact_organisation_target_id';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['operator_id'] = 'field_contact_organisation_target_id_op';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['label'] = 'Organisation';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['operator'] = 'field_contact_organisation_target_id_op';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['identifier'] = 'field_contact_organisation_target_id';
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_contact_organisation_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'contacts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contacts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['contacts'] = $view;

  $view = new view();
  $view->name = 'organisations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organisations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organisations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25,50,100,200,500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_original_organisation_id' => 'field_original_organisation_id',
    'field_organisation' => 'field_organisation',
    'field_business_type' => 'field_business_type',
    'field_crop_type' => 'field_crop_type',
    'field_hectares' => 'field_hectares',
    'field_organisation_email' => 'field_organisation_email',
    'field_organisation_phone' => 'field_organisation_phone',
    'field_organisation_postcode' => 'field_organisation_postcode',
    'field_region' => 'field_region',
    'field_organisation_state' => 'field_organisation_state',
    'field_organisation_website' => 'field_organisation_website',
    'edit_node' => 'edit_node',
    'view_node' => 'view_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_original_organisation_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_business_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_crop_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hectares' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_postcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  /* Field: Content: Original Organisation ID */
  $handler->display->display_options['fields']['field_original_organisation_id']['id'] = 'field_original_organisation_id';
  $handler->display->display_options['fields']['field_original_organisation_id']['table'] = 'field_data_field_original_organisation_id';
  $handler->display->display_options['fields']['field_original_organisation_id']['field'] = 'field_original_organisation_id';
  $handler->display->display_options['fields']['field_original_organisation_id']['label'] = 'Original ID';
  $handler->display->display_options['fields']['field_original_organisation_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Organisation */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  /* Field: Content: Business Type */
  $handler->display->display_options['fields']['field_business_type']['id'] = 'field_business_type';
  $handler->display->display_options['fields']['field_business_type']['table'] = 'field_data_field_business_type';
  $handler->display->display_options['fields']['field_business_type']['field'] = 'field_business_type';
  /* Field: Content: Crop Type */
  $handler->display->display_options['fields']['field_crop_type']['id'] = 'field_crop_type';
  $handler->display->display_options['fields']['field_crop_type']['table'] = 'field_data_field_crop_type';
  $handler->display->display_options['fields']['field_crop_type']['field'] = 'field_crop_type';
  $handler->display->display_options['fields']['field_crop_type']['delta_offset'] = '0';
  /* Field: Content: Hectares */
  $handler->display->display_options['fields']['field_hectares']['id'] = 'field_hectares';
  $handler->display->display_options['fields']['field_hectares']['table'] = 'field_data_field_hectares';
  $handler->display->display_options['fields']['field_hectares']['field'] = 'field_hectares';
  $handler->display->display_options['fields']['field_hectares']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '3',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_hectares']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_organisation_email']['id'] = 'field_organisation_email';
  $handler->display->display_options['fields']['field_organisation_email']['table'] = 'field_data_field_organisation_email';
  $handler->display->display_options['fields']['field_organisation_email']['field'] = 'field_organisation_email';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_organisation_phone']['id'] = 'field_organisation_phone';
  $handler->display->display_options['fields']['field_organisation_phone']['table'] = 'field_data_field_organisation_phone';
  $handler->display->display_options['fields']['field_organisation_phone']['field'] = 'field_organisation_phone';
  /* Field: Content: Postcode */
  $handler->display->display_options['fields']['field_organisation_postcode']['id'] = 'field_organisation_postcode';
  $handler->display->display_options['fields']['field_organisation_postcode']['table'] = 'field_data_field_organisation_postcode';
  $handler->display->display_options['fields']['field_organisation_postcode']['field'] = 'field_organisation_postcode';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_organisation_state']['id'] = 'field_organisation_state';
  $handler->display->display_options['fields']['field_organisation_state']['table'] = 'field_data_field_organisation_state';
  $handler->display->display_options['fields']['field_organisation_state']['field'] = 'field_organisation_state';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_organisation_website']['id'] = 'field_organisation_website';
  $handler->display->display_options['fields']['field_organisation_website']['table'] = 'field_data_field_organisation_website';
  $handler->display->display_options['fields']['field_organisation_website']['field'] = 'field_organisation_website';
  $handler->display->display_options['fields']['field_organisation_website']['click_sort_column'] = 'url';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'view';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Original Organisation ID (field_original_organisation_id) */
  $handler->display->display_options['filters']['field_original_organisation_id_value']['id'] = 'field_original_organisation_id_value';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['table'] = 'field_data_field_original_organisation_id';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['field'] = 'field_original_organisation_id_value';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_original_organisation_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['operator_id'] = 'field_original_organisation_id_value_op';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['label'] = 'Original Organisation ID';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['operator'] = 'field_original_organisation_id_value_op';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['identifier'] = 'field_original_organisation_id_value';
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_original_organisation_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Organisation (field_organisation) */
  $handler->display->display_options['filters']['field_organisation_value']['id'] = 'field_organisation_value';
  $handler->display->display_options['filters']['field_organisation_value']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['filters']['field_organisation_value']['field'] = 'field_organisation_value';
  $handler->display->display_options['filters']['field_organisation_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_organisation_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_value']['expose']['operator_id'] = 'field_organisation_value_op';
  $handler->display->display_options['filters']['field_organisation_value']['expose']['label'] = 'Organisation';
  $handler->display->display_options['filters']['field_organisation_value']['expose']['operator'] = 'field_organisation_value_op';
  $handler->display->display_options['filters']['field_organisation_value']['expose']['identifier'] = 'field_organisation_value';
  $handler->display->display_options['filters']['field_organisation_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Business Type (field_business_type) */
  $handler->display->display_options['filters']['field_business_type_value']['id'] = 'field_business_type_value';
  $handler->display->display_options['filters']['field_business_type_value']['table'] = 'field_data_field_business_type';
  $handler->display->display_options['filters']['field_business_type_value']['field'] = 'field_business_type_value';
  $handler->display->display_options['filters']['field_business_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_business_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_type_value']['expose']['operator_id'] = 'field_business_type_value_op';
  $handler->display->display_options['filters']['field_business_type_value']['expose']['label'] = 'Business Type';
  $handler->display->display_options['filters']['field_business_type_value']['expose']['operator'] = 'field_business_type_value_op';
  $handler->display->display_options['filters']['field_business_type_value']['expose']['identifier'] = 'field_business_type_value';
  $handler->display->display_options['filters']['field_business_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_business_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Crop Type (field_crop_type) */
  $handler->display->display_options['filters']['field_crop_type_value']['id'] = 'field_crop_type_value';
  $handler->display->display_options['filters']['field_crop_type_value']['table'] = 'field_data_field_crop_type';
  $handler->display->display_options['filters']['field_crop_type_value']['field'] = 'field_crop_type_value';
  $handler->display->display_options['filters']['field_crop_type_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_crop_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_crop_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['operator_id'] = 'field_crop_type_value_op';
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['label'] = 'Crop Type';
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['operator'] = 'field_crop_type_value_op';
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['identifier'] = 'field_crop_type_value';
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_crop_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Postcode (field_organisation_postcode) */
  $handler->display->display_options['filters']['field_organisation_postcode_value']['id'] = 'field_organisation_postcode_value';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['table'] = 'field_data_field_organisation_postcode';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['field'] = 'field_organisation_postcode_value';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_postcode_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['operator_id'] = 'field_organisation_postcode_value_op';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['label'] = 'Postcode';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['operator'] = 'field_organisation_postcode_value_op';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['identifier'] = 'field_organisation_postcode_value';
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_postcode_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_region_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: State (field_organisation_state) */
  $handler->display->display_options['filters']['field_organisation_state_value']['id'] = 'field_organisation_state_value';
  $handler->display->display_options['filters']['field_organisation_state_value']['table'] = 'field_data_field_organisation_state';
  $handler->display->display_options['filters']['field_organisation_state_value']['field'] = 'field_organisation_state_value';
  $handler->display->display_options['filters']['field_organisation_state_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_organisation_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organisation_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['operator_id'] = 'field_organisation_state_value_op';
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['operator'] = 'field_organisation_state_value_op';
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['identifier'] = 'field_organisation_state_value';
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_organisation_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'organisations';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Organisations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['organisations'] = $view;

  return $export;
}
