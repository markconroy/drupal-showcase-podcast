CONTENTS OF THIS FILE
---------------------
* Introduction
* Requirements
* Installation
* Maintainers

INTRODUCTION
------------

Out of the box, Drupal is a content management framework. You can use it to create a content management system. This is daunting for new users to Drupal - so much to look at, work out, configure, learn, add to ... you get the idea.

What I have done with this distribution is created a content management system using Drupal core, some contrib modules, and features, and a custom installation profile.

When you install the ADFL profile (named after the business name I freelance under - A Design for Life) , you get: content types for Static Pages, Image Galleries, news posts, services offered; listing pages for Image Galleries, News, Services; a rotating slider on the frontpage via BEANs and context, anti-spam protection for all forms via honeypot; configuration for ckeditor; social sharing links via ShareThis; human-readable urls via pathauto; a new role called "staff" for users between "authenticated" and "administrator".

The reason for this profile is that there are many tasks that I complete over and over again on Drupal websites, such as creating these pieces of functionality. I could package them up in features and just enable them, but thought it better to have them all install in one go in an installation profile, as this also leads to an easier life when rebuilding the website.

New features will be added to this on an on-going basis - such as an "Event" content type, a contact form and page, perhaps some commerce features, custom page manager pages, subthemes for adaptivetheme and Omega, etc.

There are also some modules installed but not being used just yet, such as panels, page manager, backup and migrate.

Finally, the profile will create a theme for you, based on Zen, called adflzen and set it as the default theme.

REQUIREMENTS
------------
You will need to place the ckeditor, flexslider, and colorbox libraries in your profiles/adfl/libraries folder.

INSTALLATION
------------
Install like any other profile, such as standard or minimal. When installing Drupal for the first time, simply choose ADFL as the install option.

MAINTAINERS
-----------
This profile was created by Mark Conroy (mark.ie). Time spent on it was sponsored by Annertech.com

So, what do you need to do? Add content, add styling. Be happy.
