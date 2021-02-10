#include "driver/spi_master.h"

#ifdef CONFIG_IDF_TARGET_ESP32
#define LCD_HOST HSPI_HOST
#define DMA_CHAN 2

// #define PIN_NUM_MISO 25
// #define PIN_NUM_MOSI 23
// #define PIN_NUM_CLK  19
// #define PIN_NUM_CS   22

// #define PIN_NUM_DC   21
// #define PIN_NUM_RST  18
// #define PIN_NUM_BCKL 5

//TTGO
#define PIN_NUM_MISO 23
#define PIN_NUM_MOSI 19
#define PIN_NUM_CLK 18
#define PIN_NUM_CS 5

#define PIN_NUM_DC 16
#define PIN_NUM_RST 23
#define PIN_NUM_BCKL 4

#elif defined CONFIG_IDF_TARGET_ESP32S2BETA
#define LCD_HOST SPI2_HOST
#define DMA_CHAN LCD_HOST

#define PIN_NUM_MISO 37
#define PIN_NUM_MOSI 35
#define PIN_NUM_CLK 36
#define PIN_NUM_CS 34

#define PIN_NUM_DC 4
#define PIN_NUM_RST 5
#define PIN_NUM_BCKL 6
#endif

//To speed up transfers, every SPI transfer sends a bunch of lines. This define specifies how many. More means more memory use,
//but less overhead for setting up / finishing transfers. Make sure 240 is dividable by this.
#define PARALLEL_LINES 16

spi_device_handle_t lcd_init();