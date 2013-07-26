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
  $overrides["views_view.maps_view.display|visuals_home|display_options|defaults|link_display"] = FALSE;
  $overrides["views_view.maps_view.display|visuals_home|display_options|link_display"] = 'custom_url';
  $overrides["views_view.maps_view.display|visuals_home|display_options|link_url"] = 'search/type/map';

 return $overrides;
}
