#include <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("helo");
  lcd.setCursor(0, 1);
  lcd.print("jestem kuba");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(150);
 }
