<?php
/**
 * @file
 * dd_custom_component.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function dd_custom_component_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'dd_custom_component';
  $fieldable_panels_pane_type->title = 'Custom Component';
  $fieldable_panels_pane_type->description = '';
  $export['dd_custom_component'] = $fieldable_panels_pane_type;

  return $export;
}
