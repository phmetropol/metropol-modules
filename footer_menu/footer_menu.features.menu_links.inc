<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footermenu:<front>
  $menu_links['menu-footermenu:<front>'] = array(
    'menu_name' => 'menu-footermenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Biblioteket tilbyder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Biblioteket tilbyder');


  return $menu_links;
}
