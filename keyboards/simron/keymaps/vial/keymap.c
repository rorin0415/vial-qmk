#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_simron(
    KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P        , 
    KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,        KC_H     , KC_J     , KC_K     , KC_L     , KC_ENTER    , 
    KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,        KC_N     , KC_M     , KC_COMMA , KC_DOT   , LT(2,KC_SLSH), 
    KC_LCTL  , KC_LSFT  , KC_LGUI  , KC_LALT  , LT(1,KC_SPC),     KC_BSPC  , KC_TAB   , KC_NO    , KC_NO    , MO(3)
  ),

  [1] = LAYOUT_simron(
    KC_ESC   , KC_7     , KC_8     , KC_9     , KC_NO    ,        KC_NO    , KC_NO    , KC_NO    , KC_MINUS , KC_EQUAL    , 
    KC_0     , KC_4     , KC_5     , KC_6     , KC_NO    ,        KC_NO    , KC_NO    , KC_BSLS  , KC_SCLN  , KC_QUOTE    , 
    KC_TRNS  , KC_1     , KC_2     , KC_3     , KC_NO    ,        KC_NO    , KC_NO    , KC_LBRC  , KC_RBRC  , KC_RSFT, 
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,        KC_DELETE, KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_GRAVE
  ),

  [2] = LAYOUT_simron(
    LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),   LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), 
    KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,        KC_NO    , KC_NO    , KC_UP    , KC_NO    , KC_NO       , 
    KC_TRNS  , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,        KC_NO    , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_NO       , 
    KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  ,        KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS
  ),

  [3] = LAYOUT_simron(
    KC_NO    , KC_F7    , KC_F8    , KC_F9    , KC_F10   ,        KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO       , 
    KC_NO    , KC_F4    , KC_F5    , KC_F6    , KC_F11   ,        KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO       , 
    KC_NO    , KC_F1    , KC_F2    , KC_F3    , KC_F12   ,        KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO       , 
    KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,        KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    return state;
}
    