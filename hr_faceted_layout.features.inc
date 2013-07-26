<?php
/**
 * @file
 * hr_faceted_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_faceted_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_faceted_layout_views_default_views_alter(&$data) {
  if (isset($data['maps_view'])) {
    $data['maps_view']->display['visuals_home']->display_options['defaults']['link_display'] = FALSE; /* WAS: '' */
    $data['maps_view']->display['visuals_home']->display_options['link_display'] = 'custom_url'; /* WAS: '' */
    $data['maps_view']->display['visuals_home']->display_options['link_url'] = 'search/type/map'; /* WAS: '' */
  }
}
