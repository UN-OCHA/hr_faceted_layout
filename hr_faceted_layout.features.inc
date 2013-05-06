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
/*function hr_faceted_layout_views_default_views_alter(&$data) {
  if (isset($data['assessment_registry'])) {
    $data['assessment_registry']->display['default']->display_options['fields']['field_clusters']['label'] = 'Sectors';
    $data['assessment_registry']->display['default']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sectors';
  }
}*/
