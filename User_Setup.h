#warning "USING MY ESP32-C5 ILI9341 USER_SETUP"

#pragma once

/***************************************************
 *  DISPLAY DRIVER
 ***************************************************/
#define ILI9341_DRIVER

/***************************************************
 *  SCREEN SIZE (important for mapping)
 ***************************************************/
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

/***************************************************
 *  ESP32-C5 SPI PINS (YOUR WIRING)
 ***************************************************/
#define TFT_MOSI 5
#define TFT_MISO 23
#define TFT_SCLK 4

#define TFT_CS   24
#define TFT_DC   2
#define TFT_RST  3

// If your screen has LED/BL pin, uncomment and set
// #define TFT_BL   25   // example GPIO
// #define TFT_BACKLIGHT_ON HIGH

/***************************************************
 *  SPI CONFIG — KEEP CONSERVATIVE FOR C5
 ***************************************************/
#define SPI_FREQUENCY       8000000   // start SAFE (you can raise later)
#define SPI_READ_FREQUENCY  6000000
#define SPI_TOUCH_FREQUENCY 2500000

/***************************************************
 *  DISABLE ESP32-SPECIFIC REGISTER HACKS
 *  (CRITICAL FOR ESP32-C5 / RISC-V)
 ***************************************************/
#define DISABLE_ALL_LIBRARY_WARNINGS

// Force TFT_eSPI to use generic SPI path
#define USE_HSPI_PORT      // prevents VSPI assumptions
#define SPI_PORT SPI       // avoids VSPI/VSPI_HOST usage

/***************************************************
 *  LOAD FONTS (Marauder needs some of these)
 ***************************************************/
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

/***************************************************
 *  OPTIONAL PERFORMANCE SAFETY
 ***************************************************/
// Disable DMA on C5 (safer)
#define TFT_NO_DMA

/***************************************************
 *  END
 ***************************************************/
