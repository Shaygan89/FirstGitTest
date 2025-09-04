#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

// Current firmware version
String currentVersion = "1.0.0";

// ---------------- LCD ----------------
LiquidCrystal_PCF8574 lcd(0x27); // I2C address

void setup() {
  // put your setup code here, to run once:
    // LCD init
  lcd.begin(20, 4);
  lcd.setBacklight(255);
  lcd.setCursor(0,0);


  lcd.clear();
  lcd.print("Welcome to V");
  lcd.print(currentVersion);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
