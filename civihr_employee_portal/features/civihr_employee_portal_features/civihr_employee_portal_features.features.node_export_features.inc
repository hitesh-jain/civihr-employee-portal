<?php
/**
 * @file
 * civihr_employee_portal_features.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function civihr_employee_portal_features_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'My details - edit\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'745c2648-8068-4499-bd00-e8ae9f7bde3c\',
      \'nid\' => \'2\',
      \'type\' => \'webform\',
      \'language\' => \'en\',
      \'created\' => \'1417429904\',
      \'changed\' => \'1417436832\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'066f66e7-ffca-4684-8cd3-3214eff9d438\',
      \'revision_timestamp\' => \'1417436832\',
      \'revision_uid\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'webform\' => array(
        \'nid\' => \'2\',
        \'next_serial\' => \'89\',
        \'confirmation\' => \'My details saved\',
        \'confirmation_format\' => \'filtered_html\',
        \'redirect_url\' => \'<none>\',
        \'status\' => \'1\',
        \'block\' => \'1\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => \'filtered_html\',
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          1 => array(
            \'nid\' => 2,
            \'cid\' => \'1\',
            \'pid\' => \'0\',
            \'form_key\' => \'civicrm_1_contact_1_fieldset_fieldset\',
            \'name\' => \'Contact details\',
            \'type\' => \'fieldset\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'css_classes\' => \'\',
              \'collapsible\' => 0,
              \'collapsed\' => 0,
              \'description\' => \'\',
            ),
            \'required\' => \'0\',
            \'weight\' => \'1\',
            \'page_num\' => 1,
          ),
          2 => array(
            \'nid\' => 2,
            \'cid\' => \'2\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_existing\',
            \'name\' => \'Existing Contact\',
            \'type\' => \'civicrm_contact\',
            \'value\' => \'\',
            \'extra\' => array(
              \'search_prompt\' => \'- Choose existing -\',
              \'allow_create\' => 1,
              \'none_prompt\' => \'+ Create new +\',
              \'widget\' => \'hidden\',
              \'default\' => \'user\',
              \'private\' => 0,
              \'results_display\' => array(
                \'display_name\',
              ),
              \'show_hidden_contact\' => 0,
              \'unique\' => 0,
              \'title_display\' => \'before\',
              \'randomize\' => 0,
              \'description\' => \'\',
              \'hide_fields\' => array(),
              \'attributes\' => array(),
              \'default_contact_id\' => \'\',
              \'default_relationship\' => \'\',
              \'dupes_allowed\' => FALSE,
              \'filters\' => array(
                \'contact_sub_type\' => 0,
                \'group\' => array(),
                \'tag\' => array(),
                \'check_permissions\' => 1,
              ),
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 2,
            \'cid\' => \'3\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_first_name\',
            \'name\' => \'First Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'4\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 2,
            \'cid\' => \'4\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_last_name\',
            \'name\' => \'Last Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'6\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 2,
            \'cid\' => \'5\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_birth_date\',
            \'name\' => \'Birth Date\',
            \'type\' => \'date\',
            \'value\' => \'\',
            \'extra\' => array(
              \'start_date\' => \'-100 years\',
              \'end_date\' => \'now\',
              \'private\' => 0,
              \'timezone\' => \'user\',
              \'year_textfield\' => 0,
              \'datepicker\' => 1,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'11\',
            \'page_num\' => 1,
          ),
          15 => array(
            \'nid\' => 2,
            \'cid\' => \'15\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_contact_image_URL\',
            \'name\' => \'Upload Image\',
            \'type\' => \'file\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 40,
              \'private\' => 0,
              \'filtering\' => array(
                \'types\' => array(
                  \'gif\',
                  \'jpg\',
                  \'png\',
                ),
                \'addextensions\' => \'\',
                \'size\' => \'2 MB\',
              ),
              \'scheme\' => \'public\',
              \'directory\' => \'\',
              \'progress_indicator\' => \'throbber\',
              \'title_display\' => 0,
              \'description\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'15\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 2,
            \'cid\' => \'6\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_street_address\',
            \'name\' => \'Street Address\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 60,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'22\',
            \'page_num\' => 1,
          ),
          7 => array(
            \'nid\' => 2,
            \'cid\' => \'7\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_supplemental_address_1\',
            \'name\' => \'Street Address Line 2\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 60,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'23\',
            \'page_num\' => 1,
          ),
          8 => array(
            \'nid\' => 2,
            \'cid\' => \'8\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_supplemental_address_2\',
            \'name\' => \'Street Address Line 3\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 60,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'24\',
            \'page_num\' => 1,
          ),
          9 => array(
            \'nid\' => 2,
            \'cid\' => \'9\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_city\',
            \'name\' => \'City\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'25\',
            \'page_num\' => 1,
          ),
          10 => array(
            \'nid\' => 2,
            \'cid\' => \'10\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_postal_code\',
            \'name\' => \'Postal Code\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 7,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'26\',
            \'page_num\' => 1,
          ),
          11 => array(
            \'nid\' => 2,
            \'cid\' => \'11\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_country_id\',
            \'name\' => \'Country\',
            \'type\' => \'select\',
            \'value\' => \'1228\',
            \'extra\' => array(
              \'civicrm_live_options\' => 1,
              \'items\' => "1228|United States\\n1226|United Kingdom",
              \'aslist\' => 1,
              \'private\' => 0,
              \'multiple\' => NULL,
              \'optrand\' => 0,
              \'other_option\' => NULL,
              \'other_text\' => \'Other...\',
              \'title_display\' => 0,
              \'description\' => \'\',
              \'custom_keys\' => FALSE,
              \'options_source\' => \'\',
              \'analysis\' => TRUE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'28\',
            \'page_num\' => 1,
          ),
          12 => array(
            \'nid\' => 2,
            \'cid\' => \'12\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_address_state_province_id\',
            \'name\' => \'State/Province\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'maxlength\' => 5,
              \'width\' => 4,
              \'private\' => 0,
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'29\',
            \'page_num\' => 1,
          ),
          13 => array(
            \'nid\' => 2,
            \'cid\' => \'13\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_phone_phone\',
            \'name\' => \'Phone Number\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'32\',
            \'page_num\' => 1,
          ),
          14 => array(
            \'nid\' => 2,
            \'cid\' => \'14\',
            \'pid\' => \'1\',
            \'form_key\' => \'civicrm_1_contact_1_email_email\',
            \'name\' => \'Email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'unique\' => 0,
              \'disabled\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'36\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1417429904\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'admin\',
      \'picture\' => \'3\',
      \'data\' => \'b:0;\',
      \'webform_civicrm\' => array(
        \'nid\' => \'2\',
        \'data\' => array(
          \'contact\' => array(
            1 => array(
              \'contact\' => array(
                1 => array(
                  \'contact_type\' => \'individual\',
                  \'contact_sub_type\' => array(),
                  \'webform_label\' => \'Contact 1\',
                ),
              ),
              \'number_of_cg4\' => \'0\',
              \'number_of_cg5\' => \'0\',
              \'number_of_cg6\' => \'0\',
              \'number_of_cg10\' => \'0\',
              \'number_of_cg11\' => \'0\',
              \'number_of_cg12\' => \'0\',
              \'number_of_cg15\' => \'0\',
              \'number_of_other\' => \'0\',
              \'number_of_address\' => \'1\',
              \'number_of_phone\' => \'1\',
              \'number_of_email\' => \'1\',
              \'number_of_website\' => \'0\',
              \'number_of_im\' => \'0\',
              \'address\' => array(
                1 => array(
                  \'location_type_id\' => \'1\',
                ),
              ),
              \'phone\' => array(
                1 => array(
                  \'phone_type_id\' => \'1\',
                  \'location_type_id\' => \'1\',
                ),
              ),
              \'email\' => array(
                1 => array(
                  \'location_type_id\' => \'1\',
                ),
              ),
            ),
          ),
        ),
        \'prefix_known\' => \'\',
        \'prefix_unknown\' => \'\',
        \'message\' => \'\',
        \'confirm_subscription\' => \'1\',
        \'block_unknown_users\' => \'0\',
        \'create_fieldsets\' => \'1\',
        \'new_contact_source\' => \'My details\',
      ),
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Emergency contact - edit\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'41855ff6-82e9-447e-bdcb-f7fcb6eaacd5\',
      \'nid\' => \'3\',
      \'type\' => \'webform\',
      \'language\' => \'en\',
      \'created\' => \'1417430546\',
      \'changed\' => \'1417434815\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b1d0ab7c-d30e-486c-bbf3-28a1cf56617b\',
      \'revision_timestamp\' => \'1417434815\',
      \'revision_uid\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'webform\' => array(
        \'nid\' => \'3\',
        \'next_serial\' => \'38\',
        \'confirmation\' => \'Emergency contact saved\',
        \'confirmation_format\' => \'filtered_html\',
        \'redirect_url\' => \'<none>\',
        \'status\' => \'1\',
        \'block\' => \'1\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'progressbar_bar\' => \'1\',
        \'progressbar_page_number\' => \'0\',
        \'progressbar_percent\' => \'0\',
        \'progressbar_pagebreak_labels\' => \'1\',
        \'progressbar_include_confirmation\' => \'1\',
        \'progressbar_label_first\' => \'Start\',
        \'progressbar_label_confirmation\' => \'Complete\',
        \'preview\' => \'0\',
        \'preview_next_button_label\' => \'\',
        \'preview_prev_button_label\' => \'\',
        \'preview_title\' => \'\',
        \'preview_message\' => \'\',
        \'preview_message_format\' => \'filtered_html\',
        \'preview_excluded_components\' => array(),
        \'record_exists\' => TRUE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(
          2 => array(
            \'nid\' => 3,
            \'cid\' => \'2\',
            \'pid\' => \'0\',
            \'form_key\' => \'civicrm_1_contact_1_contact_existing\',
            \'name\' => \'Existing Contact\',
            \'type\' => \'civicrm_contact\',
            \'value\' => \'\',
            \'extra\' => array(
              \'search_prompt\' => \'- Choose existing -\',
              \'allow_create\' => 0,
              \'none_prompt\' => \'- None Found -\',
              \'widget\' => \'hidden\',
              \'default\' => \'user\',
              \'private\' => 0,
              \'results_display\' => array(
                \'display_name\',
              ),
              \'show_hidden_contact\' => 0,
              \'unique\' => 0,
              \'title_display\' => \'before\',
              \'randomize\' => 0,
              \'description\' => \'\',
              \'hide_fields\' => array(),
              \'attributes\' => array(),
              \'default_contact_id\' => \'\',
              \'default_relationship\' => \'\',
              \'dupes_allowed\' => FALSE,
              \'filters\' => array(
                \'contact_sub_type\' => 0,
                \'group\' => array(),
                \'tag\' => array(),
                \'check_permissions\' => 1,
              ),
            ),
            \'required\' => \'0\',
            \'weight\' => \'2\',
            \'page_num\' => 1,
          ),
          3 => array(
            \'nid\' => 3,
            \'cid\' => \'3\',
            \'pid\' => \'0\',
            \'form_key\' => \'civicrm_2_contact_1_fieldset_fieldset\',
            \'name\' => \'Emergency contact\',
            \'type\' => \'fieldset\',
            \'value\' => \'\',
            \'extra\' => array(
              \'title_display\' => \'none\',
              \'private\' => 0,
              \'css_classes\' => \'\',
              \'collapsible\' => 0,
              \'collapsed\' => 0,
              \'description\' => \'\',
            ),
            \'required\' => \'0\',
            \'weight\' => \'3\',
            \'page_num\' => 1,
          ),
          9 => array(
            \'nid\' => 3,
            \'cid\' => \'9\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_1_contact_existing\',
            \'name\' => \'Existing Contact\',
            \'type\' => \'civicrm_contact\',
            \'value\' => \'\',
            \'extra\' => array(
              \'allow_create\' => 1,
              \'private\' => 0,
              \'wrapper_classes\' => \'\',
              \'css_classes\' => \'\',
              \'widget\' => \'hidden\',
              \'search_prompt\' => \'- Choose existing -\',
              \'none_prompt\' => \'+ Create new +\',
              \'results_display\' => array(
                \'display_name\' => \'display_name\',
              ),
              \'show_hidden_contact\' => \'0\',
              \'hide_fields\' => array(
                \'\' => \'\',
              ),
              \'default\' => \'relationship\',
              \'default_relationship\' => array(
                \'11_b\' => \'11_b\',
              ),
              \'dupes_allowed\' => 0,
              \'filters\' => array(
                \'group\' => array(
                  \'\' => \'\',
                ),
                \'tag\' => array(
                  \'\' => \'\',
                ),
                \'check_permissions\' => 0,
              ),
              \'unique\' => 0,
              \'title_display\' => \'before\',
              \'randomize\' => 0,
              \'description\' => \'\',
              \'attributes\' => array(),
              \'default_contact_id\' => \'\',
            ),
            \'required\' => \'0\',
            \'weight\' => \'23\',
            \'page_num\' => 1,
          ),
          4 => array(
            \'nid\' => 3,
            \'cid\' => \'4\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_1_contact_first_name\',
            \'name\' => \'First Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'25\',
            \'page_num\' => 1,
          ),
          5 => array(
            \'nid\' => 3,
            \'cid\' => \'5\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_1_contact_last_name\',
            \'name\' => \'Last Name\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'27\',
            \'page_num\' => 1,
          ),
          6 => array(
            \'nid\' => 3,
            \'cid\' => \'6\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_1_phone_phone\',
            \'name\' => \'Phone Number\',
            \'type\' => \'textfield\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'maxlength\' => \'\',
              \'field_prefix\' => \'\',
              \'field_suffix\' => \'\',
              \'disabled\' => 0,
              \'unique\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'43\',
            \'page_num\' => 1,
          ),
          7 => array(
            \'nid\' => 3,
            \'cid\' => \'7\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_1_email_email\',
            \'name\' => \'Email\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'unique\' => 0,
              \'disabled\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'47\',
            \'page_num\' => 1,
          ),
          8 => array(
            \'nid\' => 3,
            \'cid\' => \'8\',
            \'pid\' => \'3\',
            \'form_key\' => \'civicrm_2_contact_2_email_email\',
            \'name\' => \'Email 2\',
            \'type\' => \'email\',
            \'value\' => \'\',
            \'extra\' => array(
              \'width\' => 20,
              \'private\' => 0,
              \'unique\' => 0,
              \'disabled\' => 0,
              \'title_display\' => 0,
              \'description\' => \'\',
              \'placeholder\' => \'\',
              \'attributes\' => array(),
              \'analysis\' => FALSE,
            ),
            \'required\' => \'0\',
            \'weight\' => \'49\',
            \'page_num\' => 1,
          ),
        ),
        \'conditionals\' => array(),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1417430546\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'locations\' => array(),
      \'location\' => array(),
      \'name\' => \'admin\',
      \'picture\' => \'3\',
      \'data\' => \'b:0;\',
      \'webform_civicrm\' => array(
        \'nid\' => \'3\',
        \'data\' => array(
          \'contact\' => array(
            1 => array(
              \'contact\' => array(
                1 => array(
                  \'contact_type\' => \'individual\',
                  \'contact_sub_type\' => array(),
                  \'webform_label\' => \'Contact 1\',
                ),
              ),
              \'number_of_cg4\' => \'0\',
              \'number_of_cg5\' => \'0\',
              \'number_of_cg6\' => \'0\',
              \'number_of_cg10\' => \'0\',
              \'number_of_cg11\' => \'0\',
              \'number_of_cg12\' => \'0\',
              \'number_of_cg15\' => \'0\',
              \'number_of_cg23\' => \'0\',
              \'number_of_other\' => \'0\',
              \'number_of_address\' => \'0\',
              \'number_of_phone\' => \'0\',
              \'number_of_email\' => \'0\',
              \'number_of_website\' => \'0\',
              \'number_of_im\' => \'0\',
            ),
            2 => array(
              \'contact\' => array(
                1 => array(
                  \'contact_type\' => \'individual\',
                  \'contact_sub_type\' => array(
                    \'Emergency_contact\' => \'Emergency_contact\',
                  ),
                  \'webform_label\' => \'Emergency contact\',
                ),
              ),
              \'number_of_cg4\' => \'0\',
              \'number_of_cg5\' => \'0\',
              \'number_of_cg6\' => \'0\',
              \'number_of_cg10\' => \'0\',
              \'number_of_cg11\' => \'0\',
              \'number_of_cg12\' => \'0\',
              \'number_of_cg15\' => \'0\',
              \'number_of_cg23\' => \'0\',
              \'number_of_other\' => \'0\',
              \'number_of_address\' => \'0\',
              \'number_of_phone\' => \'1\',
              \'number_of_email\' => \'2\',
              \'number_of_website\' => \'0\',
              \'number_of_im\' => \'0\',
              \'number_of_relationship\' => \'1\',
              \'phone\' => array(
                1 => array(
                  \'phone_type_id\' => \'1\',
                  \'location_type_id\' => \'1\',
                ),
              ),
              \'email\' => array(
                1 => array(
                  \'location_type_id\' => \'1\',
                ),
                2 => array(
                  \'location_type_id\' => \'2\',
                ),
              ),
              \'relationship\' => array(
                1 => array(
                  \'relationship_type_id\' => array(
                    \'11_b\' => \'11_b\',
                  ),
                  \'is_active\' => \'1\',
                ),
              ),
            ),
          ),
        ),
        \'prefix_known\' => \'\',
        \'prefix_unknown\' => \'\',
        \'message\' => \'\',
        \'confirm_subscription\' => \'1\',
        \'block_unknown_users\' => \'0\',
        \'create_fieldsets\' => \'1\',
        \'new_contact_source\' => \'Emergency contact\',
      ),
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}