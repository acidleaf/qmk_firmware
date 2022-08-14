#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * │ ESC  │  Q  │  W  │  E  │   R   │   T   │  Y  │   U   │  I  │  O   │  P   │ BSPC  │ ENC |
     * │ TAB  │  A  │  S  │  D  │   F   │   G   │  H  │   J   │  K  │  L   │  ;   │   '   │
     * │ LSFT │  Z  │  X  │  C  │   V   │   B   │  N  │   M   │  ,  │  .   │  UP  │ ENTER │
     * │ LCTL │ FN1 │ WIN │ ALT │ Lower │    SPACE    │ Raise │ FN2 │ LEFT │ DOWN │ RIGHT |
     */
    [0] = LAYOUT(
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    QK_BOOT,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
        KC_LCTL,   RGB_TOG, KC_LWIN, KC_LALT, RGB_RMOD, KC_SPC,           RGB_MOD, KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT
    )
};


#ifdef OLED_ENABLE
// OLED function
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR(" Jer Shyan's Keyboard"), false);
    oled_advance_page(true);
    oled_advance_page(true);
    oled_write_P(PSTR("  !! DO NOT TOUCH !!"), false);
    
    return false;
}
#endif


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) tap_code(KC_VOLU);
    else tap_code(KC_VOLD);
    return false;
}