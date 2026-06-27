/*
   Solar Wireless EV Charging System
   ESP32 + Voltage Sensor + I2C LCD

   This code monitors charging voltage
   and displays charging status.
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define VOLTAGE_PIN 34

LiquidCrystal_I2C lcd(0x27, 16, 2);

float voltage = 0.0;
int adcValue = 0;

void setup() {
  Serial.begin(115200);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Solar Wireless");
  lcd.setCursor(0, 1);
  lcd.print("EV Charger");
  delay(2000);

  lcd.clear();
}

void loop() {

  adcValue = analogRead(VOLTAGE_PIN);

  // Convert ADC value to voltage
  voltage = (adcValue * 3.3) / 4095.0;

  Serial.print("Voltage: ");
  Serial.println(voltage);

  lcd.setCursor(0, 0);
  lcd.print("Volt:");
  lcd.print(voltage, 2);
  lcd.print("V ");

  lcd.setCursor(0, 1);

  if (voltage > 2.0) {
    lcd.print("Charging ON ");
  }
  else {
    lcd.print("Charging OFF");
  }

  delay(1000);
}
