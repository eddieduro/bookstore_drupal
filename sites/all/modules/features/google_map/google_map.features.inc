<?php
/**
 * @file
 * google_map.features.inc
 */

/**
 * Implements hook_views_api().
 */
function google_map_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
