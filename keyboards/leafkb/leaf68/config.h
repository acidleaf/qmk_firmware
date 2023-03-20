#pragma once



#define RGB_DI_PIN A8
#define RGB_MATRIX_LED_COUNT 68

#define WS2812_DRIVER pwm
#define WS2812_PWM_DRIVER PWMD2
#define WS2812_PWM_CHANNEL 1
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_DMA_CHANNEL 2

#ifdef RGB_MATRIX_ENABLE
#	define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#	define RGB_MATRIX_STARTUP_HUE 80
#	define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#	define RGB_MATRIX_KEYPRESSES

#	define ENABLE_RGB_MATRIX_BREATHING
#	define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#	define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#	define ENABLE_RGB_MATRIX_CYCLE_ALL
#	define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#	define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#	define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#	define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#	define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#	define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#	define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#	define ENABLE_RGB_MATlRIX_DUAL_BEACON
#	define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#	define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#	define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#	define ENABLE_RGB_MATRIX_SPLASH
#	define ENABLE_RGB_MATRIX_MULTISPLASH
#	define ENABLE_RGB_MATRIX_SOLID_SPLASH
#	define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif