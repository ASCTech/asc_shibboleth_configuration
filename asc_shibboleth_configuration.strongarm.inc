<?php

/**
 * Implementation of hook_strongarm().
 */
function asc_shibboleth_configuration_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_auto_destroy_session';
  $strongarm->value = 1;

  $export['shib_auth_auto_destroy_session'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_debug_state';
  $strongarm->value = 0;

  $export['shib_auth_debug_state'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_debug_url';
  $strongarm->value = '';

  $export['shib_auth_debug_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_handler_protocol';
  $strongarm->value = 'http';

  $export['shib_auth_handler_protocol'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_handler_url';
  $strongarm->value = '/Shibboleth.sso';

  $export['shib_auth_handler_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_mail_shib_only';
  $strongarm->value = '0';

  $export['shib_auth_mail_shib_only'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_username_email';
  $strongarm->value = 'mail';

  $export['shib_auth_username_email'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_username_variable';
  $strongarm->value = 'eppn';

  $export['shib_auth_username_variable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_auth_wayf_uri';
  $strongarm->value = '/Login';

  $export['shib_auth_wayf_uri'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shib_logout_url';
  $strongarm->value = 'http://dev.asc.ohio-state.edu/drupal';

  $export['shib_logout_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';

  $export['user_admin_role'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_administrator_bypass_defaults';
  $strongarm->value = array(
    'up_name' => 'up_name',
    'up_mail' => 'up_mail',
    'up_pass' => 'up_pass',
    'up_status' => 'up_status',
    'up_roles' => 'up_roles',
    'up_openid' => 'up_openid',
    'up_delete' => 'up_delete',
    'up_edit' => 'up_edit',
  );

  $export['userprotect_administrator_bypass_defaults'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_autoprotect';
  $strongarm->value = 1;

  $export['userprotect_autoprotect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_protection_defaults';
  $strongarm->value = array(
    'up_name' => 'up_name',
    'up_mail' => 'up_mail',
    'up_pass' => 'up_pass',
    'up_status' => 'up_status',
    'up_roles' => 'up_roles',
    'up_openid' => 'up_openid',
    'up_delete' => 'up_delete',
    'up_edit' => 'up_edit',
  );

  $export['userprotect_protection_defaults'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'userprotect_role_protections';
  $strongarm->value = array(
    2 => array(
      'up_name' => 1,
      'up_mail' => 1,
      'up_pass' => 1,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 1,
      'up_delete' => 1,
      'up_edit' => 1,
    ),
    4 => array(
      'up_name' => 1,
      'up_mail' => 1,
      'up_pass' => 1,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 1,
      'up_delete' => 1,
      'up_edit' => 1,
    ),
    3 => array(
      'up_name' => 1,
      'up_mail' => 1,
      'up_pass' => 1,
      'up_status' => 1,
      'up_roles' => 1,
      'up_openid' => 1,
      'up_delete' => 1,
      'up_edit' => 1,
    ),
  );

  $export['userprotect_role_protections'] = $strongarm;
  return $export;
}
