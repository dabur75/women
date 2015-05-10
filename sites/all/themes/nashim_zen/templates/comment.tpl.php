<?php
/**
 * @file
 * Returns the HTML for comments.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728216
 */
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <header>
    <div class="cm_image">
        <?php

        if (token_replace('[comment:author:field-user-image:file]', array('comment' => $comment)) !='[comment:author:field-user-image:file]'){
        $comment_author_pic_file = token_replace('[comment:author:field-user-image:file]', array('comment' => $comment));
        } else {
        $comment_author_pic_file = "bramy.jpg";
        }
    ?>
        <img src="/sites/default/files/styles/thumbnail/public/<?php echo $comment_author_pic_file ?>">

    <!--  <?php print $picture; ?> -->
    </div>


    <div class="cm_text">
      <?php print $author; ?>
		<?php
			// We hide the comments and links now so that we can render them later.
			hide($content['links']);
			print render($content);
		?>
    </div>

    <?php if ($status == 'comment-unpublished'): ?>
      <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
    <?php endif; ?>
  </header>

  <?php if ($signature): ?>
    <footer class="user-signature clearfix">
      <?php print $signature; ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['links']) ?>
</article>