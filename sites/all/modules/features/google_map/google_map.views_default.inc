<?php
/**
 * @file
 * google_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function google_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'google_map';
  $view->description = 'Display google map location';
  $view->tag = 'default';
  $view->base_table = 'colorized_gmap_units';
  $view->human_name = 'Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Colorized gmap: Internal, numeric colorized gmap ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'colorized_gmap_units';
  $handler->display->display_options['fields']['id']['field'] = 'id';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['google_map'] = $view;

  return $export;
}
