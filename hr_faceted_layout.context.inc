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
