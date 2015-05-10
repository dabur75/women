; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
core = 7.x
; API version
; ------------
; Every makefile needs to declare it's Drush Make API version. This version of
; drush make uses API version `2`.
api = 2

; Patchwork library.
libraries[patchwork][download][type] = git
libraries[patchwork][download][url] = https://github.com/antecedent/patchwork.git
libraries[patchwork][destination] = libraries

; Dependencies.
projects[libraries][overwrite] = TRUE
projects[libraries][version] = 3.x-dev
