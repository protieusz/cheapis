#include QMK_KEYBOARD_H

enum combo_events {
  COMBO_DEL,
  COMBO_ESC,
  COMBO_CTRL,
  COMBO_ALT,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM combo_del[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM combo_ctrl[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo_alt[] = {KC_H, KC_N, COMBO_END};

combo_t key_combos[] = {
  [COMBO_DEL] = COMBO(combo_del, KC_DEL),
  [COMBO_ESC] = COMBO(combo_esc, KC_ESC),
  [COMBO_CTRL] = COMBO(combo_ctrl, KC_LCTL),
  [COMBO_ALT] = COMBO(combo_alt, KC_RALT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(
    KC_Q,        KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,        KC_S,    KC_D,    KC_F,    KC_G,               KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,
    LSFT_T(KC_Z),KC_X,    KC_C,    KC_V,    KC_B,               KC_N,   KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
                          KC_LGUI, LT(1,KC_BSPC),               LT(2,KC_SPC),    KC_ENT
    ),
    [1] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TAB,  _______, _______, _______, _______,                KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
    _______, _______, KC_MUTE, KC_VOLU, KC_VOLD,                KC_TILD, KC_GRV,  _______, _______, KC_BSLS,
                            _______,_______        ,_______,_______
    ),
    [2] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    _______, _______, _______, _______, _______,                _______, _______, _______, KC_UP, _______,
    _______, _______, KC_MUTE, KC_VOLU, KC_VOLD,                _______, _______, KC_LEFT, KC_DOWN, KC_RGHT,
                            _______,_______        ,_______,_______
    ),
    [3] = LAYOUT(
    _______, _______,   _______, _______, _______,                 KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
    _______,_______,_______, _______, _______,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    _______,_______,_______,_______,_______        ,_______,_______,_______,_______,_______,
                            _______,_______        ,_______,_______
    )
};

//#ifdef COMBO_ENABLE

//#endif
