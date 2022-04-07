#include QMK_KEYBOARD_H
#include "keymap_euro.h"
#include "sendstring_euro.h"

// Layers
#define _BASE 0
#define _MOD 1

#define MOD MO(_MOD)
#define MOD_CAPS LT(_MOD, KC_CAPS)
#define MOD_ENT  LT(_MOD, KC_ENT)
#define MOD_ESC  LT(_MOD, KC_ESC)

#define LCTL_DEL LCTL_T(KC_DEL)
#define LCTL_INS LCTL_T(KC_INS)

#define RALT_APP RALT_T(KC_APP)

/*
enum custom_keycodes {
    // = SAFE_RANGE,
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | ESC  | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F10  | F11  | F12  | DEL  | MUTE |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | ^    | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 0    | _    | ´    | BSPC | HOME |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | TAB  | Q    | W    | E    | R    | T    | Y    | U    | I    | O    | P    | {    | }    | +    | PGUP |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | M_CP | A    | S    | D    | F    | G    | H    | J    | K    | L    | ¨    | '    | RETURN      | PGDN |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | SHFT        | Z    | X    | C    | V    | B    | N    | M    | ,    | .    | /    | SHFT | UP   | END  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | CTRL | CMD  | ALT  |                  SPACE                  | ALTG | MOD  | CTRL | LEFT | DOWN | RGHT |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        KC_ESC,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DEL,         KC_MUTE,
        EU_ACUT,        EU_1,           EU_2,           EU_3,           EU_4,           EU_5,           EU_6,           EU_7,           EU_8,           EU_9,           EU_0,           EU_MINS,        EU_EQL,         KC_BSPC,        KC_HOME,
        KC_TAB,         EU_Q,           EU_W,           EU_E,           EU_R,           EU_T,           EU_Y,           EU_U,           EU_I,           EU_O,           EU_P,           EU_LBRC,        EU_RBRC,        EU_NUHS,        KC_PGUP,
        MOD_CAPS,       EU_A,           EU_S,           EU_D,           EU_F,           EU_G,           EU_H,           EU_J,           EU_K,           EU_L,           EU_DIA,         EU_QUOT,                        KC_ENT,         KC_PGDN,
        KC_LSFT,                        EU_Z,           EU_X,           EU_C,           EU_V,           EU_B,           EU_N,           EU_M,           EU_COMM,        EU_DOT,         EU_SLSH,        KC_RSFT,        KC_UP,          KC_END,
        LCTL_DEL,       KC_LGUI,        KC_LALT,                                                        KC_SPC,                                         RALT_APP,       MOD,            KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_RGHT),
    [_MOD] = LAYOUT(
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | TOG  | F13  | F14  | F15  | F16  | F17  | F18  | F19  | F20  | F21  | F22  | F23  | F24  | RST  | PLAY |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | RMOD | HUD  | HUI  | VAD  | VAI  | SPD  | SPI  | SAD  | SAI  |      |      |      | CTOG |      | M1R  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      | M2R  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | XXX  |      |      |      |      |      |      |      |      |      |      |      |             | M1PL |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | SHFT        |      |      |      |      |      | NKRO |      |      |      |      | SHFT | UP   | M2PL |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | CTRL | LEFT | RGHT |                  SPACE                  |      | XXX  |      | LEFT | DOWN | RGHT |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        RGB_TOG,        KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         RESET,          KC_MPLY,
        RGB_MOD,        RGB_HUD,        RGB_HUI,        RGB_VAD,        RGB_VAI,        RGB_SPD,        RGB_SPI,        RGB_SAD,        RGB_SAI,        KC_NO,          KC_NO,          KC_NO,          CMB_TOG,        KC_NO,          DM_REC1,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          DM_REC2,
        KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,          DM_PLY1, 
        KC_LSFT,                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          NK_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RSFT,        KC_UP,          DM_PLY2,
        LCTL_INS,       KC_LEFT,        KC_RGHT,                                                        KC_SPC,                                         KC_TRNS,        KC_NO,          KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_RGHT),
    /*[] = LAYOUT(
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |             |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |             |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |                                         |      |      |      |      |      |      |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO, 
        KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,                                                          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO)
    */
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    }
    return true;
}


#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t mod_state = get_mods();
    if (layer_state_is(_BASE)) {
        if (mod_state & MOD_MASK_CTRL) {
            if (clockwise) {
                tap_code(EU_Y);
            } else {
                tap_code(EU_Z);
            }
        } else {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            } 
        }
    } else if (layer_state_is(_MOD)) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    }
    return false;
}
#endif


#ifdef COMBO_ENABLE
enum combos {
  X_LMDA,
  Y_LMDA,
  A_LMDA,
  E_LMDA,
  I_LMDA,
  O_LMDA,
  U_LMDA,
  LMDA,
  MY_ML,
  WRK_ML,
  MY_NM,
  RND,
  USRNM,
};

const uint16_t PROGMEM xbrc_combo[]  = {EU_X,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM ybrc_combo[]  = {EU_Y,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM abrc_combo[]  = {EU_A,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM ebrc_combo[]  = {EU_E,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM ibrc_combo[]  = {EU_I,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM obrc_combo[]  = {EU_O,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM ubrc_combo[]  = {EU_U,   EU_DOT,     COMBO_END};
const uint16_t PROGMEM eqbrc_combo[] = {EU_EQL, EU_DOT,     COMBO_END};
const uint16_t PROGMEM rnd_combo[]   = {EU_R,   EU_N,       COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [X_LMDA] = COMBO_ACTION(xbrc_combo),
  [Y_LMDA] = COMBO_ACTION(ybrc_combo),
  [A_LMDA] = COMBO_ACTION(abrc_combo),
  [E_LMDA] = COMBO_ACTION(ebrc_combo),
  [I_LMDA] = COMBO_ACTION(ibrc_combo),
  [O_LMDA] = COMBO_ACTION(obrc_combo),
  [U_LMDA] = COMBO_ACTION(ubrc_combo),
  [LMDA]   = COMBO_ACTION(eqbrc_combo),
  [RND]    = COMBO_ACTION(rnd_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case X_LMDA:
            if (pressed) {
                SEND_STRING("x => x.");
            }
            break;
        case Y_LMDA:
            if (pressed) {
                SEND_STRING("y => y.");
            }
            break;
        case A_LMDA:
            if (pressed) {
                SEND_STRING("a => a.");          
            }
            break;
        case E_LMDA:
            if (pressed) {
                SEND_STRING("e => e.");
            }
            break;
        case I_LMDA:
            if (pressed) {
                SEND_STRING("i => i.");
            }
            break;
        case O_LMDA:
            if (pressed) {
                SEND_STRING("o => o.");
            }
            break;
        case U_LMDA:
            if (pressed) {
                SEND_STRING("u => u.");
            }
            break;
        case LMDA:
            if (pressed) {
                SEND_STRING("=> ");
            }
            break;
        case RND:
            if (pressed) {
                for (int i = 0; i < 6; ++i)
                {
                    tap_random_base64();
                }
            }
            break;
    }
}
#endif
