<?php
/**
 * @file
 * dd_custom_component.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dd_custom_component_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allow_insecure_uploads';
  $strongarm->value = '1';
  $export['allow_insecure_uploads'] = $strongarm;

  return $export;
}
