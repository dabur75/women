<div id="event_gallery">
  <div id="event_gallery_box">
    <div class="event_gallery_img">
      <?php print $fields['field_event_image']->content; ?>
    </div>
   <div class="event_gallery_teaser">
      <div class="event_gallery_title">
        <?php print $fields['title']->content; ?>
      </div>
      <div class="event_gallery_date">
        <?php print $fields['field_event_date_manual']->content; ?>
      </div>
      <div class="event_gallery_text">
        <?php print $fields['field_event_teaser']->content; ?>
      </div>
   </div>
  </div>
</div>