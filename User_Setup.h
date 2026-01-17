// ===== DRIVER =====
#define ILI9341_DRIVER

// ===== FORCE CORRECT SPI PERIPHERAL (ESP32-C5) =====
#define SPI_PORT 2

// ===== SPI PINS (confirmed) =====
#define TFT_MOSI 5
#define TFT_MISO 23
#define TFT_SCLK 4
#define TFT_CS   24
#define TFT_DC   2

// Do NOT drive reset
#define TFT_RST  -1

// ===== DISPLAY SIZE =====
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// ===== SPI SPEEDS =====
#define SPI_FREQUENCY        20000000
#define SPI_READ_FREQUENCY  10000000

// Try MODE 3 first (ILI9341 common)
#define TFT_SPI_MODE SPI_MODE3

// Required for some panels
#define TFT_INIT_DELAY 120

// ESP32-C5 cannot DMA
#define TFT_NO_DMA
