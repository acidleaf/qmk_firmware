#pragma once


// Split keyboard configurations
#define SPLIT_USB_DETECT
#define SPLIT_LAYER_STATE_ENABLE


// `Serial` driver configuration
#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_TX_PIN GP28
#define SERIAL_USART_RX_PIN GP27
#define SERIAL_USART_FULL_DUPLEX

// RP2040 double tap reset
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN GP21
#define RGB_MATRIX_LED_COUNT 54
#define RGB_MATRIX_STARTUP_HUE 80
