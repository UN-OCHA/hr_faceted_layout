<?php
/**
 * @file
 * hr_faceted_layout.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_faceted_layout_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.calendar.display|feed_1|display_options|path"] = 'calendar/ical/calendar.ics';
  $overrides["views_view.calendar.display|page_1|display_options|path"] = 'calendar/month';
  $overrides["views_view.calendar.display|page_2|display_options|path"] = 'calendar/week';
  $overrides["views_view.calendar.display|page_3|display_options|path"] = 'calendar/day';
  $overrides["views_view.calendar.display|page|display_options|path"] = 'calendar/year';
  $overrides["views_view.maps_view.display|visuals_home|display_options|defaults|link_display"] = FALSE;
  $overrides["views_view.maps_view.display|visuals_home|display_options|link_display"] = 'custom_url';
  $overrides["views_view.maps_view.display|visuals_home|display_options|link_url"] = 'search/type/map';

 return $overrides;
}
