load('api_config.js');
load('api_timer.js');
load('api_pcd8544.js');

let SCLK = 1,
  DIN = 2,
  DC = 3,
  RST = 4;

const lcd = PCD8544.init(SCLK, DIN, DC, RST)

Timer.set(10000 /* 1 sec */ , true /* repeat */ , function () {
  print("Alive")
}, null);
