<?php
/**
 * @file
 * hr_faceted_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hr_faceted_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:assessment-registry
  $menu_links['main-menu:assessment-registry'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'assessment-registry',
    'router_path' => 'assessment-registry',
    'link_title' => 'Assessments Registry',
    'options' => array(
      'attributes' => array(
        'title' => 'Assessments Registry',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 15,
  );
  // Exported menu link: main-menu:calendar
  $menu_links['main-menu:calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:coordination-hubs
  $menu_links['main-menu:coordination-hubs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'coordination-hubs',
    'router_path' => 'coordination-hubs',
    'link_title' => 'Coordination Hubs',
    'options' => array(
      'attributes' => array(
        'title' => 'Coordination Hubs',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Exported menu link: main-menu:humanitarian-profile
  $menu_links['main-menu:humanitarian-profile'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'humanitarian-profile',
    'router_path' => 'humanitarian-profile',
    'link_title' => 'Humanitarian Profile',
    'options' => array(
      'attributes' => array(
        'title' => 'Humanitarian Profile',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
  );
  // Exported menu link: main-menu:media-center/galleries
  $menu_links['main-menu:media-center/galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-center/galleries',
    'router_path' => 'media-center/galleries',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media Center',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 30,
  );
  // Exported menu link: main-menu:operational-presence
  $menu_links['main-menu:operational-presence'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'operational-presence',
    'router_path' => 'operational-presence',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => 'Operational Presence',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');
  t('Calendar');
  t('Contacts');
  t('Coordination Hubs');
  t('Humanitarian Profile');
  t('Media');


  return $menu_links;
}
