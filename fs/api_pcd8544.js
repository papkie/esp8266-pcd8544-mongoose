let PCD8544 = {
  create: ffi('void *mgos_PCD8544_create(char SCLK, char DIN, char DC, char RST)'),
  begin: ffi('void mgos_PCD8544_begin(unsigned char contrast, unsigned char bias)'),
  command: ffi('void mgos_PCD8544_command(unsigned char c)'),
  data: ffi('void mgos_PCD8544_data(unsigned char c)'),
  setContrast: ffi('void mgos_PCD8544_setContrast(unsigned char val)'),
  clearDisplay: ffi('void mgos_PCD8544_clearDisplay()'),
  display: ffi('void mgos_PCD8544_display()'),
  drawPixel: ffi('void mgos_PCD8544_drawPixel(short x, short y, unsigned short color)'),
};
