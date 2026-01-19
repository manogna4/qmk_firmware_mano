// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,


#include QMK_KEYBOARD_H

enum layer_names {
    ALT,
    NAV,
    NUM,
    SYM,
    FNC,
    FN2,
};

enum custom_keycodes {
  KC_N000 = SAFE_RANGE,
  KC_OSCL,
};

// one shot mods short codes
#define KC_OSFT OSM(MOD_LSFT)
#define KC_OCTL OSM(MOD_LCTL)
#define KC_OALT OSM(MOD_LALT)
#define KC_OGUI OSM(MOD_LGUI)

// one shot layers short codes
#define KC_ONAV OSL(NAV)
#define KC_ONUM OSL(NUM)
#define KC_OSYM OSL(SYM)
#define KC_OFNC OSL(FNC)
#define KC_OFN2 OSL(FN2)

// edit functions short codes
#define KC_CTLZ LCTL(KC_Z)
#define KC_CTLX LCTL(KC_X)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLV LCTL(KC_V)

// custom
#define KC_STAB LSFT(KC_TAB) // shift+tab because it's used often
#define KC_SPL1 LGUI(KC_LBRC) // special combo easily accessible - for configuration in the OS
#define KC_SPL2 LGUI(KC_RBRC) // special combo easily accessible - for configuration in the OS
#define KC_SPL3 LGUI(KC_BSLS) // special combo easily accessible - for configuration in the OS
#define KC_SPL4 LGUI(KC_GRV)  // special combo easily accessible - for configuration in the OS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [ALT] = LAYOUT(
    KC_COMM, KC_C   , KC_D   , KC_F   , KC_K                     , KC_V   , KC_H   , KC_T   , KC_L   , KC_DOT ,
    KC_A   , KC_S   , KC_E   , KC_R   , KC_Y                     , KC_BSPC, KC_N   , KC_I   , KC_O   , KC_ENT ,
    KC_Q   , KC_W   , KC_G   , KC_B   , KC_J   , KC_SPL1, KC_CAPS, KC_X   , KC_M   , KC_U   , KC_P   , KC_Z   ,
    KC_SPL3, KC_SPL2, KC_LALT, KC_ONUM, KC_ONAV, KC_OFNC, KC_OCTL, KC_SPC , KC_OSYM, KC_LALT, KC_RBT , KC_NO  ),
  
  [NAV] = LAYOUT(
    KC_ENT , KC_STAB, KC_ESC , KC_TAB , KC_DEL                   , KC_STAB, KC_PGUP, KC_UP  , KC_PGDN, KC_SLSH,
    KC_OGUI, KC_OCTL, KC_OSFT, KC_OALT, KC_BSPC                  , KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT ,
    KC_CTLZ, KC_CTLX, KC_CTLC, KC_CTLV, QK_RBT , KC_NO  , KC_SPL2, KC_TAB , KC_HOME, KC_DEL , KC_END , KC_INS ,
    KC_NO  , KC_NO  , KC_NO  , KC_ONUM, KC_ONAV, KC_OFNC, KC_SPL1, KC_SPC , KC_OSYM, KC_NO  , KC_NO  , KC_NO  ),

  [NUM] = LAYOUT(
    KC_SPC , KC_STAB, KC_UP  , KC_TAB , KC_CIRC                  , KC_PLUS, KC_7   , KC_8   , KC_9   , KC_PAST,
    KC_N000, KC_LEFT, KC_DOWN, KC_RGHT, KC_EQL                   , KC_BSPC, KC_4   , KC_5   , KC_6   , KC_ENT ,
    KC_OGUI, KC_OCTL, KC_OSFT, KC_OALT, KC_PERC, KC_NO  , KC_NO  , KC_MINS, KC_1   , KC_2   , KC_3   , KC_PSLS,
    KC_NO  , KC_NO  , KC_NO  , KC_ONUM, KC_ONAV, KC_OFNC, KC_OCTL, KC_0   , KC_DOT , KC_NO  , KC_NO  , KC_NO  ),

  [SYM] = LAYOUT(
    KC_RABK, KC_MINS, KC_DQUO, KC_PLUS, KC_SCLN                  , KC_GRV , KC_RBRC, KC_RPRN, KC_RCBR, KC_PIPE,
    KC_LABK, KC_UNDS, KC_QUOT, KC_EQL , KC_COLN                  , KC_BSPC, KC_LBRC, KC_LPRN, KC_LCBR, KC_AMPR,
    KC_EXLM, KC_ASTR, KC_AT  , KC_SLSH, KC_QUES, KC_NO  , KC_NO  , KC_TILD, KC_DLR , KC_HASH, KC_BSLS, KC_PERC,
    KC_NO  , KC_NO  , KC_NO  , KC_ONUM, KC_ONAV, KC_OFNC, KC_OCTL, KC_SPC , KC_OSYM, KC_NO  , KC_NO  , KC_NO  ),
  
  [FNC] = LAYOUT(
    KC_DOT , KC_L   , KC_T   , KC_H   , KC_V                     , KC_F15 , KC_F7  , KC_F8  , KC_F9  , KC_F11 ,
    KC_SPC , KC_O   , KC_I   , KC_N   , KC_BSPC                  , KC_F14 , KC_F4  , KC_F5  , KC_F6  , KC_F10 ,
    KC_Z   , KC_P   , KC_U   , KC_M   , KC_X   , KC_NO  , KC_NO  , KC_F13 , KC_F1  , KC_F2  , KC_F3  , KC_F12 ,
    KC_NO  , KC_NO  , KC_NO  , KC_ONUM, KC_ONAV, KC_OFN2, KC_APP , KC_CAPS, QK_BOOT, KC_NO  , KC_NO  , KC_NO  ),
  
  [FN2] = LAYOUT(
    KC_DOT , KC_17  , KC_18  , KC_19  , KC_V                     , KC_F15 , KC_F7  , KC_F8  , KC_F9  , KC_F11 ,
    KC_SPC , KC_14  , KC_15  , KC_16  , KC_BSPC                  , KC_F14 , KC_F4  , KC_F5  , KC_F6  , KC_F10 ,
    KC_Z   , KC_21  , KC_22  , KC_23  , KC_X   , KC_NO  , KC_NO  , KC_F13 , KC_F1  , KC_F2  , KC_F3  , KC_F12 ,
    KC_NO  , KC_NO  , KC_NO  , KC_ONUM, KC_ONAV, KC_NO  , KC_APP , KC_CAPS, QK_BOOT, KC_NO  , KC_NO  , KC_NO  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    //if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
    //    clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
    //    return true;
    //}
    switch (keycode) {
        case KC_OSCL:
            if (record->event.pressed) {
              clear_mods();
              clear_oneshot_mods();
              clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
              return true;
              }
        case KC_N000:
            if (record->event.pressed) {
              SEND_STRING("000");
              return true;
            }
        default:
            return true;
    }

};