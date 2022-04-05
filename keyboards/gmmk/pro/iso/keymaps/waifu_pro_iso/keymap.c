#include QMK_KEYBOARD_H
#include "keymap_german_international.h"

// Layers
#define _BASE 0
#define _MOD 1

#define MOD MO(_MOD)
#define MOD_CAPS LT(_MOD, KC_CAPS)
#define MOD_ENT LT(_MOD, KC_ENT)
#define MOD_ESC LT(_MOD, KC_ESC)
#define MOD_LEAD LT(_MOD, KC_LEAD)

#define LCTL_DEL LCTL_T(KC_DEL)
#define LCTL_INS LCTL_T(KC_INS)

#define RALT_APP RALT_T(KC_APP)
#define RALT_ENT RALT_T(KC_ENT)

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
        // | ^    | 1    | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 0    | _    | -    | BSPC | HOME |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | TAB  | Q    | W    | E    | R    | T    | Z    | U    | I    | O    | P    | /    | ´    | ENT  | PGUP |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+      +------+
        // | M_CP | A    | S    | D    | F    | G    | H    | J    | K    | L    | ¨    | '    | #    |      | PGDN |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | SHFT | (    | Y    | X    | C    | V    | B    | N    | M    | ,    | .    | )    | SHFT | UP   | END  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | CTRL | CMD  | ALT  |                  SPACE                  | ALTG | MOD  | CTRL | LEFT | DOWN | RGHT |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        KC_ESC,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DEL,         KC_MUTE,
        KC_GRV,         DE_1,           DE_2,           DE_3,           DE_4,           DE_5,           DE_6,           DE_7,           DE_8,           DE_9,           DE_0,           DE_UNDS,        DE_MINS,        KC_BSPC,        KC_HOME,
        KC_TAB,         DE_Q,           DE_W,           DE_E,           DE_R,           DE_T,           DE_Z,           DE_U,           DE_I,           DE_O,           DE_P,           DE_SLSH,        DE_ACUT,                        KC_PGUP,
        MOD_CAPS,       DE_A,           DE_S,           DE_D,           DE_F,           DE_G,           DE_H,           DE_J,           DE_K,           DE_L,           DE_DIA,         DE_QUOT,        DE_HASH,        KC_ENT,         KC_PGDN,
        KC_LSFT,        DE_LPRN,        DE_Y,           DE_X,           DE_C,           DE_V,           DE_B,           DE_N,           DE_M,           DE_COMM,        DE_DOT,         DE_RPRN,        KC_RSFT,        KC_UP,          KC_END,
        LCTL_DEL,       KC_LGUI,        KC_LALT,                                                        KC_SPC,                                         RALT_APP,       MOD,            KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_RGHT),
    [_MOD] = LAYOUT(
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | TOG  | F13  | F14  | F15  | F16  | F17  | F18  | F19  | F20  | F21  | F22  | F23  | F24  | RST  | PLAY |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | RMOD | HUD  | HUI  | VAD  | VAI  | SPD  | SPI  | SAD  | SAI  |      |      |      | CTOG |      | M1R  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | LOK  |      |      |      |      |      |      |      |      |      |      |      |      |      | M2R  |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+      +------+
        // | XXX  |      |      |      |      |      |      |      |      |      |      |      |      |      | M1PL |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | SHFT |      |      |      |      |      |      |      |      |      |      |      | SHFT | UP   | M2PL |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // | CTRL | LEFT | RGHT |                  SPACE                  |      | XXX  |      | LEFT | DOWN | RGHT |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        RGB_TOG,        KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         RESET,          KC_MPLY,
        RGB_MOD,        RGB_HUD,        RGB_HUI,        RGB_VAD,        RGB_VAI,        RGB_SPD,        RGB_SPI,        RGB_SAD,        RGB_SAI,        KC_NO,          KC_NO,          KC_NO,          CMB_TOG,        KC_NO,          DM_REC1,
        KC_LOCK,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          DM_REC2,
        KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          DM_PLY1, 
        KC_LSFT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RSFT,        KC_UP,          DM_PLY2,
        LCTL_INS,       KC_LEFT,        KC_RGHT,                                                        KC_SPC,                                         KC_TRNS,        KC_NO,          KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_RGHT),
    /*[] = LAYOUT(
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+      +------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
        // +------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
        // |      |      |      |                                         |      |      |      |      |      |      |
        // +------+------+------+-----------------------------------------+------+------+------+------+------+------+
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO, 
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
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
                tap_code(DE_Y);
            } else {
                tap_code(DE_Z);
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
    return true;
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

const uint16_t PROGMEM xbrc_combo[]  = {DE_X, DE_RPRN, COMBO_END};
const uint16_t PROGMEM ybrc_combo[]  = {DE_Y, DE_RPRN, COMBO_END};
const uint16_t PROGMEM abrc_combo[]  = {DE_A, DE_RPRN, COMBO_END};
const uint16_t PROGMEM ebrc_combo[]  = {DE_E, DE_RPRN, COMBO_END};
const uint16_t PROGMEM ibrc_combo[]  = {DE_I, DE_RPRN, COMBO_END};
const uint16_t PROGMEM obrc_combo[]  = {DE_O, DE_RPRN, COMBO_END};
const uint16_t PROGMEM ubrc_combo[]  = {DE_U, DE_RPRN, COMBO_END};
const uint16_t PROGMEM eqbrc_combo[] = {DE_0, DE_RPRN, COMBO_END};
const uint16_t PROGMEM tml_combo[]   = {DE_T, DE_QUOT, COMBO_END};
const uint16_t PROGMEM pml_combo[]   = {DE_P, DE_QUOT, COMBO_END};
const uint16_t PROGMEM to_combo[]    = {DE_T, DE_O,    COMBO_END};
const uint16_t PROGMEM rnd_combo[]   = {DE_R, DE_N,    COMBO_END};
const uint16_t PROGMEM usr_combo[]   = {DE_T, DE_O, DE_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [X_LMDA] = COMBO_ACTION(xbrc_combo),
  [Y_LMDA] = COMBO_ACTION(ybrc_combo),
  [A_LMDA] = COMBO_ACTION(abrc_combo),
  [E_LMDA] = COMBO_ACTION(ebrc_combo),
  [I_LMDA] = COMBO_ACTION(ibrc_combo),
  [O_LMDA] = COMBO_ACTION(obrc_combo),
  [U_LMDA] = COMBO_ACTION(ubrc_combo),
  [LMDA]   = COMBO_ACTION(eqbrc_combo),
  [MY_ML]  = COMBO_ACTION(tml_combo),
  [WRK_ML] = COMBO_ACTION(pml_combo),
  [MY_NM]  = COMBO_ACTION(to_combo),
  [RND]    = COMBO_ACTION(rnd_combo),
  [USRNM]  = COMBO_ACTION(usr_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case X_LMDA:
            if (pressed) {
                tap_code(DE_X);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_X);
                tap_code(DE_DOT);
            }
            break;
        case Y_LMDA:
            if (pressed) {
                tap_code(DE_Y);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_Y);
                tap_code(DE_DOT);
            }
            break;
        case A_LMDA:
            if (pressed) {
                tap_code(DE_A);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_A);
                tap_code(DE_DOT);            
            }
            break;
        case E_LMDA:
            if (pressed) {
                tap_code(DE_E);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_E);
                tap_code(DE_DOT);
            }
            break;
        case I_LMDA:
            if (pressed) {
                tap_code(DE_I);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_I);
                tap_code(DE_DOT);
            }
            break;
        case O_LMDA:
            if (pressed) {
                tap_code(DE_O);
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
                tap_code(DE_O);
                tap_code(DE_DOT);
            }
            break;
        case LMDA:
            if (pressed) {
                tap_code(KC_SPC);
                register_code(KC_RSFT);
                tap_code(DE_0);
                unregister_code(KC_RSFT);
                register_code(KC_RALT);
                tap_code(DE_RPRN);
                unregister_code(KC_RALT);
                tap_code(KC_SPC);
            }
            break;
        case MY_ML:
            if (pressed) {
                SEND_STRING("tomas" SS_LSFT(SS_TAP(X_QUOTE)) "oligmueller.eu");
            }
            break;
        case WRK_ML:
            if (pressed) {
                SEND_STRING("tomas.oligmueller" SS_LSFT(SS_TAP(X_QUOTE)) "performio.de");
            }
            break;
        case MY_NM:
            if (pressed) {
                SEND_STRING("Tomas Oligmueller");
            }
            break;
        case USRNM:
            if (pressed) {
                SEND_STRING("Tomas.Oligmueller");
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

#ifdef KEY_OVERRIDE_ENABLE
const key_override_t **key_overrides = (const key_override_t *[]) {
    NULL //
};
#endif 


#ifdef LEADER_ENABLE
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;

        // =>
        SEQ_TWO_KEYS(DE_RPRN, DE_RPRN) {
            register_code(KC_RSFT);
            tap_code(DE_0);
            unregister_code(KC_RSFT);
            register_code(KC_RALT);
            tap_code(DE_RPRN);
            unregister_code(KC_RALT);
        }

        // email address
        SEQ_TWO_KEYS(DE_QUOT, DE_QUOT) {
            SEND_STRING("tomas" SS_LSFT(SS_TAP(X_QUOTE)) "oligmueller.eu");
        }

        // username
        SEQ_THREE_KEYS(DE_DOT, DE_T, DE_O) {
            SEND_STRING("Tomas.Oligmueller");
        }

        // name
        SEQ_TWO_KEYS(DE_T, DE_O) {
            SEND_STRING("Tomas Oligmueller");
        }

        // random 
        SEQ_TWO_KEYS(DE_R, DE_D) {
            for (int i = 0; i < 6; ++i)
            {
                tap_random_base64();
            }
        }

        leader_end();
    }
}
#endif
