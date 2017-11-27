let PCD8544 = {
  create: ffi('void mgos_PCD8544_create(int8_t SCLK, int8_t DIN, int8_t DC, int8_t RST)'),
  begin: ffi('void mgos_PCD8544_begin(uint8_t contrast = 40, uint8_t bias = 0x04)'),
  command: ffi('void mgos_PCD8544_command(uint8_t c)'),
  data: ffi('void mgos_PCD8544_data(uint8_t c)'),
  setContrast: ffi('void mgos_PCD8544_setContrast(uint8_t val)'),
  clearDisplay: ffi('void mgos_PCD8544_clearDisplay(void)'),
  display: ffi('void mgos_PCD8544_display()'),
  drawPixel: ffi('void mgos_PCD8544_drawPixel(int16_t x, int16_t y, uint16_t color)'),
  getPixel: ffi('uint8_t mgos_PCD8544_getPixel(int8_t x, int8_t y)'),
};
