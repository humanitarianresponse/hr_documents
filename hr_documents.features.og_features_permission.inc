<?php
/**
 * @file
 * hr_documents.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function hr_documents_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hr_bundle:create hr_document content'
  $permissions['node:hr_bundle:create hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_bundle:delete any hr_document content'
  $permissions['node:hr_bundle:delete any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_bundle:delete own hr_document content'
  $permissions['node:hr_bundle:delete own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_bundle:update any hr_document content'
  $permissions['node:hr_bundle:update any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_bundle:update own hr_document content'
  $permissions['node:hr_bundle:update own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:create hr_document content'
  $permissions['node:hr_operation:create hr_document content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete any hr_document content'
  $permissions['node:hr_operation:delete any hr_document content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete own hr_document content'
  $permissions['node:hr_operation:delete own hr_document content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update any hr_document content'
  $permissions['node:hr_operation:update any hr_document content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update own hr_document content'
  $permissions['node:hr_operation:update own hr_document content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_sector:create hr_document content'
  $permissions['node:hr_sector:create hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_sector:delete any hr_document content'
  $permissions['node:hr_sector:delete any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_sector:delete own hr_document content'
  $permissions['node:hr_sector:delete own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_sector:update any hr_document content'
  $permissions['node:hr_sector:update any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_sector:update own hr_document content'
  $permissions['node:hr_sector:update own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:create hr_document content'
  $permissions['node:hr_space:create hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:delete any hr_document content'
  $permissions['node:hr_space:delete any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:delete own hr_document content'
  $permissions['node:hr_space:delete own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:update any hr_document content'
  $permissions['node:hr_space:update any hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_space:update own hr_document content'
  $permissions['node:hr_space:update own hr_document content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  return $permissions;
}
