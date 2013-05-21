<?php
/**
 * @file
 * hr_faceted_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_faceted_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'context_ui',
  );

  return $permissions;
}
