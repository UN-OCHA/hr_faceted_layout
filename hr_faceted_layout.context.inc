<?php
/**
 * @file
 * hr_faceted_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_faceted_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clusters';
  $context->description = 'On cluster pages';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'clusters' => 'clusters',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-maps_view-block_2' => array(
          'module' => 'views',
          'delta' => 'maps_view-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
        'views-clusters-block' => array(
          'module' => 'views',
          'delta' => 'clusters-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'views-documents-funding_featured' => array(
          'module' => 'views',
          'delta' => 'documents-funding_featured',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-documents-cluster_key' => array(
          'module' => 'views',
          'delta' => 'documents-cluster_key',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'tryptic',
    ),
    'hide_local_tasks' => array(
      'hide_local_tasks' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('On cluster pages');
  $export['clusters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Home page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-maps_view-visuals_home' => array(
          'module' => 'views',
          'delta' => 'maps_view-visuals_home',
          'region' => 'content',
          'weight' => '5',
        ),
        'delta_blocks-site-slogan' => array(
          'module' => 'delta_blocks',
          'delta' => 'site-slogan',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'views-clusters-block' => array(
          'module' => 'views',
          'delta' => 'clusters-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-documents-documents_home_key' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_key',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
        'views-documents-documents_home_feat' => array(
          'module' => 'views',
          'delta' => 'documents-documents_home_feat',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'tryptic',
    ),
    'hide_local_tasks' => array(
      'hide_local_tasks' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locations';
  $context->description = 'On location pages';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'locations' => 'locations',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-maps_view-block_2' => array(
          'module' => 'views',
          'delta' => 'maps_view-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'views-locations-block_1' => array(
          'module' => 'views',
          'delta' => 'locations-block_1',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-documents-funding_featured' => array(
          'module' => 'views',
          'delta' => 'documents-funding_featured',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-documents-cluster_key' => array(
          'module' => 'views',
          'delta' => 'documents-cluster_key',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'tryptic',
    ),
    'hide_local_tasks' => array(
      'hide_local_tasks' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('On location pages');
  $export['locations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide context';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '0',
        ),
        'boxes-contact' => array(
          'module' => 'boxes',
          'delta' => 'contact',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'views-links-block' => array(
          'module' => 'views',
          'delta' => 'links-block',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'postscript_third',
          'weight' => '0',
        ),
        'boxes-legal' => array(
          'module' => 'boxes',
          'delta' => 'legal',
          'region' => 'postscript_fourth',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide context');
  $export['sitewide'] = $context;

  return $export;
}
