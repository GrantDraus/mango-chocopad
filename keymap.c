#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_4x4(
    KC_P7,  KC_P8,    KC_P9,    KC_PDOT,        \
    KC_P4,  KC_P5,    KC_P6,    KC_PPLS,        \
    KC_P1,  KC_P2,    KC_P3,    KC_PMNS,        \
    KC_P0,  KC_PAST,  KC_PSLS,  LT(1, KC_PENT)  \
  ),

  [1] = LAYOUT_ortho_4x4(
    BL_INC,   RGB_VAI,  XXXXXXX,  XXXXXXX,  \
    BL_DEC,   RGB_VAD,  XXXXXXX,  XXXXXXX,  \
    RGB_HUI,  RGB_SAI,  XXXXXXX,  KC_CALC,  \
    RGB_HUD,  RGB_SAD,  KC_BSPC,  _______   \
  )

};
