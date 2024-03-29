<?php 
/**
 * Theme function for the three main buttons
 * @return HTML string
 */
function theme_ideal_three_main_buttons() {
  global $user;    
  $output = '<div class="three-main-buttons">';
  if ($user->uid == 0) { // Send anonymous to log-in
    $output .= '<span class="new-idea">' . l(t('New Idea'), 'user/login') . '</span>';
  }
  else {
    $output .= '<span class="new-idea">' . l(t('New Idea'), 'node/add/idea') . '</span>';
  }
  $output .= '<span class="all-idea">' . l(t('Vote and Comment'), 'ideas') . '</span>';
  $output .= '<span class="in-action">' . l(t('Ideas in action'), 'in-action') . '</span>';
  $output .= '</div>';    
  return $output;
}

function theme_head_to_head_block($title, $first, $chart, $second) {
  $output = '';
  $output .= '<div class="block-text">' . $title . '</div>';
  $output .= '<table>';
  $output .= '<tr>';
  $output .= '<td class="first">' . $first . '</td>';
  $output .= '<td>' . $chart . '</td>';
  $output .= '<td class="second">' . $second . '</td>';
  $output .= '</tr>';
  $output .= '</table>';
  
  return $output; 
}

function theme_head_to_head_chart($score1, $score2, $h1, $h2) {
  return '<div class="charts"><span class="chart chart1" style="padding-top:' . $h1 . 'px">' . $score1 .'</span>' . '<span class="chart chart2" style="padding-top:' . $h2 . 'px">'. $score2 . '</span></div>';
}

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
