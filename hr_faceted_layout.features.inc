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
  if (isset($data['assessment_registry'])) {
    $data['assessment_registry']->display['page']->display_options['path'] = 'assessment-registry'; /* WAS: 'resources/assessment-registry' */
    $data['assessment_registry']->display['views_data_export_1']->display_options['path'] = 'assesment-registry.csv'; /* WAS: 'resources/assesment-registry.csv' */
    $data['assessment_registry']->display['xls']->display_options['path'] = 'assessment-registry.xls'; /* WAS: 'resources/assessment-registry.xls' */
  }
  if (isset($data['calendar'])) {
    $data['calendar']->display['feed_1']->display_options['path'] = 'calendar/ical/calendar.ics'; /* WAS: 'coordination/calendar/ical/calendar.ics' */
    $data['calendar']->display['page_1']->display_options['path'] = 'calendar/month'; /* WAS: 'coordination/calendar/month' */
    $data['calendar']->display['page_2']->display_options['path'] = 'calendar/week'; /* WAS: 'coordination/calendar/week' */
    $data['calendar']->display['page_3']->display_options['path'] = 'calendar/day'; /* WAS: 'coordination/calendar/day' */
    $data['calendar']->display['page']->display_options['path'] = 'calendar/year'; /* WAS: 'coordination/calendar/year' */
  }
  if (isset($data['contacts'])) {
    $data['contacts']->display['page_1']->display_options['path'] = 'operational-presence'; /* WAS: 'coordination/operational-presence' */
    $data['contacts']->display['views_data_export_1']->display_options['path'] = 'operational-presence.xls'; /* WAS: 'coordination/operational-presence.xls' */
    $data['contacts']->display['views_data_export_2']->display_options['path'] = 'operational-presence.xml'; /* WAS: 'coordination/operational-presence.xml' */
    unset($data['contacts']->display['block_2']->display_options['filters']['uuid']['vocabulary']);
  }
  if (isset($data['coordination_hubs'])) {
    $data['coordination_hubs']->display['page']->display_options['path'] = 'coordination-hubs'; /* WAS: 'coordination/coordination-hubs' */
    $data['coordination_hubs']->display['views_data_export_1']->display_options['path'] = 'coordination-hubs.csv'; /* WAS: 'coordination/coordination-hubs.csv' */
    $data['coordination_hubs']->display['xls']->display_options['path'] = 'coordination-hubs.xls'; /* WAS: 'coordination/coordination-hubs.xls' */
    $data['coordination_hubs']->display['xml']->display_options['path'] = 'coordination-hubs.xml'; /* WAS: 'coordination/coordination-hubs.xml' */
  }
  if (isset($data['documents'])) {
    $data['documents']->display['documents_home_feat']->display_options['link_display'] = 'custom_url'; /* WAS: 'featured' */
    $data['documents']->display['documents_home_feat']->display_options['link_url'] = 'search/type/document'; /* WAS: '' */
    $data['documents']->display['documents_home_key']->display_options['link_display'] = 'custom_url'; /* WAS: 'key' */
    $data['documents']->display['documents_home_key']->display_options['link_url'] = 'search/type/document'; /* WAS: '' */
    $data['documents']->display['block_per_term']->display_options['defaults']['link_display'] = FALSE; /* WAS: '' */
    $data['documents']->display['block_per_term']->display_options['link_display'] = 'custom_url'; /* WAS: 'documents_per_term' */
    $data['documents']->display['block_per_term']->display_options['link_url'] = 'search/type/document/!2/!1'; /* WAS: '' */
  }
  if (isset($data['humanitarian_profile'])) {
    $data['humanitarian_profile']->display['page']->display_options['path'] = 'humanitarian-profile'; /* WAS: 'visuals-data/humanitarian-profile' */
    $data['humanitarian_profile']->display['xls']->display_options['path'] = 'humanitarian-profile.xls'; /* WAS: 'visuals-data/humanitarian-profile.xls' */
    $data['humanitarian_profile']->display['xml']->display_options['path'] = 'humanitarian-profile.xml'; /* WAS: 'visuals-data/humanitarian-profile.xml' */
  }
  if (isset($data['maps_view'])) {
    $data['maps_view']->display['visuals_home']->display_options['defaults']['link_display'] = FALSE; /* WAS: '' */
    $data['maps_view']->display['visuals_home']->display_options['link_display'] = 'custom_url'; /* WAS: '' */
    $data['maps_view']->display['visuals_home']->display_options['link_url'] = 'search/type/map'; /* WAS: '' */
  }
}
