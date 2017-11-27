#include "Adafruit_PCD8544.h"

#ifdef __cplusplus
extern "C"
{
#endif

Adafruit_PCD8544 mgos_PCD8544_create(int8_t SCLK, int8_t DIN, int8_t DC, int8_t CS, int8_t RST);

void mgos_PCD8544_begin(Adafruit_PCD8544* ctx, uint8_t contrast = 40, uint8_t bias = 0x04);

void mgos_PCD8544_command(Adafruit_PCD8544* ctx, uint8_t c);
void mgos_PCD8544_data(Adafruit_PCD8544* ctx, uint8_t c);

void mgos_PCD8544_setContrast(Adafruit_PCD8544* ctx, uint8_t val);
void mgos_PCD8544_clearDisplay(Adafruit_PCD8544* ctx, void);
void mgos_PCD8544_display(Adafruit_PCD8544* ctx);

void mgos_PCD8544_drawPixel(Adafruit_PCD8544* ctx, int16_t x, int16_t y, uint16_t color);
uint8_t mgos_PCD8544_getPixel(Adafruit_PCD8544* ctx, int8_t x, int8_t y);

#ifdef __cplusplus
}
#endif  /* __cplusplus */