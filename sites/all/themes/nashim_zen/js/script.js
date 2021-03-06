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

$('.masonry-item .views-field-field-node-promote').parent().addClass('parent-promote');


  }
};

$(document).ready(function(){       
            var scroll_pos = 0;
            $(document).scroll(function() { 
                scroll_pos = $(this).scrollTop();
                if(scroll_pos > 0) {
                    $("#block-panels-mini-user-top-bar").removeClass('not-scroll').addClass('scroll');
                } else {
                    $("#block-panels-mini-user-top-bar").removeClass('scroll').addClass('not-scroll');
                }
            });
        });

})(jQuery, Drupal, this, this.document);


