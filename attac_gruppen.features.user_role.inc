<?php
/**
 * @file
 * attac_gruppen.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function attac_gruppen_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 7,
  );

  return $roles;
}
