<?php
/**
 * @file
 * attac_gruppen.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function attac_gruppen_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:gruppe:add user'
  $permissions['node:gruppe:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:administer group'
  $permissions['node:gruppe:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:approve and deny subscription'
  $permissions['node:gruppe:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:create artikel content'
  $permissions['node:gruppe:create artikel content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete any artikel content'
  $permissions['node:gruppe:delete any artikel content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:delete own artikel content'
  $permissions['node:gruppe:delete own artikel content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage members'
  $permissions['node:gruppe:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage permissions'
  $permissions['node:gruppe:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:manage roles'
  $permissions['node:gruppe:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:subscribe'
  $permissions['node:gruppe:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppe:subscribe without approval'
  $permissions['node:gruppe:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:gruppe:unsubscribe'
  $permissions['node:gruppe:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:gruppe:update any artikel content'
  $permissions['node:gruppe:update any artikel content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update group'
  $permissions['node:gruppe:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:gruppe:update own artikel content'
  $permissions['node:gruppe:update own artikel content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
