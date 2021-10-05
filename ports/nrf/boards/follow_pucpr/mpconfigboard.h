#include "nrfx/hal/nrf_gpio.h"

#define MICROPY_HW_BOARD_NAME       "Follow 2021"
#define MICROPY_HW_MCU_NAME         "nRF52840"

#define MICROPY_HW_LED_STATUS          (&pin_P1_11)

#define BOARD_HAS_32KHZ_XTAL 0

#define DEFAULT_I2C_BUS_SCL         (&pin_P0_28)
#define DEFAULT_I2C_BUS_SDA         (&pin_P0_03)

#define DEFAULT_SPI_BUS_SCK         (&pin_P0_01)
#define DEFAULT_SPI_BUS_MOSI        (&pin_P1_10)
#define DEFAULT_SPI_BUS_MISO        (&pin_P1_09)
