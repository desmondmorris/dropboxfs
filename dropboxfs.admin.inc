<?php

/**
 * @file
 * Administrative configurations for Dropbox File System
 */

/**
 * Builds the Settings form.
 */
function dropboxfs_settings() {

  $form['dropboxfs_access_token'] = array(
    '#type'           => 'password',
    '#title'          => t('Access Token'),
    '#default_value'  => '',
    '#required'       => TRUE
  );

  return system_settings_form($form);
}
