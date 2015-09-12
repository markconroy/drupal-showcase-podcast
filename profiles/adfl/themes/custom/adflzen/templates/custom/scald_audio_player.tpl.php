<?php
/**
 * @file
 * Scald Audio player template
 * Created by Hervé Tubaldo - herve@webup.fr
 * Changed to use HTML5 Audio element by Mark Conroy - https://www.drupal.org/user/336910
 */
?>

<audio controls>
 <source src="<?php echo file_create_url($vars['audio_uri']) ?>">
 <p>Your browser does not support the audio element.</p>
</audio>
