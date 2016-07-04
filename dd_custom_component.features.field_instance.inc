<?php
/**
 * @file
 * dd_custom_component.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dd_custom_component_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-dd_custom_component-field_css_files'
  $field_instances['fieldable_panels_pane-dd_custom_component-field_css_files'] = array(
    'bundle' => 'dd_custom_component',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_css_files',
    'label' => 'CSS Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'css',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'feed' => 0,
          'http' => 'http',
          'https' => 'https',
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'css' => 'css',
          'document' => 0,
          'image' => 0,
          'javascript' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'remote_file' => 'remote_file',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-dd_custom_component-field_custom_css'
  $field_instances['fieldable_panels_pane-dd_custom_component-field_custom_css'] = array(
    'bundle' => 'dd_custom_component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add custom CSS rules.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_custom_css',
    'label' => 'Custom CSS',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-dd_custom_component-field_custom_javascript'
  $field_instances['fieldable_panels_pane-dd_custom_component-field_custom_javascript'] = array(
    'bundle' => 'dd_custom_component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add raw Javascript. Do not include "script" tags.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_custom_javascript',
    'label' => 'Custom Javascript',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-dd_custom_component-field_html'
  $field_instances['fieldable_panels_pane-dd_custom_component-field_html'] = array(
    'bundle' => 'dd_custom_component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_html',
    'label' => 'HTML',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-dd_custom_component-field_javascript_files'
  $field_instances['fieldable_panels_pane-dd_custom_component-field_javascript_files'] = array(
    'bundle' => 'dd_custom_component',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'exclude_cv' => 0,
    'field_name' => 'field_javascript_files',
    'label' => 'Javascript Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'exclude_cv' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'js',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'feed' => 0,
          'http' => 'http',
          'https' => 'https',
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'css' => 0,
          'document' => 0,
          'image' => 0,
          'javascript' => 'javascript',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'remote_file' => 'remote_file',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add custom CSS rules.');
  t('Add raw Javascript. Do not include "script" tags.');
  t('CSS Files');
  t('Custom CSS');
  t('Custom Javascript');
  t('HTML');
  t('Javascript Files');

  return $field_instances;
}
