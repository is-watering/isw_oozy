/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_F1,   KC_F2,      KC_F3,              KC_F4,   KC_F5,                KC_F6,           KC_F7,        KC_F8,                 KC_F9,                 KC_F10,     KC_F11,                KC_F12,
		KC_TAB,  LT(1,KC_Q), KC_W,               KC_E,    KC_R,                 KC_T,            KC_Y,         KC_U,                  KC_I,                  KC_O,       KC_P,                  KC_BSPC,
		KC_LSFT, KC_A,       KC_S,               KC_D,    KC_F,                 KC_G,            KC_H,         KC_J,                  KC_K,                  LT(2,KC_L), MT(MOD_RSFT, KC_SCLN), MT(MOD_RCTL, KC_QUOT),
		KC_LCTL, KC_Z,       MT(MOD_LSFT, KC_X), KC_C,    KC_V,                 KC_B,            KC_N,         KC_M,                  MT(MOD_RGUI, KC_COMM), KC_DOT,     KC_UP,                 KC_BTN3,
		MO(1),   KC_LGUI,                        KC_LALT, MT(MOD_LCTL, KC_TAB), LT(1,KC_SPC),    LT(2,KC_ENT), MT(MOD_RALT, KC_SLSH), KC_BSPC,               KC_LEFT,    KC_DOWN,               KC_RGHT
	),

	[1] = LAYOUT(
		XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,
		XXXXXXX, KC_SLSH,    KC_7,    KC_8,    KC_9,    KC_MINS,         RSFT(KC_MINS), RSFT(KC_2), RSFT(KC_3), KC_LBRC,    KC_RBRC, XXXXXXX,
		XXXXXXX, RSFT(KC_8), KC_4,    KC_5,    KC_6,    RSFT(KC_EQL),    RSFT(KC_6),    RSFT(KC_5), RSFT(KC_7), RSFT(KC_4), KC_QUOT, XXXXXXX,
		XXXXXXX, KC_ESC,     KC_1,    KC_2,    KC_3,    KC_EQL,          RSFT(KC_1),    XXXXXXX,    RSFT(KC_9), RSFT(KC_0), KC_PGUP, XXXXXXX,
		XXXXXXX, XXXXXXX,             KC_0,    KC_DOT,  KC_SPC,          MO(3),         KC_BSLS,    KC_BSPC,    KC_HOME,    KC_PGDN, KC_END
	),

	[2] = LAYOUT(
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,    XXXXXXX,       XXXXXXX,       XXXXXXX,
		XXXXXXX, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_BTN1,      KC_BTN3,       KC_BTN2,    RSFT(KC_LBRC), RSFT(KC_RBRC), KC_DEL,
		XXXXXXX, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,      KC_LEFT,      KC_DOWN,       KC_UP,      KC_RIGHT,      RSFT(KC_QUOT), XXXXXXX,
		XXXXXXX, KC_GRV,  KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_HOME,      KC_PGDN,       KC_PGUP,    KC_END,	       KC_PGUP,       XXXXXXX,
		XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,    RSFT(KC_INS), RSFT(KC_BSLS), KC_DEL,     KC_HOME,       KC_PGDN,       KC_END
	),

	[3] = LAYOUT(
		XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		KC_CAPS, RGB_TOG, RGB_VAI,  RGB_VAD, XXXXXXX, XXXXXXX,   XXXXXXX, RCTL(KC_PSCR), KC_PSCR, XXXXXXX, XXXXXXX, QK_BOOT,
		XXXXXXX, RGB_HUI, RGB_HUD,  RGB_SAI, RGB_SAD, XXXXXXX,   XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, RGB_MOD, RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
	),
};


/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
	[1] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
	[2] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
	[3] = { ENCODER_CCW_CW(KC_NO, KC_NO) }
};
#endif
