<?php

echo '<p>ברוכה הבאה לקהילת נשים מצלמות!אנו רואות בך שותפה לדרך, ושמחות על רצונך להצטרף למשפחה.</p>';
echo '<p>החברות תעניק לך את האפשרות להשתתף בפעילויות של הקהילה, ליצור עמוד אישי תחת מטריית האתר "נשים מצלמות", להציג את עבודותיך במרחב מעריך ומכבד ולהימצא בדיאלוג מפרה עם נשים יוצרות.</p>'; 

// Interset field
print render ($form['field_user_interest']);

// Base register fields
print render ($form['field_realname']);
print render($form['account']['name']);
print render($form['account']['mail']);
print render($form['account']['pass']);

// User details
print render ($form['field_user_image']);
print render ($form['field_user_area']);
print render ($form['field_user_phone']);
print render ($form['field_user_year_birth']);
print render ($form['field_user_profesion']);
print render ($form['field_user_areas']);

// Mailchimp and so on
print render($form['mailchimp_lists']);
print render ($form['field_users_sms']);
print render($form['terms_of_use']);

echo '<p>מאחלות לנו שותפות פורה,</p>';
echo '<p>ליאור, חדוה וכל צוות נשים מצלמות.</p>';


print drupal_render($form['actions']);
print drupal_render($form['form_build_id']);
print drupal_render($form['form_id']);
?>