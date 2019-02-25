#include QMK_KEYBOARD_H
#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include <print.h>

#define LCGS(code) LCTL(LGUI(LSFT(code)))
#define LCS(code) LCTL(LSFT(code))

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  RGB_SLD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    // left hand
    LGUI(KC_L),         KC_1,               KC_2,               KC_3,               KC_4,               KC_5,               KC_6,               
    KC_GRV,             KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,               MO(1),              
    KC_TAB,             KC_A,               KC_S,               KC_D,               KC_F,               KC_G,               
    KC_LSFT,            KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,               MO(4),              
    MO(5),              LCTL(KC_LALT),      KC_PGDN,            KC_PGUP,            LCTL(KC_SPC),       
                                                                                                        LCTL(KC_INS),       LSFT(KC_INS),       
                                                                                                                            KC_ENT,             
                                                                                    LALT_T(KC_SPC),     KC_LCTL,            KC_DEL,             
        // right hand
        KC_LCMD,            KC_7,               KC_8,               KC_9,               KC_0,               KC_MINS,            KC_EQL,             
        MO(1),              KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,               KC_BSLS,            
                            KC_H,               KC_J,               KC_K,               KC_L,               KC_SCLN,            KC_QUOT,            
        KC_ESC,             KC_N,               KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,            KC_RSFT,            
        MO(4),              KC_HOME,            KC_END,             KC_ALGR,            TO(2),              
        LALT(LSFT(KC_X)),   LSFT(KC_F6),        
        _______,            
        KC_MEH,             KC_ENT,             KC_BSPC
    ),


  [1] = LAYOUT_ergodox(
    // left hand
    _______,            KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,              
    _______,            KC_CIRC,            KC_DLR,             KC_LCBR,            KC_RCBR,            XXXXXXX,            _______,            
    _______,            KC_COLN,            KC_EQL,             KC_LPRN,            KC_RPRN,            KC_AT,              
    _______,            KC_EXLM,            KC_PERC,            KC_LBRC,            KC_RBRC,            XXXXXXX,            _______,            
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            KC_F7,              KC_F8,              KC_F9,              KC_F10,             KC_F11,             KC_F12,             
        _______,            KC_AMPR,            KC_EXLM,            KC_QUES,            KC_UNDS,            XXXXXXX,            _______,            
                            KC_DQUO,            KC_PLUS,            KC_ASTR,            KC_MINS,            _______,            _______,            
        _______,            KC_BSLS,            KC_HASH,            KC_PIPE,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


  [2] = LAYOUT_ergodox(
    // left hand
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            _______,            _______,            RALT(KC_W),         
                            _______,            _______,            _______,            _______,            RALT(KC_P),         RALT(KC_Q),         
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            TO(3),              
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


  [3] = LAYOUT_ergodox(
    // left hand
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            _______,            _______,            RALT(KC_W),         
                            _______,            _______,            _______,            _______,            RALT(KC_Z),         RALT(KC_L),         
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            TO(6),              
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


  [4] = LAYOUT_ergodox(
    // left hand
    _______,            KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,              
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            
    KC_LSFT,            KC_LSFT,            KC_LSFT,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            KC_F7,              KC_F8,              KC_F9,              KC_F10,             KC_F11,             KC_F12,             
        _______,            XXXXXXX,            KC_PGUP,            KC_UP,              KC_PGDN,            XXXXXXX,            _______,            
                            KC_HOME,            KC_LEFT,            KC_DOWN,            KC_RGHT,            KC_END,             _______,            
        _______,            KC_INS,             _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


  [5] = LAYOUT_ergodox(
    // left hand
    _______,            KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_F6,              
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            _______,            _______,            _______,            _______,            _______,            LCS(KC_PSCR),       
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            KC_F7,              KC_F8,              KC_F9,              KC_F10,             KC_F11,             KC_F12,             
        _______,            _______,            LCA(LSFT(KC_UP)),   LCTL(LGUI(KC_UP)),  LCA(LSFT(KC_DOWN)), _______,            _______,            
                            SGUI(KC_LEFT),      LCTL(LGUI(KC_LEFT)),LCTL(LGUI(KC_DOWN)),LCTL(LGUI(KC_RGHT)),SGUI(KC_RGHT),      _______,            
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            _______,            
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


  [6] = LAYOUT_ergodox(
    // left hand
    _______,            _______,            _______,            _______,            _______,            _______,            _______,            
    _______,            KC_Q,               KC_W,               KC_F,               KC_P,               KC_G,               _______,            
    _______,            KC_A,               KC_R,               KC_S,               KC_T,               KC_D,               
    _______,            KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,               _______,            
    _______,            _______,            _______,            _______,            _______,            
                                                                                                        _______,            _______,            
                                                                                                                            _______,            
                                                                                    _______,            _______,            _______,            
        // right hand
        _______,            _______,            _______,            _______,            _______,            _______,            _______,            
        _______,            KC_J,               KC_L,               KC_U,               KC_Y,               KC_SCLN,            _______,            
                            KC_H,               KC_N,               KC_E,               KC_I,               KC_O,               _______,            
        _______,            KC_K,               KC_M,               _______,            _______,            _______,            _______,            
        _______,            _______,            _______,            _______,            TO(0),              
        _______,            _______,            
        _______,            
        _______,            _______,            _______
    ),


};

bool suspended = false;
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint8_t layer = biton32(layer_state);

  uprintf(
    "{\"keylog\":true,\"col\":%d,\"row\":%d,\"pressed\":%d,\"layer\":%d}\n",
    record->event.key.row,
    record->event.key.col,
    record->event.pressed,
    layer
  );
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
    }
    return state;

};
