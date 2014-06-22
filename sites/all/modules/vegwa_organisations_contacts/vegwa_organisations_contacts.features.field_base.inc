<?php
/**
 * @file
 * vegwa_organisations_contacts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vegwa_organisations_contacts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_annual_turnover'
  $field_bases['field_annual_turnover'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_annual_turnover',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_business_type'
  $field_bases['field_business_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_business_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Chairman' => 'Chairman',
        'Consultant' => 'Consultant',
        'Farm Manager' => 'Farm Manager',
        'Government' => 'Government',
        'Grower' => 'Grower',
        'Grower & Exporter' => 'Grower & Exporter',
        'Grower & Packer' => 'Grower & Packer',
        'Grower & Retailer' => 'Grower & Retailer',
        'Grower (Hydroponic)' => 'Grower (Hydroponic)',
        'Grower (Not In Wa)' => 'Grower (Not In Wa)',
        'Horticulture' => 'Horticulture',
        'Iac Chair' => 'Iac Chair',
        'Industry Body' => 'Industry Body',
        'Industry Services' => 'Industry Services',
        'Media' => 'Media',
        'Merchants: Washing & Packing &' => 'Merchants: Washing & Packing &',
        'Nrm' => 'Nrm',
        'Nursery' => 'Nursery',
        'Retail' => 'Retail',
        'Retail & Packing' => 'Retail & Packing',
        'Seed Sales' => 'Seed Sales',
        'Services' => 'Services',
        'Subscriber' => 'Subscriber',
        'Washpackers' => 'Washpackers',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_contact_email'
  $field_bases['field_contact_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_email',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_contact_firstname'
  $field_bases['field_contact_firstname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_firstname',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_lastname'
  $field_bases['field_contact_lastname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_lastname',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_mobile'
  $field_bases['field_contact_mobile'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_mobile',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_organisation'
  $field_bases['field_contact_organisation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_organisation',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'field' => 'field_organisation:value',
          'type' => 'field',
        ),
        'target_bundles' => array(
          'organisation' => 'organisation',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_contact_phone'
  $field_bases['field_contact_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_phone',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_postcode'
  $field_bases['field_contact_postcode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_postcode',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 12,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_skype'
  $field_bases['field_contact_skype'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_skype',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_streetname'
  $field_bases['field_contact_streetname'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_streetname',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_contact_title'
  $field_bases['field_contact_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_title',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Mr' => 'Mr',
        'MS' => 'MS',
        'Mr and M' => 'Mr and M',
        'Mr & Mrs' => 'Mr & Mrs',
        'DR' => 'DR',
        'MRS' => 'MRS',
        'The Hon.' => 'The Hon.',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_contact_town'
  $field_bases['field_contact_town'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_town',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_crop_type'
  $field_bases['field_crop_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_crop_type',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_enews'
  $field_bases['field_enews'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_enews',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_federal_electorate'
  $field_bases['field_federal_electorate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_federal_electorate',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_hairrigated'
  $field_bases['field_hairrigated'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hairrigated',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_hard_copy'
  $field_bases['field_hard_copy'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hard_copy',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_hectares'
  $field_bases['field_hectares'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hectares',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_internet_connection_type'
  $field_bases['field_internet_connection_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_internet_connection_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Broadband' => 'Broadband',
        'Dial-up' => 'Dial-up',
        'Satellite' => 'Satellite',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_nesb'
  $field_bases['field_nesb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nesb',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_organisation'
  $field_bases['field_organisation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_contact'
  $field_bases['field_organisation_contact'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_contact',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'DESC',
          'field' => 'field_primary_contact:value',
          'type' => 'field',
        ),
        'target_bundles' => array(
          'contact' => 'contact',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_organisation_country'
  $field_bases['field_organisation_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_country',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Andorra' => 'Andorra',
        'United Arab Emirates' => 'United Arab Emirates',
        'Afghanistan' => 'Afghanistan',
        'Antigua and Barbuda' => 'Antigua and Barbuda',
        'Anguilla' => 'Anguilla',
        'Albania' => 'Albania',
        'Armenia' => 'Armenia',
        'Netherlands Antilles' => 'Netherlands Antilles',
        'Angola' => 'Angola',
        'Antarctica' => 'Antarctica',
        'Argentina' => 'Argentina',
        'American Samoa' => 'American Samoa',
        'Austria' => 'Austria',
        'Australia' => 'Australia',
        'Aruba' => 'Aruba',
        'Aland Islands' => 'Aland Islands',
        'Azerbaijan' => 'Azerbaijan',
        'Bosnia and Herzegovina' => 'Bosnia and Herzegovina',
        'Barbados' => 'Barbados',
        'Bangladesh' => 'Bangladesh',
        'Belgium' => 'Belgium',
        'Burkina Faso' => 'Burkina Faso',
        'Bulgaria' => 'Bulgaria',
        'Bahrain' => 'Bahrain',
        'Burundi' => 'Burundi',
        'Benin' => 'Benin',
        'Saint Barthélemy' => 'Saint Barthélemy',
        'Bermuda' => 'Bermuda',
        'Brunei' => 'Brunei',
        'Bolivia' => 'Bolivia',
        'Caribbean Netherlands' => 'Caribbean Netherlands',
        'Brazil' => 'Brazil',
        'Bahamas' => 'Bahamas',
        'Bhutan' => 'Bhutan',
        'Bouvet Island' => 'Bouvet Island',
        'Botswana' => 'Botswana',
        'Belarus' => 'Belarus',
        'Belize' => 'Belize',
        'Canada' => 'Canada',
        'Cocos (Keeling) Islands' => 'Cocos (Keeling) Islands',
        'Congo (Kinshasa)' => 'Congo (Kinshasa)',
        'Central African Republic' => 'Central African Republic',
        'Congo (Brazzaville)' => 'Congo (Brazzaville)',
        'Switzerland' => 'Switzerland',
        'Ivory Coast' => 'Ivory Coast',
        'Cook Islands' => 'Cook Islands',
        'Chile' => 'Chile',
        'Cameroon' => 'Cameroon',
        'China' => 'China',
        'Colombia' => 'Colombia',
        'Costa Rica' => 'Costa Rica',
        'Cuba' => 'Cuba',
        'Cape Verde' => 'Cape Verde',
        'Curaçao' => 'Curaçao',
        'Christmas Island' => 'Christmas Island',
        'Cyprus' => 'Cyprus',
        'Czech Republic' => 'Czech Republic',
        'Germany' => 'Germany',
        'Djibouti' => 'Djibouti',
        'Denmark' => 'Denmark',
        'Dominica' => 'Dominica',
        'Dominican Republic' => 'Dominican Republic',
        'Algeria' => 'Algeria',
        'Ecuador' => 'Ecuador',
        'Estonia' => 'Estonia',
        'Egypt' => 'Egypt',
        'Western Sahara' => 'Western Sahara',
        'Eritrea' => 'Eritrea',
        'Spain' => 'Spain',
        'Ethiopia' => 'Ethiopia',
        'Finland' => 'Finland',
        'Fiji' => 'Fiji',
        'Falkland Islands' => 'Falkland Islands',
        'Micronesia' => 'Micronesia',
        'Faroe Islands' => 'Faroe Islands',
        'France' => 'France',
        'Gabon' => 'Gabon',
        'United Kingdom' => 'United Kingdom',
        'Grenada' => 'Grenada',
        'Georgia' => 'Georgia',
        'French Guiana' => 'French Guiana',
        'Guernsey' => 'Guernsey',
        'Ghana' => 'Ghana',
        'Gibraltar' => 'Gibraltar',
        'Greenland' => 'Greenland',
        'Gambia' => 'Gambia',
        'Guinea' => 'Guinea',
        'Guadeloupe' => 'Guadeloupe',
        'Equatorial Guinea' => 'Equatorial Guinea',
        'Greece' => 'Greece',
        'South Georgia and the South Sandwich Islands' => 'South Georgia and the South Sandwich Islands',
        'Guatemala' => 'Guatemala',
        'Guam' => 'Guam',
        'Guinea-Bissau' => 'Guinea-Bissau',
        'Guyana' => 'Guyana',
        'Hong Kong S.A.R., China' => 'Hong Kong S.A.R., China',
        'Heard Island and McDonald Islands' => 'Heard Island and McDonald Islands',
        'Honduras' => 'Honduras',
        'Croatia' => 'Croatia',
        'Haiti' => 'Haiti',
        'Hungary' => 'Hungary',
        'Indonesia' => 'Indonesia',
        'Ireland' => 'Ireland',
        'Israel' => 'Israel',
        'Isle of Man' => 'Isle of Man',
        'India' => 'India',
        'British Indian Ocean Territory' => 'British Indian Ocean Territory',
        'Iraq' => 'Iraq',
        'Iran' => 'Iran',
        'Iceland' => 'Iceland',
        'Italy' => 'Italy',
        'Jersey' => 'Jersey',
        'Jamaica' => 'Jamaica',
        'Jordan' => 'Jordan',
        'Japan' => 'Japan',
        'Kenya' => 'Kenya',
        'Kyrgyzstan' => 'Kyrgyzstan',
        'Cambodia' => 'Cambodia',
        'Kiribati' => 'Kiribati',
        'Comoros' => 'Comoros',
        'Saint Kitts and Nevis' => 'Saint Kitts and Nevis',
        'North Korea' => 'North Korea',
        'South Korea' => 'South Korea',
        'Kuwait' => 'Kuwait',
        'Cayman Islands' => 'Cayman Islands',
        'Kazakhstan' => 'Kazakhstan',
        'Laos' => 'Laos',
        'Lebanon' => 'Lebanon',
        'Saint Lucia' => 'Saint Lucia',
        'Liechtenstein' => 'Liechtenstein',
        'Sri Lanka' => 'Sri Lanka',
        'Liberia' => 'Liberia',
        'Lesotho' => 'Lesotho',
        'Lithuania' => 'Lithuania',
        'Luxembourg' => 'Luxembourg',
        'Latvia' => 'Latvia',
        'Libya' => 'Libya',
        'Morocco' => 'Morocco',
        'Monaco' => 'Monaco',
        'Moldova' => 'Moldova',
        'Montenegro' => 'Montenegro',
        'Saint Martin (French part)' => 'Saint Martin (French part)',
        'Madagascar' => 'Madagascar',
        'Marshall Islands' => 'Marshall Islands',
        'Macedonia' => 'Macedonia',
        'Mali' => 'Mali',
        'Myanmar' => 'Myanmar',
        'Mongolia' => 'Mongolia',
        'Macao S.A.R., China' => 'Macao S.A.R., China',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Martinique' => 'Martinique',
        'Mauritania' => 'Mauritania',
        'Montserrat' => 'Montserrat',
        'Malta' => 'Malta',
        'Mauritius' => 'Mauritius',
        'Maldives' => 'Maldives',
        'Malawi' => 'Malawi',
        'Mexico' => 'Mexico',
        'Malaysia' => 'Malaysia',
        'Mozambique' => 'Mozambique',
        'Namibia' => 'Namibia',
        'New Caledonia' => 'New Caledonia',
        'Niger' => 'Niger',
        'Norfolk Island' => 'Norfolk Island',
        'Nigeria' => 'Nigeria',
        'Nicaragua' => 'Nicaragua',
        'Netherlands' => 'Netherlands',
        'Norway' => 'Norway',
        'Nepal' => 'Nepal',
        'Nauru' => 'Nauru',
        'Niue' => 'Niue',
        'New Zealand' => 'New Zealand',
        'Oman' => 'Oman',
        'Panama' => 'Panama',
        'Peru' => 'Peru',
        'French Polynesia' => 'French Polynesia',
        'Papua New Guinea' => 'Papua New Guinea',
        'Philippines' => 'Philippines',
        'Pakistan' => 'Pakistan',
        'Poland' => 'Poland',
        'Saint Pierre and Miquelon' => 'Saint Pierre and Miquelon',
        'Pitcairn' => 'Pitcairn',
        'Puerto Rico' => 'Puerto Rico',
        'Palestinian Territory' => 'Palestinian Territory',
        'Portugal' => 'Portugal',
        'Palau' => 'Palau',
        'Paraguay' => 'Paraguay',
        'Qatar' => 'Qatar',
        'Reunion' => 'Reunion',
        'Romania' => 'Romania',
        'Serbia' => 'Serbia',
        'Russia' => 'Russia',
        'Rwanda' => 'Rwanda',
        'Saudi Arabia' => 'Saudi Arabia',
        'Solomon Islands' => 'Solomon Islands',
        'Seychelles' => 'Seychelles',
        'Sudan' => 'Sudan',
        'Sweden' => 'Sweden',
        'Singapore' => 'Singapore',
        'Saint Helena' => 'Saint Helena',
        'Slovenia' => 'Slovenia',
        'Svalbard and Jan Mayen' => 'Svalbard and Jan Mayen',
        'Slovakia' => 'Slovakia',
        'Sierra Leone' => 'Sierra Leone',
        'San Marino' => 'San Marino',
        'Senegal' => 'Senegal',
        'Somalia' => 'Somalia',
        'Suriname' => 'Suriname',
        'South Sudan' => 'South Sudan',
        'Sao Tome and Principe' => 'Sao Tome and Principe',
        'El Salvador' => 'El Salvador',
        'Sint Maarten' => 'Sint Maarten',
        'Syria' => 'Syria',
        'Swaziland' => 'Swaziland',
        'Turks and Caicos Islands' => 'Turks and Caicos Islands',
        'Chad' => 'Chad',
        'French Southern Territories' => 'French Southern Territories',
        'Togo' => 'Togo',
        'Thailand' => 'Thailand',
        'Tajikistan' => 'Tajikistan',
        'Tokelau' => 'Tokelau',
        'Timor-Leste' => 'Timor-Leste',
        'Turkmenistan' => 'Turkmenistan',
        'Tunisia' => 'Tunisia',
        'Tonga' => 'Tonga',
        'Turkey' => 'Turkey',
        'Trinidad and Tobago' => 'Trinidad and Tobago',
        'Tuvalu' => 'Tuvalu',
        'Taiwan' => 'Taiwan',
        'Tanzania' => 'Tanzania',
        'Ukraine' => 'Ukraine',
        'Uganda' => 'Uganda',
        'United States Minor Outlying Islands' => 'United States Minor Outlying Islands',
        'United States' => 'United States',
        'Uruguay' => 'Uruguay',
        'Uzbekistan' => 'Uzbekistan',
        'Vatican' => 'Vatican',
        'Saint Vincent and the Grenadines' => 'Saint Vincent and the Grenadines',
        'Venezuela' => 'Venezuela',
        'British Virgin Islands' => 'British Virgin Islands',
        'U.S. Virgin Islands' => 'U.S. Virgin Islands',
        'Vietnam' => 'Vietnam',
        'Vanuatu' => 'Vanuatu',
        'Wallis and Futuna' => 'Wallis and Futuna',
        'Samoa' => 'Samoa',
        'Yemen' => 'Yemen',
        'Mayotte' => 'Mayotte',
        'South Africa' => 'South Africa',
        'Zambia' => 'Zambia',
        'Zimbabwe' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_organisation_email'
  $field_bases['field_organisation_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_email',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_organisation_fax'
  $field_bases['field_organisation_fax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_fax',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_note'
  $field_bases['field_organisation_note'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_note',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_organisation_phone'
  $field_bases['field_organisation_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_phone',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_postcode'
  $field_bases['field_organisation_postcode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_postcode',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 12,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_preferences'
  $field_bases['field_organisation_preferences'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_preferences',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Phone' => 'Phone',
        'Fax' => 'Fax',
        'Phone/Email' => 'Phone/Email',
        'Email' => 'Email',
        'Mobile/Email' => 'Mobile/Email',
        'Phone  Mobile' => 'Phone  Mobile',
        'Phone/Mail' => 'Phone/Mail',
        'Phone/Fax' => 'Phone/Fax',
        'Mail' => 'Mail',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_organisation_state'
  $field_bases['field_organisation_state'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_state',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 3,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_status'
  $field_bases['field_organisation_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_status',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_street'
  $field_bases['field_organisation_street'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_street',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_town'
  $field_bases['field_organisation_town'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_town',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organisation_website'
  $field_bases['field_organisation_website'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organisation_website',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_original_organisation_id'
  $field_bases['field_original_organisation_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_original_organisation_id',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_primary_contact'
  $field_bases['field_primary_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_primary_contact',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Yes',
        0 => 'No',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_region'
  $field_bases['field_region'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_region',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_retail_markets'
  $field_bases['field_retail_markets'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_retail_markets',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sms_notify'
  $field_bases['field_sms_notify'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sms_notify',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_state_electorate'
  $field_bases['field_state_electorate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state_electorate',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_viss'
  $field_bases['field_viss'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_viss',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_wa_grower'
  $field_bases['field_wa_grower'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wa_grower',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_water_source'
  $field_bases['field_water_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_water_source',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
