<?php

/**
 * Implementation of hook_content_default_fields().
 */
function all_content_types_content_default_fields() {
  $fields = array();

  // Exported field: field_pp_node_reference
  $fields['security_attribute-field_pp_node_reference'] = array(
    'field_name' => 'field_pp_node_reference',
    'type_name' => 'security_attribute',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'panel' => 'panel',
      'primary_page' => 'primary_page',
      'content_chunk' => 0,
      'document_upload' => 0,
      'forum' => 0,
      'interface_team' => 0,
      'page' => 0,
      'public_content' => 0,
      'quiz' => 0,
      'sap' => 0,
      'security_attribute' => 0,
      'story' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => NULL,
      'fallback' => NULL,
      'edit_fallback' => NULL,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_pp_node_reference][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'contains',
      'size' => '60',
      'label' => 'Primary Page Ref',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Primary Page Ref');

  return $fields;
}
