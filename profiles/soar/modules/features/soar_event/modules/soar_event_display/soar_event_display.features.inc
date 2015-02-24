<?php
/**
 * @file
 * soar_event_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soar_event_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soar_event_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}