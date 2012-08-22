<?php
/**
 * @file
 * vragentrommel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vragentrommel_user_default_permissions() {
  $permissions = array();

  // Exported permission: answer.
  $permissions['answer'] = array(
    'name' => 'answer',
    'roles' => array(
      0 => 'administrator',
      1 => 'didactisch team',
    ),
    'module' => 'vragentrommel_dev',
  );

  return $permissions;
}
