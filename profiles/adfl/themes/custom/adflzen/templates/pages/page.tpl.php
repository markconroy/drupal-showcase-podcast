<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <?php if ($page['top_nav']): ?>
    <div id="top-nav">
      <nav id="main-menu" class="contained" role="navigation" tabindex="-1">
        <?php print render($page['top_nav']); ?>
      </nav>
    </div>
  <?php endif; ?>

  <header class="header contained" id="header" role="banner">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>

  </header>

  <?php if ($page['middle_nav']): ?>
      <div id="middle-nav">
        <nav id="middle-menu" class="contained" role="navigation" tabindex="-1">
          <?php print render($page['middle_nav']); ?>
          <div class="nav-login"><a class="nav-login-link" href="/user">Login</a></div>
          <div class="nav-logout"><a class="nav-login-link" href="/user/logout">Logout</a></div>
        </nav>
      </div>

    <?php endif; ?>
    <div class="contained">
      <?php print render($page['highlighted']); ?>
    </div>

    <?php if ($page['content_plus_one']): ?>
    <div class="content-plus-one">
      <?php print render($page['content_plus_one']); ?>
    </div>
    <?php endif; ?>

  <div id="main">

    <div id="content" class="column" role="main">
      <div class="contained">
        <?php print $breadcrumb; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div>
    </div>

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>

  <?php if ($page['content_minus_one']): ?>
  <div class="content-minus-one clearfix">
    <div class="contained">
      <?php print render($page['content_minus_one']); ?>
    </div>
  </div>
  <?php endif; ?>

  <?php if ($page['content_minus_two']): ?>
  <div class="content-minus-two clearfix">
    <div class="contained">
      <?php print render($page['content_minus_two']); ?>
    </div>
  </div>
  <?php endif; ?>

  <?php print render($page['footer']); ?>

</div>

<?php print render($page['bottom']); ?>
<div class="copyright clearfix">
  <div class="contained">
    <p class="left">Copyright <?php echo date("Y") ?> - feel free to re-use in a creative commons manner</p>
    <p class="right">Web Design and Development by <a href="http://www.adesignforlife.net">A Design For Life</a></p>
  </div>
</div>
