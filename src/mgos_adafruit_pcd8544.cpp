#include "mgos_adafruit_pcd8544.hpp"

Adafruit_PCD8544* mgos_PCD8544_create(char SCLK, char DIN, char DC, char CS, char RST) {
    return new Adafruit_PCD8544(SCLK, DIN, DC, CS, RST);
}

void mgos_PCD8544_begin(Adafruit_PCD8544* ctx, unsigned char contrast = 40, unsigned char bias = 0x04) {
    if (ctx == nullptr) return;
    ctx->begin(contrast, bias);
}

void mgos_PCD8544_command(Adafruit_PCD8544* ctx, unsigned char c) {
    if (ctx == nullptr) return;
    ctx->command(c);
}

void mgos_PCD8544_data(Adafruit_PCD8544* ctx, unsigned char c) {
    if (ctx == nullptr) return;
    ctx->data(c);
}

void mgos_PCD8544_setContrast(Adafruit_PCD8544* ctx, unsigned char val) {
    if (ctx == nullptr) return;
    ctx->setContrast(val);
}

void mgos_PCD8544_clearDisplay(Adafruit_PCD8544* ctx) {
    if (ctx == nullptr) return;
    ctx->clearDisplay();
}

void mgos_PCD8544_display(Adafruit_PCD8544* ctx) {
    if (ctx == nullptr) return;
    ctx->display();
}

void mgos_PCD8544_drawPixel(Adafruit_PCD8544* ctx, short x, short y, unsigned short color) {
    if (ctx == nullptr) return;
    ctx->drawPixel(x, y, color);
}

unsigned char mgos_PCD8544_getPixel(Adafruit_PCD8544* ctx, char x, char y) {
    if (ctx == nullptr) return;
    return ctx->getPixel(x, y);
}