#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
#include <stdint.h>

typedef enum {
  BLACK = 0,
  BROWN = 1,
  RED = 2,
  ORANGE = 3,
  YELLOW = 4,
  GREEN = 5,
  BLUE = 6,
  VIOLET = 7,
  GREY = 8,
  WHITE = 9,
} resistor_band_t;

/* static const resistor_band_t COLORS[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; */
/* const resistor_band_t *colors() { return &COLORS; } */

uint16_t color_code(resistor_band_t color);
uint16_t color_code(resistor_band_t color) { return (uint16_t)color; }

#endif
