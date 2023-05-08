#include <Adafruit_PCD8544.h>
const int ledPin = 3;
const int potPin = A2;
const int ledPinN = 5;
const int potPinN = A3;
int potVal;
int ledVal;
int potValL;
int ledValL;

// Initialize the Nokia 5110 LCD screen object
Adafruit_PCD8544 lcd = Adafruit_PCD8544(13, 11, 10, 9, 8);

void setup() {

  pinMode(ledPinN, OUTPUT);
  lcd.begin(); // initialize the LCD screen
  lcd.setContrast(60); // set the contrast of the LCD screen
  lcd.clearDisplay(); // clear the display
  lcd.display(); // display the cleared screen
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
}

void loop() {
  int sensorValueA0 = analogRead(A0); // read the input on A0
  float voltageA0 = sensorValueA0 * (5.0 / 1023.0); // convert the analog reading to a voltage value

  int sensorValueA1 = analogRead(A1); // read the input on A1
  float voltageA1 = sensorValueA1 * (5.0 / 1023.0); // convert the analog reading to a voltage value

  int sensorValueA2 = analogRead(A2); // read the input on A2
  float voltageA2 = sensorValueA2 * (5.0 / 1023.0); // convert the analog reading to a voltage value

  int sensorValueA3 = analogRead(A3); // read the input on A3
  float voltageA3 = sensorValueA3 * (5.0 / 1023.0); // convert the analog reading to a voltage value

  lcd.clearDisplay(); // clear the display
  lcd.setCursor(0,0); // set the cursor position to the top-left corner

  lcd.print("OTPUT A:");
  lcd.print(voltageA0);
  lcd.print("V");

  lcd.setCursor(0,10); // set the cursor position to the next line
  lcd.print("OTPUT B:");
  lcd.print(voltageA1);
  lcd.print("V");

  lcd.setCursor(0,20); // set the cursor position to the next line
  lcd.print("V1:");
  lcd.print(voltageA2);
  lcd.print("V");

  lcd.setCursor(0,30); // set the cursor position to the next line
  lcd.print("V2:");
  lcd.print(voltageA3);
  lcd.print("V");

{
  int potVal = analogRead(potPin);     // Read potentiometer value
  int ledBrightness = map(potVal, 0, 1023, 0, 255);  // Map potentiometer value to LED brightness level
  analogWrite(ledPin, ledBrightness);  // Set PWM output for LED
  Serial.print("Potentiometer: ");
  Serial.print(potVal);
  Serial.print(", LED Brightness: ");
  Serial.println(ledBrightness);
  int potValL = analogRead(potPinN);// Read potentiometer value  int ledBrightness = map(potValL, 0, 1023, 0, 255);  // Map potentiometer value to LED brightness level
  int ledBrightnesss = map(potValL, 0, 1023, 0, 255);
  analogWrite(ledPinN, ledBrightness);  // Set PWM output for LED
  Serial.print("Potentiometer: ");
  Serial.print(potValL);
  Serial.print(", LED Brightness: ");
  Serial.println(ledBrightness);
  
  delay(1);

}
  // Compare the voltage values of V1 and V2 and display the appropriate message
  lcd.setCursor(0,40); // set the cursor position to the next line
  if (voltageA2 > voltageA3) {
    lcd.print("OK");
  } else if (voltageA2 < voltageA3) {
    lcd.print("OK");
  } else {
    lcd.print("NOT OK");
  }

  lcd.display(); // display the updated screen

  delay(1000); // wait for 1 second before reading the inputs again
}
