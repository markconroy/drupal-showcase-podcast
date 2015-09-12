<?php
/**
 * @file
 * adfl_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function adfl_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: guest.
  $styles['guest'] = array(
    'label' => 'Guest',
    'effects' => array(
      1 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: static_page_main_image.
  $styles['static_page_main_image'] = array(
    'label' => 'Static Page Main Image',
    'effects' => array(
      1 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 400,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
