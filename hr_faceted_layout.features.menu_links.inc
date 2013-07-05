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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -5,
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
  // Exported menu link: main-menu:search
  $menu_links['main-menu:search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 40,
  );
  // Exported menu link: main-menu:search/type/document
  $menu_links['main-menu:search/type/document'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/type/document',
    'router_path' => 'search',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments Registry');
  t('Calendar');
  t('Coordination Hubs');
  t('Documents');
  t('Home');
  t('Humanitarian Profile');
  t('Media');
  t('Search');


  return $menu_links;
}
