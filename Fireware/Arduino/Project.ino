#include <Wire.h>
#include <Servo.h>

// ------------ PIN CONFIGURATION ------------
#define MQ2_PIN A0
#define BUZZER_PIN 3
#define RED_LED_PIN 4
#define SERVO_PIN 9

#define OLED_ADDR 0x3C

// MQ-2 threshold: sensor ke according calibrate karein
#define GAS_THRESHOLD 400

Servo windowServo;

// ------------ FONT DATA ------------
const byte font[][5] = {
  {0x7E,0x11,0x11,0x11,0x7E}, // A
  {0x7F,0x49,0x49,0x49,0x36}, // B
  {0x3E,0x41,0x41,0x41,0x22}, // C
  {0x7F,0x41,0x41,0x22,0x1C}, // D
  {0x7F,0x49,0x49,0x49,0x41}, // E
  {0x7F,0x09,0x09,0x09,0x01}, // F
  {0x3E,0x41,0x49,0x49,0x7A}, // G
  {0x7F,0x08,0x08,0x08,0x7F}, // H
  {0x00,0x41,0x7F,0x41,0x00}, // I
  {0x20,0x40,0x41,0x3F,0x01}, // J
  {0x7F,0x08,0x14,0x22,0x41}, // K
  {0x7F,0x40,0x40,0x40,0x40}, // L
  {0x7F,0x02,0x0C,0x02,0x7F}, // M
  {0x7F,0x04,0x08,0x10,0x7F}, // N
  {0x3E,0x41,0x41,0x41,0x3E}, // O
  {0x7F,0x09,0x09,0x09,0x06}, // P
  {0x3E,0x41,0x51,0x21,0x5E}, // Q
  {0x7F,0x09,0x19,0x29,0x46}, // R
  {0x46,0x49,0x49,0x49,0x31}, // S
  {0x01,0x01,0x7F,0x01,0x01}, // T
  {0x3F,0x40,0x40,0x40,0x3F}, // U
  {0x1F,0x20,0x40,0x20,0x1F}, // V
  {0x3F,0x40,0x38,0x40,0x3F}, // W
  {0x63,0x14,0x08,0x14,0x63}, // X
  {0x07,0x08,0x70,0x08,0x07}, // Y
  {0x61,0x51,0x49,0x45,0x43}, // Z
  {0x00,0x00,0x00,0x00,0x00}, // SPACE
  {0x00,0x06,0x09,0x09,0x06}, // .
  {0x00,0x36,0x36,0x00,0x00}, // :
  {0x08,0x08,0x08,0x08,0x08}, // -
  {0x00,0x60,0x60,0x00,0x00}, // !
};

// ------------ OLED COMMAND ------------
void oledCommand(byte cmd) {
  Wire.beginTransmission(OLED_ADDR);
  Wire.write(0x00);
  Wire.write(cmd);
  Wire.endTransmission();
}

// ------------ OLED DATA ------------
void oledData(byte data) {
  Wire.beginTransmission(OLED_ADDR);
  Wire.write(0x40);
  Wire.write(data);
  Wire.endTransmission();
}

// ------------ OLED INITIALIZATION ------------
void oledInit() {
  delay(100);

  oledCommand(0xAE);
  oledCommand(0xD5);
  oledCommand(0x80);
  oledCommand(0xA8);
  oledCommand(0x3F);
  oledCommand(0xD3);
  oledCommand(0x00);
  oledCommand(0x40);
  oledCommand(0x8D);
  oledCommand(0x14);
  oledCommand(0x20);
  oledCommand(0x02);
  oledCommand(0xA1);
  oledCommand(0xC8);
  oledCommand(0xDA);
  oledCommand(0x12);
  oledCommand(0x81);
  oledCommand(0x7F);
  oledCommand(0xD9);
  oledCommand(0xF1);
  oledCommand(0xDB);
  oledCommand(0x40);
  oledCommand(0xA4);
  oledCommand(0xA6);
  oledCommand(0xAF);
}

// ------------ CLEAR OLED ------------
void oledClear() {
  for (byte page = 0; page < 8; page++) {
    oledCommand(0xB0 + page);
    oledCommand(0x00);
    oledCommand(0x10);

    for (byte col = 0; col < 128; col++) {
      oledData(0x00);
    }
  }
}

// ------------ CHARACTER INDEX ------------
byte charIndex(char c) {
  if (c >= 'A' && c <= 'Z') return c - 'A';

  if (c == ' ') return 26;
  if (c == '.') return 27;
  if (c == ':') return 28;
  if (c == '-') return 29;
  if (c == '!') return 30;

  return 26;
}

// ------------ SET OLED POSITION ------------
void oledPosition(byte page, byte column) {
  oledCommand(0xB0 + page);
  oledCommand(0x00 | (column & 0x0F));
  oledCommand(0x10 | (column >> 4));
}

// ------------ PRINT TEXT ------------
void oledText(byte page, byte column, const char *text) {
  oledPosition(page, column);

  while (*text) {
    char c = *text++;

    if (c >= 'a' && c <= 'z') {
      c = c - 'a' + 'A';
    }

    byte index = charIndex(c);

    for (byte i = 0; i < 5; i++) {
      oledData(font[index][i]);
    }

    oledData(0x00);
  }
}

// ------------ SETUP ------------
void setup() {
  pinMode(MQ2_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);

  windowServo.attach(SERVO_PIN);
  windowServo.write(0);

  Wire.begin();
  oledInit();
  oledClear();

  oledText(1, 4, "DEVELOPED BY");
  oledText(3, 4, "RITIK");
  oledText(4, 4, "PRAJAPAT");

  delay(5000);

  oledClear();
}

// ------------ MAIN LOOP ------------
void loop() {
  int gasValue = analogRead(MQ2_PIN);

  if (gasValue >= GAS_THRESHOLD) {

    oledClear();
    oledText(1, 10, "KITCHEN");
    oledText(3, 10, "ALERT!");

    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    windowServo.write(90);

  } else {

    oledClear();
    oledText(3, 40, "SAFE");

    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    windowServo.write(0);
  }

  delay(300);
}
