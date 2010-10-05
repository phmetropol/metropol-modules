<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function footer_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footermenu
  $menus['menu-footermenu'] = array(
    'menu_name' => 'menu-footermenu',
    'title' => 'Footer menu',
    'description' => 'Nested list of links creating the bottom footer menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Nested list of links creating the bottom footer menu');


  return $menus;
}
