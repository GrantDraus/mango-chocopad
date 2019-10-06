#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_4x4(
    KC_P7,           KC_P8,  KC_P9,    KC_PPLS  \
    KC_P4,           KC_P5,  KC_P6,    KC_PMNS  \
    KC_P1,           KC_P2,  KC_P3,    KC_PAST  \
    LT(1, KC_PENT),  KC_P0,  KC_PDOT,  KC_PSLS  \
  ),

  [1] = LAYOUT_ortho_4x4(
    RGB_VAI,  RGB_HUI,  RGB_SAI,  BL_INC,   \
    RGB_VAD,  RGB_HUD,  RGB_SAD,  BL_DEC,   \
    KC_CALC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  \
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  \
  )

};
