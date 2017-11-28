load('api_config.js');
load('api_timer.js');
load('api_gpio.js');
load('api_pcd8544.js');

let SCLK = 5,
  DIN = 4,
  DC = 14,
  RST = 2,
  CS = 12;

const lcd = PCD8544.init(SCLK, DIN, DC, CS, RST);
PCD8544.display(lcd);
let time = 0;
print("Hello");
Timer.set(10, true, function () {
  PCD8544.setContrast(lcd, time++);
  PCD8544.drawPixel(lcd, 1, 1, 0);
  PCD8544.drawPixel(lcd, 2, 2, 255);
  PCD8544.drawPixel(lcd, 3, 3, 0);
  PCD8544.drawPixel(lcd, 4, 4, 255);
  PCD8544.drawPixel(lcd, 5, 5, 0);
  PCD8544.drawPixel(lcd, 6, 6, 255);
  PCD8544.drawPixel(lcd, 7, 7, 0);
  PCD8544.drawPixel(lcd, 8, 8, 255);
  PCD8544.drawPixel(lcd, 9, 9, 0);
  PCD8544.drawPixel(lcd, 10, 10, 255);
  PCD8544.drawPixel(lcd, 11, 11, 0);
  PCD8544.drawPixel(lcd, 12, 12, 255);
  PCD8544.display(lcd); 
}, null);
