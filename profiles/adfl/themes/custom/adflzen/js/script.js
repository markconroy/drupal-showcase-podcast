/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Begin basic mobile menu support here
    // Set this 481 to the number of pixels you want for when the mobile menu
    // becomes a desktop menu
    if ($(window).width() < 1170) {
      //Add your jQuery for mobile menu on small screens here

      // Hide the main menu items for mobile views initially
      $('#main-menu ul, #middle-menu ul').hide();

      // Remove the element-invisible class for the #main-menu title on
      // small screens so we can use the menu title as our trigger
      // Add an "unclicked" class to the trigger (handy for theming)
      $('#main-menu h2, #middle-menu h2').removeClass('element-invisible').addClass('menu-trigger-unclicked');

      // Toggle list on/off when title is clicked
      $('#main-menu h2').click(function() {
        // When clicked, add a "clicked" class to the trigger (handy for theming)
        // and remove the "unclicked" class and vice versa.
        $('#main-menu h2').toggleClass('menu-trigger-unclicked menu-trigger-clicked');
        // Slide the menu in to/out of view when trigger is clicked
        $('#main-menu ul').slideToggle();
        // Set each menu item to 100% so they are no longer set side-by-side
        $('#main-menu ul li').css('width','100%');
      });
      // Toggle list on/off when title is clicked
      $('#middle-menu h2').click(function() {
        // When clicked, add a "clicked" class to the trigger (handy for theming)
        // and remove the "unclicked" class and vice versa.
        $('#middle-menu h2').toggleClass('menu-trigger-unclicked menu-trigger-clicked');
        // Slide the menu in to/out of view when trigger is clicked
        $('#middle-menu ul').slideToggle();
        // Set each menu item to 100% so they are no longer set side-by-side
        $('#middle-menu ul li').css('width','100%');
      });

      // Make the cursor a pointer when hovered
      $('#main-menu h2, #middle-menu').hover(function() {
        $(this).css('cursor','pointer');
      });
    } else {
      $('#main-menu h2, #middle-menu h2').addClass('element-invisible');
    }
  }
};

})(jQuery, Drupal, this, this.document);
