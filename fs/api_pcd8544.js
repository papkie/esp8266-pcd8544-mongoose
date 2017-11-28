let PCD8544 = {
  create: ffi('void *mgos_PCD8544_create(char SCLK, char DIN, char DC, char CS, char RST)'),
  begin: ffi('void mgos_PCD8544_begin(void* ctx, unsigned char contrast, unsigned char bias)'),
  command: ffi('void mgos_PCD8544_command(void* ctx, unsigned char c)'),
  data: ffi('void mgos_PCD8544_data(void* ctx, unsigned char c)'),
  setContrast: ffi('void mgos_PCD8544_setContrast(void* ctx, unsigned char val)'),
  clearDisplay: ffi('void mgos_PCD8544_clearDisplay(void* ctx)'),
  display: ffi('void mgos_PCD8544_display(void* ctx)'),
  drawPixel: ffi('void mgos_PCD8544_drawPixel(void* ctx, short x, short y, unsigned short color)'),
};
