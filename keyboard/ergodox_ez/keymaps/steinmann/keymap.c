#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "keymap_extras/keymap_german_osx.h"

// Layer names
#define BASE 0 // default layer
#define SYMB 1 // symbol layer
#define MDIA 2 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ^    |   1  |   2  |   3  |   4  |   5  |  /   |           |   \  |   6  |   7  |   8  |   9  |   0  |   ß    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Del   |   Q  |   W  |   E  |   R  |   T  |  ~L1 |           |  ~L1 |   Z  |   U  |   I  |   O  |   P  |   Ü    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |  LCtrl |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   Ö  |  Ä     |
 * |--------+------+------+------+------+------| Hyper|           | Media|------+------+------+------+------+--------|
 * | LShift |   Y  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |Quote | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | <>|  | LGui |   `  |   -  |   +  |                                       | Right| Down |  Up  | Left |   L2 |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Alt  | LGui |       | Alt  |   Esc|
 *                                 ,------+------+------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        DE_OSX_CIRC,         DE_OSX_1,           DE_OSX_2,     DE_OSX_3,     DE_OSX_4,     DE_OSX_5,   DE_OSX_SLSH,
        KC_DELT,         DE_OSX_Q,           DE_OSX_W,     DE_OSX_E,     DE_OSX_R,     DE_OSX_T,   KC_FN1,
        KC_LCTRL,         DE_OSX_A,           DE_OSX_S,     DE_OSX_D,     DE_OSX_F,     DE_OSX_G,
        KC_LSFT,         DE_OSX_Y,           DE_OSX_X,     DE_OSX_C,     DE_OSX_V,     DE_OSX_B,   ALL_T(KC_NO),
        DE_OSX_LESS, KC_LGUI, DE_OSX_ACUT,  DE_OSX_MINS,  DE_OSX_PLUS,
                                               KC_LALT, KC_LGUI,
                                                              KC_HOME,
                                               KC_SPC,KC_BSPC,KC_END,
        // right hand
        DE_OSX_BSLS,     DE_OSX_6,   DE_OSX_7,    DE_OSX_8,    DE_OSX_9,   DE_OSX_0,             DE_OSX_SS,
        KC_FN1,       DE_OSX_Z,   DE_OSX_U,    DE_OSX_I,    DE_OSX_O,   DE_OSX_P,             DE_OSX_UE,
                     DE_OSX_H,   DE_OSX_J,    DE_OSX_K,    DE_OSX_L,   DE_OSX_OE,            DE_OSX_AE,
        MO(2),DE_OSX_N,   DE_OSX_M,    DE_OSX_COMM, DE_OSX_DOT, DE_OSX_QUOT,   KC_RSFT,
                             KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT,          TG(1),
        KC_LALT,KC_ESC,
        KC_PGUP,
        KC_PGDN,KC_TAB, KC_ENT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |    . |   0  |   =  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = KEYMAP(
       // left hand
       KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,DE_OSX_EXLM,DE_OSX_AT,  DE_OSX_LCBR,DE_OSX_RCBR,DE_OSX_PIPE,KC_TRNS,
       KC_TRNS,DE_OSX_HASH,DE_OSX_DLR, DE_OSX_LPRN,DE_OSX_RPRN,DE_OSX_GRV,
       KC_TRNS,DE_OSX_PERC,DE_OSX_CIRC,DE_OSX_LBRC,DE_OSX_RBRC,DE_OSX_TILD,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    DE_OSX_ASTR, KC_F12,
                KC_DOWN, KC_4,   KC_5,    KC_6,    DE_OSX_PLUS, KC_TRNS,
       KC_TRNS, DE_OSX_AMPR, KC_1,   KC_2,    KC_3,    DE_OSX_BSLS, KC_TRNS,
                         KC_TRNS,KC_DOT,  KC_0,    DE_OSX_EQL,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      | Lclk | MsUp | Rclk |      |      |           |      |      |VolDwn| Mute |VolUp |      |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | Btn4 |MsLeft|MsDown|MsRght| Btn5 |------|           |------|      | Prev | Stop | Play | Next |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |WhRght|WhDown| WhUp |WhLeft|WhClk |      |           |      |BwSrch|BwBack|BwHome|BwRefr|BwFwd |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |MsAcl0|MsAcl1|MsAcl2|                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |Brwser|Brwser|
 *                                 | Lclk | Rclk |------|       |------|Back  |Forwd |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[MDIA] = KEYMAP(
       KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_TRNS,
       KC_TRNS, KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5,
       KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN3, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_BTN1, KC_BTN2, KC_TRNS,
    // right hand
       KC_TRNS, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11,
       KC_TRNS, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_F12,
                KC_TRNS, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_TRNS,
       KC_TRNS, KC_WSCH, KC_WBAK, KC_WHOM, KC_WREF, KC_WFWD, KC_TRNS,
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_WBAK, KC_WFWD
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case SYMB:
            ergodox_right_led_1_on();
            break;
        case MDIA:
            ergodox_right_led_2_on();
            break;
        default:
            ergodox_board_led_off();
            break;
    }

};
