#include <Adafruit_PCD8544.h>

#define SCLK 13
#define DIN 11
#define DC 10
#define CS 9
#define RST 8

Adafruit_PCD8544 lcd = Adafruit_PCD8544(SCLK, DIN, DC, CS, RST);

void setup() {
  lcd.begin();
  lcd.setContrast(60);
  lcd.clearDisplay();
  lcd.display();
  Serial.begin(9600);
}

void loop() {
  lcd.clearDisplay(); // clear display before updating voltage reading
  float voltage1 = analogRead(A0) * 0.0048828125;
  float voltage2 = analogRead(A1) * 0.0048828125;
  float voltage3 = analogRead(A2) * 0.0048828125;

  lcd.setCursor(0, 0);
  lcd.print("Vinp 1: ");
  lcd.print(voltage1);
  lcd.print(" V");

  lcd.setCursor(0, 10);
  lcd.print("Vout A: ");
  lcd.print(voltage2);
  lcd.print(" V");

  lcd.setCursor(0, 20);
  lcd.print("Vout B: ");
  lcd.print(voltage3);
  lcd.print(" V");

  float diff1 = voltage2 - voltage1;
  float diff2 = voltage3 - voltage1;

  if (diff1 >= -0.09 && diff1 <= 0.09 && diff2 >= -0.09 && diff2 <= 0.09) {
    lcd.setCursor(0, 30);
    lcd.print("::::::OK::::::");
  } else {
    lcd.setCursor(0, 30);
    lcd.print("::::NOT OK::::");
  }

  lcd.display();
  delay(1000);
}
