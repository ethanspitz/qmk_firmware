
/* A QWERTY 3 Layer layout for the Dactyl Manuform 6x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _GAME 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ESCMO LT(_RAISE,KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [_QWERTY] = LAYOUT_6x6(
     KC_EQUAL,  KC_1  , KC_2  , KC_3  ,  KC_4  , KC_5  ,       KC_6  , KC_7   , KC_8   , KC_9   , KC_0  ,KC_MINS,
     KC_TAB  ,  KC_Q  , KC_W  , KC_E  ,  KC_R  , KC_T  ,       KC_Y  , KC_U   , KC_I   , KC_O   , KC_P  ,KC_BSLS,
     ESCMO   ,  KC_A  , KC_S  , KC_D  ,  KC_F  , KC_G  ,       KC_H  , KC_J   , KC_K   , KC_L   ,KC_SCLN,KC_QUOT,
     KC_LSFT ,  KC_Z  , KC_X  , KC_C  ,  KC_V  , KC_B  ,       KC_N  , KC_M   ,KC_COMM , KC_DOT ,KC_SLSH,KC_RSFT,
     KC_LCTL ,KC_GRAVE,_______,_______, RAISE  ,                       LOWER  ,KC_DOWN , KC_UP  ,KC_RIGHT,KC_RCTL,

                                        KC_LALT, KC_LGUI,     KC_RGUI, KC_RALT,
                                                 KC_HOME,     KC_PGUP,
                               KC_BSPC, KC_DEL , KC_END ,     KC_PGDN, KC_ENT , KC_SPC
   ),

   [_LOWER] = LAYOUT_6x6(
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LCBR,_______ ,_______ ,_______ ,_______,KC_RCBR,
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LBRC,_______ ,_______ ,_______ ,_______,KC_RBRC,
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LEFT,KC_DOWN ,KC_UP   ,KC_RIGHT,_______,_______,
     _______ ,_______ ,_______,_______,_______ ,_______,      _______,_______ ,_______ ,_______ ,_______,_______,
     _______ ,_______ ,_______,_______,_______ ,                      _______ ,_______ ,_______ ,_______,_______,

                                        _______, _______,     _______,_______,
                                                 _______,     _______,
                               RESET  ,_______ , _______,     _______,_______ ,RESET
   ),

   [_RAISE] = LAYOUT_6x6(
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LCBR,_______ ,_______ ,_______ ,_______,KC_RCBR,
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LBRC,_______ ,_______ ,_______ ,_______,KC_RBRC,
     _______ ,_______ ,_______,_______,_______ ,_______,      KC_LEFT,KC_DOWN ,KC_UP   ,KC_RIGHT,_______,_______,
     _______ ,_______ ,_______,_______,_______ ,_______,      _______,_______ ,_______ ,_______ ,_______,_______,
     _______ ,_______ ,_______,_______,_______ ,                      _______ ,_______ ,_______ ,_______,_______,

                                        _______, _______,     _______,_______,
                                                 _______,     _______,
                               RESET  ,_______ , _______,     _______,_______ ,RESET
   ),

    [_GAME] = LAYOUT_6x6(
     KC_EQUAL,  KC_1  , KC_2  , KC_3  ,  KC_4  , KC_5  ,       KC_6  , KC_7   , KC_8   , KC_9   , KC_0  ,KC_MINS,
     KC_TAB  ,  KC_Q  , KC_W  , KC_E  ,  KC_R  , KC_T  ,       KC_Y  , KC_U   , KC_I   , KC_O   , KC_P  ,KC_BSLS,
     ESCMO   ,  KC_A  , KC_S  , KC_D  ,  KC_F  , KC_G  ,       KC_H  , KC_J   , KC_K   , KC_L   ,KC_SCLN,KC_QUOT,
     KC_LSFT ,  KC_Z  , KC_X  , KC_C  ,  KC_V  , KC_B  ,       KC_N  , KC_M   ,KC_COMM , KC_DOT ,KC_SLSH,KC_RSFT,
     KC_LCTL ,KC_GRAVE,_______,_______, RAISE  ,                       LOWER  ,KC_DOWN , KC_UP  ,KC_RIGHT,KC_RCTL,

                                        KC_LALT, KC_LGUI,     KC_RGUI, KC_RALT,
                                                 KC_HOME,     KC_PGUP,
                               KC_SPC , KC_DEL , KC_END ,     KC_PGDN, KC_ENT , KC_SPC
   ),
   };
