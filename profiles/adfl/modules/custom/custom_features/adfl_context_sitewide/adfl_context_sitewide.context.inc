<?php
/**
 * @file
 * adfl_context_sitewide.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function adfl_context_sitewide_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'The items that are to appear on every page of the website.';
  $context->tag = 'front ~front sitewide';
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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'top_nav',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The items that are to appear on every page of the website.');
  t('front ~front sitewide');
  $export['sitewide'] = $context;

  return $export;
}
