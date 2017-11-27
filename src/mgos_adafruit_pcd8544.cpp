#include "mgos_adafruit_pcd8544.h"

Adafruit_PCD8544 mgos_PCD8544_create(int8_t SCLK, int8_t DIN, int8_t DC, int8_t CS, int8_t RST) {
    return new Adafruit_PCD8544(SCLK, DIN, DC, CS, RST);
}

void mgos_PCD8544_begin(Adafruit_PCD8544* ctx, uint8_t contrast = 40, uint8_t bias = 0x04) {
    if (rtc == nullptr) return;
    ctx->begin(contrast, bias)
}

void mgos_PCD8544_command(Adafruit_PCD8544* ctx, uint8_t c) {
    if (rtc == nullptr) return;
    ctx->command(c);
}

void mgos_PCD8544_data(Adafruit_PCD8544* ctx, uint8_t c) {
    if (rtc == nullptr) return;
    ctx->data(c);
}

void mgos_PCD8544_setContrast(Adafruit_PCD8544* ctx, uint8_t val) {
    if (rtc == nullptr) return;
    ctx->setContrast(val);
}

void mgos_PCD8544_clearDisplay(Adafruit_PCD8544* ctx) {
    if (rtc == nullptr) return;
    ctx->clearDisplay();
}

void mgos_PCD8544_display(Adafruit_PCD8544* ctx) {
    if (rtc == nullptr) return;
    ctx->display();
}

void mgos_PCD8544_drawPixel(Adafruit_PCD8544* ctx, int16_t x, int16_t y, uint16_t color) {
    if (rtc == nullptr) return;
    ctx->drawPixel(x, y, color);
}
uint8_t mgos_PCD8544_getPixel(Adafruit_PCD8544* ctx, int8_t x, int8_t y) {
    if (rtc == nullptr) return;
    ctx->getPixel(x, y);
}