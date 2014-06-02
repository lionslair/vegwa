<?php

class OrganisationsMigration extends Migration {

 public function __construct($arguments) {
  parent::__construct();
  ini_set('auto_detect_line_endings', TRUE);

  $this->description = t('Migrate data from the contact data into Organisations');



  $csv_file_path = variable_get('file_public_path', conf_path() . '/files/');
  // dpm(DRUPAL_ROOT .'/'. $csv_file_path);
  $this->source = new MigrateSourceCSV(DRUPAL_ROOT .'/'. $csv_file_path . '/contact_data.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());
  $this->destination = new MigrateDestinationNode('organisation');

  $source_key = array(
    'contact_id' => array(
                          'type' => 'varchar',
                          'length' => 6,
                          'not null' => TRUE,
                          'description' => t('The ID of the original record'),
                        ),
  );

  $this->map = new MigrateSQLMap($this->machineName, $source_key, MigrateDestinationNode::getKeySchema(), 'default');

    // core fields
  $this->addFieldMapping('title', 'organisation');
  $this->addFieldMapping('status')->description('The status of the node. I believe this should be unplublished')->defaultValue(0);
  $this->addFieldMapping('uid')->description('The user id of the owner of the node')->defaultValue(1);
  // $this->addFieldMapping('created')->description('Date Time When the node was created');
  // $this->addFieldMapping('changed')->description('Date time when the node was changed');


    // $this->addFieldMapping('', '')
    //     ->description('');

  $this->addFieldMapping('field_organisation', 'organisation');
  $this->addFieldMapping('field_organisation_phone', 'org_phone');
  $this->addFieldMapping('field_organisation_email', 'org_email');
  $this->addFieldMapping('field_organisation_fax', 'org_fax');
  $this->addFieldMapping('field_organisation_website', 'org_website');
  $this->addFieldMapping('field_organisation_street', 'org_streetname');
  $this->addFieldMapping('field_organisation_town', 'org_town');
  $this->addFieldMapping('field_organisation_postcode', 'org_postcode');
  $this->addFieldMapping('field_organisation_state', 'org_state');
  $this->addFieldMapping('field_organisation_country', 'org_country');
  $this->addFieldMapping('field_organisation_status', 'org_status');
  $this->addFieldMapping('field_retail_markets', 'retail_markets');
  $this->addFieldMapping('field_annual_turnover', 'annual_turnover');
  $this->addFieldMapping('field_business_type', 'bussiness_type');

  $this->addFieldMapping('field_crop_type', 'crop_types')
       ->separator(',')
       ->description('comma seperated list of the crop types to map to this field');

  $this->addFieldMapping('field_hectares', 'hectares')
       ->separator(',')
       ->description('comma seperated list of the hectares to map to this field')
       ->defaultValue(0.000);

  $this->addFieldMapping('field_water_source', 'watersource');
  $this->addFieldMapping('field_hairrigated', 'hairrigated');
  $this->addFieldMapping('field_region', 'region');
  $this->addFieldMapping('field_internet_connection_type', 'internet_con');
  $this->addFieldMapping('field_viss', 'viss');
  $this->addFieldMapping('field_wa_grower', 'wa_grower');
  $this->addFieldMapping('field_enews', 'enews');
  $this->addFieldMapping('field_organisation_preferences', 'preferences');
  $this->addFieldMapping('field_organisation_note', 'notes');
  $this->addFieldMapping('field_federal_electorate', 'federal_electorate');
  $this->addFieldMapping('field_state_electorate', 'state_electorate');
  $this->addFieldMapping('field_nesb', 'NESB');
  $this->addFieldMapping('field_sms_notify', 'sms_notify');
  $this->addFieldMapping('field_hard_copy', 'hard_copy');
  $this->addFieldMapping('field_original_organisation_id', 'contact_id');

  for ($i=1; $i <= 12; $i++) {
    $this->addFieldMapping(NULL, "crop_type$i")
          ->description('Not needed since we use the multi-value field: crop_type.');
    $this->addFieldMapping(NULL, "hectares$i")
          ->description('Not needed since we use the multi-value field: hectares.');
  }


  /*
  * entity refernece mappings
  */
  $this->addFieldMapping('field_organisation_contact', 'contact_id')
  ->description('The name of the main contact for this organisation')
  ->sourceMigration(array('PriContact', 'SecContact'));

    /*
    * Fields not to migrate
    */
    $this->addUnmigratedSources(array(), t('Do Not Migrate'));
  }

  public function prepareRow($row) {
    // dd($row, 'row data:');
    // $row->crop_types = array();
    // $row->hectares = array();
    $crop_types = array();
    $hectares = array();

  for ($i=1; $i <= 12; $i++) {
    $key = "crop_type$i";
    if (!empty($row->$key)) {
      // $row->crop_types[] = $row->$key;
      $crop_types[] = $row->$key;
    }

    $key = "hectares$i";
    if ($row->$key != '0.000') {
      // $row->hectares[] = $row->$key;
      $hectares[] = $row->$key;
    }
  }

  if (empty($hectares)) { $hectares = array(0); }
  $row->crop_types = implode(',', $crop_types);
  $row->hectares = implode(',', $hectares);
}

  protected function csvcolumns() {
    $columns = array(
      0  => array('contact_id', 'Original contact id'),
      1  => array('organisation','Name of the organisation'),
      2  => array('org_phone','Phone number'),
      3  => array('org_email','email'),
      4  => array('org_fax','fax'),
      5  => array('org_website','website url'),
      6  => array('org_streetname','Name of the street of the organistation'),
      7  => array('org_town','town'),
      8  => array('org_postcode','organisation postcode'),
      9  => array('org_state','State of the organisation'),
      10  => array('org_country','Country of the organisation'),
      11 => array('org_status','status of the organisation'),
      12 => array('retail_markets','Retail markets of the organisation'),
      13 => array('annual_turnover','Annual Turnover'),
      14 => array('bussiness_type','Business Type'),
      15 => array('crop_type1','Crop Type'),
      16 => array('crop_type2','Crop Type'),
      17 => array('crop_type3','Crop Type'),
      18 => array('crop_type4','Crop Type'),
      19 => array('crop_type5','Crop Type'),
      20 => array('crop_type6','Crop Type'),
      21 => array('crop_type7','Crop Type'),
      22 => array('crop_type8','Crop Type'),
      23 => array('crop_type9','Crop Type'),
      24 => array('crop_type10','Crop Type'),
      25 => array('crop_type11','Crop Type'),
      26 => array('crop_type12','Crop Type'),
      27 => array('hectares1','Hectares'),
      28 => array('hectares2','Hectares'),
      29 => array('hectares3','Hectares'),
      30 => array('hectares4','Hectares'),
      31 => array('hectares5','Hectares'),
      32 => array('hectares6','Hectares'),
      33 => array('hectares7','Hectares'),
      34 => array('hectares8','Hectares'),
      35 => array('hectares9','Hectares'),
      36 => array('hectares10','Hectares'),
      37 => array('hectares11','Hectares'),
      38 => array('hectares12','Hectares'),
      39 => array('primary_contact','Primary Contact'),
      40 => array('pri_title','Title of the Primary Person'),
      41 => array('pri_firstname','Primary Firstname'),
      42 => array('pri_lastname','Primary Lastname'),
      43 => array('pri_streetname','Primary Streetname'),
      44 => array('pri_town','Primary Town'),
      45 => array('pri_postcode','Primary Postcode'),
      46 => array('pri_email','Primary Email'),
      47 => array('pri_phone','Primary Phone'),
      48 => array('pri_mobile','Primary Mobile'),
      49 => array('pri_skype','Primary Skype'),
      50 => array('sec_title','Secondary Title of the person'),
      51 => array('sec_firstname','Secondary Firstname'),
      52 => array('sec_lastname','Secondary Lastname'),
      53 => array('sec_streetname','Secondary Street Name'),
      54 => array('sec_town','Secondary Town'),
      55 => array('sec_postcode','Secondary Postcode'),
      56 => array('sec_email','Secondary Email'),
      57 => array('sec_phone','Secondary Phone'),
      58 => array('sec_mobile','Secondary Mobile'),
      59 => array('sec_skype','Secondary Skype'),
      60 => array('watersource','Water source'),
      61 => array('hairrigated','Hairrigated'),
      62 => array('region','Region the organisation is located'),
      63 => array('internet_con','Type of internet connection the organisation has'),
      64 => array('viss','Viss don\t know what this is'),
      65 => array('wa_grower','Are they a WA grower'),
      66 => array('enews','Do they want the enews'),
      67 => array('preferences','Preferences'),
      68 => array('notes','Notes about the organisation'),
      69 => array('federal_electorate','Organisation federal electorate'),
      70 => array('state_electorate','Organisations state electorate'),
      71 => array('NESB','NESB'),
      72 => array('sms_notify','Send SMS Yes No'),
      73 => array('hard_copy','Hard Copy'),
    );
    return $columns;
  }

  function fields() {
    return array(
      'crop_types' => 'An array of crop_types, populated during prepareRow().',
      'hectares' => 'An array of hectares, populated during prepareRow().',
    );
  }
}
