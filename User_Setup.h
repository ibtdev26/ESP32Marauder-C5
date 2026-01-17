#define ILI9341_DRIVER

#define TFT_MOSI 28
#define TFT_MISO 23
#define TFT_SCLK 27
#define TFT_CS   24
#define TFT_DC   2
#define TFT_RST  -1   // use -1 if you did NOT wire RST to a GPIO

#define SPI_FREQUENCY       20000000
#define SPI_READ_FREQUENCY  10000000
#define TFT_NO_DMA
