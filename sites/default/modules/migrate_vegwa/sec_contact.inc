<?php

class SecContactMigration extends Migration {

 public function __construct() {
  parent::__construct();

  $this->description = t('Migrate data from the contact data into Contacts');

  $csv_file_path = variable_get('file_public_path', conf_path() . '/files/');
  // dpm(DRUPAL_ROOT .'/'. $csv_file_path);
  $this->source = new MigrateSourceCSV(DRUPAL_ROOT .'/'. $csv_file_path . '/contact_data.csv', $this->csvcolumns(), array('header_rows' => 1));
  $this->destination = new MigrateDestinationNode('contact');

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
  $this->addFieldMapping('title', 'pri_firstname');
  $this->addFieldMapping('status')
  ->description('The status of the node. I believe this should be unplublished')
  ->defaultValue(0);
  $this->addFieldMapping('uid')
  ->description('The user id of the owner of the node');
  $this->addFieldMapping('created')
  ->description('Date Time When the node was created');
  $this->addFieldMapping('changed')
  ->description('Date time when the node was changed');


    // $this->addFieldMapping('', '')
    //     ->description('');

  $this->addFieldMapping('field_primary_contact')->defaultValue(0);
  $this->addFieldMapping('field_contact_title', 'sec_title');
  $this->addFieldMapping('field_contact_firstname', 'sec_firstname');
  $this->addFieldMapping('field_contact_lastname', 'sec_lastname');
  $this->addFieldMapping('field_contact_streetname', 'sec_streetname');
  $this->addFieldMapping('field_contact_town', 'sec_town');
  $this->addFieldMapping('field_contact_postcode', 'sec_postcode');
  $this->addFieldMapping('field_contact_email', 'sec_email');
  $this->addFieldMapping('field_contact_phone', 'sec_phone');
  $this->addFieldMapping('field_contact_mobile', 'sec_mobile');
  $this->addFieldMapping('field_contact_skype', 'sec_skype');
  $this->addFieldMapping('field_original_organisation_id', 'contact_id')
       ->sourceMigration(array('Organisations'));

  /*
  * entity refernece mappings
  */
  $this->addFieldMapping('field_contact_organisation', 'contact_id')
  ->description('The name of the main contact for this organisation')
  ->sourceMigration('Organisations');


    /*
    * Fields not to migrate
    */
    $this->addUnmigratedSources(array(), t('Do Not Migrate'));
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

}
