<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asc_shibboleth_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer userprotect
  $permissions['administer userprotect'] = array(
    'name' => 'administer userprotect',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  // Exported permission: change own e-mail
  $permissions['change own e-mail'] = array(
    'name' => 'change own e-mail',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  // Exported permission: change own openid
  $permissions['change own openid'] = array(
    'name' => 'change own openid',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  // Exported permission: change own password
  $permissions['change own password'] = array(
    'name' => 'change own password',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  return $permissions;
}
