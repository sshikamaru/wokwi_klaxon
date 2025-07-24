#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "melodies.h"
#include "notes.h"

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Projet Wokwi !");
}

void loop() {
  // vide
}
