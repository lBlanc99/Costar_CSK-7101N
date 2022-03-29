#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_default(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, 
		KC_LCTL, KC_LGUI, KC_F9, KC_9, KC_SPC, KC_RALT, KC_RCTL, 
		KC_PGDN, KC_PGUP, KC_END, KC_HOME, KC_PAUS, KC_PSCR, KC_F12, KC_F11, KC_F10, 
		KC_PAST, KC_PSLS, KC_SLCK, KC_NLCK, KC_BSPC, KC_BSLS, KC_EQL, KC_MINS, KC_0, 
		KC_PMNS, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_LBRC, KC_P, KC_O, 
		KC_PPLS, KC_P6, KC_P5, KC_P4, KC_ENT, KC_QUOT, KC_SCLN, KC_L, 
		KC_PENT, KC_P3, KC_P2, KC_P1, KC_UP, KC_RSFT, KC_SLSH, KC_DOT, 
		KC_PDOT, KC_P0, KC_RGHT, KC_DOWN, KC_LEFT, KC_DEL, KC_INS),

	[1] = LAYOUT_default(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, 
		KC_LCTL, KC_LGUI, KC_F9, KC_9, KC_SPC, KC_RALT, KC_RCTL, 
		KC_PGDN, KC_PGUP, KC_END, KC_HOME, KC_PAUS, KC_PSCR, KC_F12, KC_F11, KC_F10, 
		KC_PAST, KC_PSLS, KC_SLCK, KC_NLCK, KC_BSPC, KC_BSLS, KC_EQL, KC_MINS, KC_0, 
		KC_PMNS, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_LBRC, KC_P, KC_O, 
		KC_PPLS, KC_P6, KC_P5, KC_P4, KC_ENT, KC_QUOT, KC_SCLN, KC_L, 
		KC_PENT, KC_P3, KC_P2, KC_P1, KC_UP, KC_RSFT, KC_SLSH, KC_DOT, 
		KC_PDOT, KC_P0, KC_RGHT, KC_DOWN, KC_LEFT, KC_DEL, KC_INS),

    	[2] = LAYOUT_default(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, 
		KC_LCTL, KC_LGUI, KC_F9, KC_9, KC_SPC, KC_RALT, KC_RCTL, 
		KC_PGDN, KC_PGUP, KC_END, KC_HOME, KC_PAUS, KC_PSCR, KC_F12, KC_F11, KC_F10, 
		KC_PAST, KC_PSLS, KC_SLCK, KC_NLCK, KC_BSPC, KC_BSLS, KC_EQL, KC_MINS, KC_0, 
		KC_PMNS, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_LBRC, KC_P, KC_O, 
		KC_PPLS, KC_P6, KC_P5, KC_P4, KC_ENT, KC_QUOT, KC_SCLN, KC_L, 
		KC_PENT, KC_P3, KC_P2, KC_P1, KC_UP, KC_RSFT, KC_SLSH, KC_DOT, 
		KC_PDOT, KC_P0, KC_RGHT, KC_DOWN, KC_LEFT, KC_DEL, KC_INS),

        	[3] = LAYOUT_default(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, 
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, 
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, 
		KC_LCTL, KC_LGUI, KC_F9, KC_9, KC_SPC, KC_RALT, KC_RCTL, 
		KC_PGDN, KC_PGUP, KC_END, KC_HOME, KC_PAUS, KC_PSCR, KC_F12, KC_F11, KC_F10, 
		KC_PAST, KC_PSLS, KC_SLCK, KC_NLCK, KC_BSPC, KC_BSLS, KC_EQL, KC_MINS, KC_0, 
		KC_PMNS, KC_P9, KC_P8, KC_P7, KC_RBRC, KC_LBRC, KC_P, KC_O, 
		KC_PPLS, KC_P6, KC_P5, KC_P4, KC_ENT, KC_QUOT, KC_SCLN, KC_L, 
		KC_PENT, KC_P3, KC_P2, KC_P1, KC_UP, KC_RSFT, KC_SLSH, KC_DOT, 
		KC_PDOT, KC_P0, KC_RGHT, KC_DOWN, KC_LEFT, KC_DEL, KC_INS),

	

};



void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}


void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		DDRD |= (1 << 4); PORTD &= ~(1 << 4);
	} else {
		DDRD &= ~(1 << 4); PORTD &= ~(1 << 4);
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRD |= (1 << 7); PORTD &= ~(1 << 7);
	} else {
		DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		DDRD |= (1 << 6); PORTD &= ~(1 << 6);
	} else {
		DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
