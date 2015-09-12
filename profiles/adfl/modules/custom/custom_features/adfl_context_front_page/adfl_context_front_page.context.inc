<?php
/**
 * @file
 * adfl_context_front_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function adfl_context_front_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'A context for items on the frontpage';
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
        'views-frontpage_rotating_slider-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_rotating_slider-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for items on the frontpage');
  $export['front'] = $context;

  return $export;
}
