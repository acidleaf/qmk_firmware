#include "leaf40.h"
#include "matrix.h"


void board_init(void) {
    // B9 is configured as I2C1_SDA in the board file; that function must be
    // disabled before using B7 as I2C1_SDA.
    setPinInputHigh(B9);
}

// Post initialization
void keyboard_post_init_kb() {
	// This pin should have been connected to ground, write it to low to simulate that
	setPinOutput(A9);
	writePinLow(A9);
}


#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {{
	// Key matrix to LED index
	{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 },
	{ 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12 },
	{ 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35 },
	{ 46, 45, 44, 43, 42, NO_LED, 41, 40, 39, 38, 37, 36 },
}, {
	// Row 0
	{ 0, 0 },
	{ 20, 0 },
	{ 40, 0 },
	{ 60, 0 },
	{ 80, 0 },
	{ 100, 0 },
	{ 120, 0 },
	{ 140, 0 },
	{ 160, 0 },
	{ 180, 0 },
	{ 200, 0 },
	{ 220, 0 },
	
	// Row 1
	{ 220, 20 },
	{ 200, 20 },
	{ 180, 20 },
	{ 160, 20 },
	{ 140, 20 },
	{ 120, 20 },
	{ 100, 20 },
	{ 80, 20 },
	{ 60, 20 },
	{ 40, 20 },
	{ 20, 20 },
	{ 0, 20 },
	
	// Row 2
	{ 0, 40 },
	{ 20, 40 },
	{ 40, 40 },
	{ 60, 40 },
	{ 80, 40 },
	{ 100, 40 },
	{ 120, 40 },
	{ 140, 40 },
	{ 160, 40 },
	{ 180, 40 },
	{ 200, 40 },
	{ 220, 40 },
	
	// Row 3
	{ 220, 60 },
	{ 200, 60 },
	{ 180, 60 },
	{ 160, 60 },
	{ 140, 60 },
	//{ 120, 60 },
	{ 110, 60 },		// Spacebar
	{ 90, 60 },
	{ 60, 60 },
	{ 40, 60 },
	{ 20, 60 },
	{ 0, 60 },
}, {
	// Row 0
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	
	// Row 1
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	
	// Row 2
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	
	// Row 3
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
	LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
}};


#endif