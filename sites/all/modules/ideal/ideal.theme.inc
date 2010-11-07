<?php 

/*
* Override filter.module's theme_filter_tips() function to disable tips display.
*/
function ideal_filter_tips($tips, $long = FALSE, $extra = '') {
  return '';
}

/*
* Override filter.module's theme_filter_tipsmore_info() function to disable tips display.
*/
function ideal_filter_tips_more_info() {
  return '';
}
