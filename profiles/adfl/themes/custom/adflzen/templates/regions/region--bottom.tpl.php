<?php
/**
 * @file
 * Returns the HTML for the bottom region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <div id="bottom" class="<?php print $classes; ?>">
    <div class="contained">
      <?php print $content; ?>
    </div>
  </div>
<?php endif; ?>
