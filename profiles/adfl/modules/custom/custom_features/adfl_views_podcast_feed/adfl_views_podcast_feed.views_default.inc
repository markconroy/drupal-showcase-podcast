<?php
/**
 * @file
 * adfl_views_podcast_feed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function adfl_views_podcast_feed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'podcast_feed';
  $view->description = 'A view to create the iTunes podcast feed';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Podcast Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Drupal Showcase Podcast';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Podcast Short Description */
  $handler->display->display_options['fields']['field_podcast_short_description']['id'] = 'field_podcast_short_description';
  $handler->display->display_options['fields']['field_podcast_short_description']['table'] = 'field_data_field_podcast_short_description';
  $handler->display->display_options['fields']['field_podcast_short_description']['field'] = 'field_podcast_short_description';
  $handler->display->display_options['fields']['field_podcast_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_short_description']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'rfc_822';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Audio Enclosure */
  $handler->display->display_options['fields']['field_podcast_file_1']['id'] = 'field_podcast_file_1';
  $handler->display->display_options['fields']['field_podcast_file_1']['table'] = 'field_data_field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_1']['field'] = 'field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_1']['ui_name'] = 'Content: Audio Enclosure';
  $handler->display->display_options['fields']['field_podcast_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_file_1']['type'] = 'enclosure';
  /* Field: Content: Audio Duration */
  $handler->display->display_options['fields']['field_podcast_file_2']['id'] = 'field_podcast_file_2';
  $handler->display->display_options['fields']['field_podcast_file_2']['table'] = 'field_data_field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_2']['field'] = 'field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_2']['ui_name'] = 'Content: Audio Duration';
  $handler->display->display_options['fields']['field_podcast_file_2']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_file_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_file_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_podcast_file_2']['type'] = 'itunes:duration';
  /* Field: Content: Audio GUID */
  $handler->display->display_options['fields']['field_podcast_file_3']['id'] = 'field_podcast_file_3';
  $handler->display->display_options['fields']['field_podcast_file_3']['table'] = 'field_data_field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_3']['field'] = 'field_podcast_file';
  $handler->display->display_options['fields']['field_podcast_file_3']['ui_name'] = 'Content: Audio GUID';
  $handler->display->display_options['fields']['field_podcast_file_3']['label'] = '';
  $handler->display->display_options['fields']['field_podcast_file_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_podcast_file_3']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'podcast' => 'podcast',
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'A podcast showcasing the best and newest Drupal websites - who built them, how the were built, and what you can learn from it.',
        'language' => '',
        'category' => '',
        'image' => 'sites/default/files/podcast.png',
        'copyright' => 'Mark Conroy - feel free to reuse in a creative commons manner',
        'managingEditor' => 'info@adesignforlife.net',
        'webMaster' => 'info@adesignforlife.net',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => 'A showcase of the best websites developed with Drupal.',
        'summary' => 'A podcast showcasing the best and newest Drupal websites - who built them, how the were built, and what you can learn from it.',
        'category' => array(
          15 => '15',
          67 => '67',
          68 => '68',
          66 => '66',
        ),
        'keywords' => 'Drupal, web design, web development, web',
        'image' => 'sites/default/files/podcast.png',
        'author' => 'Mark Conroy',
        'explicit' => 'clean',
        'block' => '',
        'complete' => '',
        'new-feed-url' => '',
        'owner' => 'info@adesignforlife.net, Mark Conroy',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_podcast_short_description',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'field_podcast_file_1',
        'guid' => 'field_podcast_file_3',
        'pubDate' => 'created',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => 'field_podcast_short_description',
        'summary' => 'field_podcast_short_description',
        'duration' => 'field_podcast_file_2',
        'keywords' => '',
        'image' => '',
        'author' => '',
        'isClosedCaptioned' => '',
        'explicit' => '',
        'block' => '',
        'order' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['path'] = 'podcasts.rss';
  $handler->display->display_options['sitename_title'] = 0;
  $export['podcast_feed'] = $view;

  return $export;
}
