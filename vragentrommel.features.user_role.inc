<?php
/**
 * @file
 * vragentrommel.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vragentrommel_user_default_roles() {
  $roles = array();

  // Exported role: didactisch team.
  $roles['didactisch team'] = array(
    'name' => 'didactisch team',
    'weight' => '24',
  );

  return $roles;
}
