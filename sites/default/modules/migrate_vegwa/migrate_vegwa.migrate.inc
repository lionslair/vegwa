<?php

// $Id$
/**
 * You must implement hook_migrate_api(), setting the API level to 2, for
 * your migration classes to be recognized by the Migrate module (for the 7.x-2.x branch).
 */
function migrate_vegwa_migrate_api() {
  $api = array(
      'api' => 2,
      'migrations' => array(
        'Organisations' => array('class_name' => 'OrganisationsMigration'),
        'PriContact' => array('class_name' => 'PriContactMigration'),
        'SecContact' => array('class_name' => 'SecContactMigration'),
      ),
      'field handlers' => array('MigrateEmailFieldHandler', 'MigrateLinkFieldHandler', 'MigrateEntityReferenceFieldHandler', 'MigrateTextFieldHandler', 'MigrateValueFieldHandler'),
  );
  return $api;
}
