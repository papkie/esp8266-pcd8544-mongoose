#include "Adafruit_PCD8544.h"

#ifdef __cplusplus
extern "C"
{
#endif

Adafruit_PCD8544* mgos_PCD8544_create(char SCLK, char DIN, char DC, char CS, char RST);

void mgos_PCD8544_begin(Adafruit_PCD8544* ctx, unsigned char contrast, unsigned char bias);

void mgos_PCD8544_command(Adafruit_PCD8544* ctx, unsigned char c);
void mgos_PCD8544_data(Adafruit_PCD8544* ctx, unsigned char c);

void mgos_PCD8544_setContrast(Adafruit_PCD8544* ctx, unsigned char val);
void mgos_PCD8544_clearDisplay(Adafruit_PCD8544* ctx);
void mgos_PCD8544_display(Adafruit_PCD8544* ctx);

void mgos_PCD8544_drawPixel(Adafruit_PCD8544* ctx, short x, short y, unsigned short color);
unsigned char mgos_PCD8544_getPixel(Adafruit_PCD8544* ctx, char x, char y);

#ifdef __cplusplus
}
#endif  /* __cplusplus */