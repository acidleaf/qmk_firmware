#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * │ ESC  │  Q  │  W  │  E  │   R   │   T   │  Y  │   U   │  I  │  O   │  P   │ BSPC  │ ENC |
     * │ TAB  │  A  │  S  │  D  │   F   │   G   │  H  │   J   │  K  │  L   │  ;   │   '   │
     * │ LSFT │  Z  │  X  │  C  │   V   │   B   │  N  │   M   │  ,  │  .   │  UP  │ ENTER │
     * │ LCTL │ FN1 │ WIN │ ALT │ Lower │    SPACE    │ Raise │ FN2 │ LEFT │ DOWN │ RIGHT |
     */
    [0] = LAYOUT(
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL,   MO(3),   KC_LWIN, KC_LALT, MO(1),        KC_SPC,       MO(2),   MO(3),   KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    
    [1] = LAYOUT(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_DEL,
        KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_TRNS,   KC_TRNS,   KC_MINUS,  KC_EQUAL,  KC_BSLS,
        KC_TRNS,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_TRNS,   KC_SLASH,  KC_HOME,   KC_TRNS,   KC_END,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,         KC_LSFT,        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    
    [2] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_HOME,   KC_UP,   KC_END,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_LEFT,   KC_DOWN,   KC_RIGHT,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,         KC_TRNS,        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    
    [3] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_SAD,   KC_TRNS,   KC_TRNS,   RGB_SAI,   KC_TRNS,   KC_TRNS,   KC_TRNS,   QK_BOOT,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_VAD,   KC_TRNS,   KC_TRNS,   RGB_VAI,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_HUD,   RGB_SPD,   RGB_SPI,   RGB_HUI,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   RGB_RMOD,         RGB_TOG,        RGB_MOD,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};


#ifdef OLED_ENABLE
// OLED function
bool oled_task_user(void) {
    
    // Host Keyboard Layer Status
    oled_write_P(PSTR(" Jer Shyan's Keyboard"), false);
    oled_advance_page(true);
    oled_write_P(PSTR("  !! DO NOT TOUCH !!"), false);
    oled_advance_page(true);
    
    const int curLayer = get_highest_layer(layer_state);
    oled_write_P(PSTR("Layer: "), false);
    oled_write_char(curLayer + '1', false);
    
    return false;
}
#endif


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) tap_code(KC_VOLU);
    else tap_code(KC_VOLD);
    return false;
}