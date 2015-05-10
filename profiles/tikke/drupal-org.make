; amir make file for d.o. usage
core = 7.x
api = 2
distribution_name = Amir profile
exclusive = 1

; +++++ Modules +++++

projects[admin_menu][version] = "3.x-dev"
projects[admin_menu][patch][] = "http://drupal.org/files/admin_menu-fix_rtl-725840-34.patch"
projects[admin_menu][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "2.0"
projects[features][subdir] = "contrib"

projects[email][version] = "1.2"
projects[email][subdir] = "contrib"

projects[field_group][version] = "1.3"
projects[field_group][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[multiupload_filefield_widget][version] = "1.11"
projects[multiupload_filefield_widget][subdir] = "contrib"

projects[flag][version] = "3.2"
projects[flag][subdir] = "contrib"

projects[dragndrop_upload][version] = "1.x-dev"
projects[dragndrop_upload][subdir] = "contrib"

projects[file_entity][version] = "2.0-alpha2"
projects[file_entity][subdir] = "contrib"

projects[media][version] = "2.x-dev"
projects[media][subdir] = "contrib"

projects[backup_migrate][version] = "2.7"
projects[backup_migrate][subdir] = "contrib"

projects[better_formats][version] = "1.0-beta1"
projects[better_formats][subdir] = "contrib"

projects[entity][version] = "1.2"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[module_filter][version] = "1.8"
projects[module_filter][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[tvi][version] = "1.0-beta3"
projects[tvi][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[boost][version] = "1.0-beta2"
projects[boost][subdir] = "contrib"

projects[rules][version] = "2.5"
projects[rules][subdir] = "contrib"

projects[metatag][version] = "1.0-beta7"
projects[metatag][subdir] = "contrib"

projects[page_title][version] = "2.7"
projects[page_title][subdir] = "contrib"

projects[google_analytics][version] = "1.4"
projects[google_analytics][subdir] = "contrib"

projects[ckeditor_link][version] = "2.3"
projects[ckeditor_link][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[bxslider_views_slideshow][version] = "1.50"
projects[bxslider_views_slideshow][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.1"
projects[views_bulk_operations][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"

projects[webform][version] = "3.19"
projects[webform][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

; +++++ Themes +++++

; adminimal_theme
projects[adminimal_theme][type] = "theme"
projects[adminimal_theme][version] = "1.x-dev"
projects[adminimal_theme][subdir] = "contrib"

; bootstrap
projects[bootstrap][type] = "theme"
projects[bootstrap][version] = "2.2"
projects[bootstrap][subdir] = "contrib"

; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.4"
projects[zen][subdir] = "contrib"

; +++++ Libraries +++++

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz"

;bxslider
libraries[jquery.bxslider][type] = "libraries"
libraries[jquery.bxslider][download][type] = "file"
libraries[jquery.bxslider][download][url] = "https://github.com/wandoledzep/bxslider-4/archive/master.zip"

