<?php
/**
 * @file
 * dd_custom_component.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function dd_custom_component_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'css';
  $file_type->label = 'CSS';
  $file_type->description = '';
  $file_type->mimetypes = array(
    0 => 'text/plain',
    1 => 'text/css',
  );
  $export['css'] = $file_type;

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'javascript';
  $file_type->label = 'Javascript';
  $file_type->description = '';
  $file_type->mimetypes = array(
    0 => 'application/*javascript',
  );
  $export['javascript'] = $file_type;

  return $export;
}
