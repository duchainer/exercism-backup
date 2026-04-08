#include "resistor_color.h"

resistor_band_t MY_COLORS[] = {BLACK, BROWN, RED,    ORANGE, YELLOW,
                               GREEN, BLUE,  VIOLET, GREY,   WHITE};
const resistor_band_t *colors() { return MY_COLORS; }

uint16_t color_code(resistor_band_t color) { return (uint16_t)color; }
