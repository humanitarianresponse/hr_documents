<?php
/**
 * @file
 * hr_documents.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_documents_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_documents_space';
  $context->description = 'Documents page per space';
  $context->tag = 'Documents';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/documents' => 'node/*/documents',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS' => array(
          'module' => 'facetapi',
          'delta' => '2VJqM7IlPMSIoTIQrsoqy1dgG563hXbS',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-w7XuwcVu1l6DNu4aCenMydri96KBLxYh' => array(
          'module' => 'facetapi',
          'delta' => 'w7XuwcVu1l6DNu4aCenMydri96KBLxYh',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-LhsTdqulwuTvZl35GFMu2uKURHDnySAL' => array(
          'module' => 'facetapi',
          'delta' => 'LhsTdqulwuTvZl35GFMu2uKURHDnySAL',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v' => array(
          'module' => 'facetapi',
          'delta' => '9GGN5HfHaQpjLAfMWHJknvdGmR74ha9v',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Documents page per space');
  $export['hr_documents_space'] = $context;

  return $export;
}
