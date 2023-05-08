#include QMK_KEYBOARD_H

#define F_FN2 LT(2, KC_F)
#define G_FN1 LT(1, KC_G)
#define H_FN1 LT(1, KC_H)
#define J_FN2 LT(2, KC_J)

#define ALT_LGUI ALT_T(KC_LGUI)
#define FN1_SPC LT(1, KC_SPC)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
        KC_TAB,     KC_A,       KC_S,       KC_D,       F_FN2,      G_FN1,      H_FN1,      J_FN2,      KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT,
                                            ALT_LGUI,   KC_LSFT,    FN1_SPC,    MO(2),      MO(3),      KC_RGUI
    ),
    
    [1] = LAYOUT_split_3x6_3(
        KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_DEL,
        KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_MINS,
        KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_0
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_INS,     KC_DEL,
        KC_TRNS,    KC_TRNS,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_MINS,    KC_EQL,     KC_RPRN,    KC_RBRC,    KC_RCBR,    KC_BSLS,    KC_NO,
        KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_UNDS,    KC_PLUS,    KC_NO,      KC_NO,      KC_NO,      KC_PIPE,    KC_TRNS,
                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_TRNS,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    RGB_MOD,    KC_TRNS,
        KC_TRNS,    KC_NO,      KC_NO,      KC_PPLS,    KC_PMNS,    KC_PEQL,    RGB_TOG,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,    KC_TRNS,
                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [4] = LAYOUT_split_3x6_3(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    )
};
