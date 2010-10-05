<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footermenu:nolink/453
  $menu_links['menu-footermenu:nolink/453'] = array(
    'menu_name' => 'menu-footermenu',
    'link_path' => 'nolink/453',
    'router_path' => 'nolink',
    'link_title' => 'Biblioteket tilbyder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-footermenu:nolink/456
  $menu_links['menu-footermenu:nolink/456'] = array(
    'menu_name' => 'menu-footermenu',
    'link_path' => 'nolink/456',
    'router_path' => 'nolink',
    'link_title' => 'Lige nu og her',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-footermenu:nolink/457
  $menu_links['menu-footermenu:nolink/457'] = array(
    'menu_name' => 'menu-footermenu',
    'link_path' => 'nolink/457',
    'router_path' => 'nolink',
    'link_title' => 'Offentlig information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-footermenu:nolink/458
  $menu_links['menu-footermenu:nolink/458'] = array(
    'menu_name' => 'menu-footermenu',
    'link_path' => 'nolink/458',
    'router_path' => 'nolink',
    'link_title' => 'Om Biblioteket',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Biblioteket tilbyder');
  t('Lige nu og her');
  t('Offentlig information');
  t('Om Biblioteket');


  return $menu_links;
}
