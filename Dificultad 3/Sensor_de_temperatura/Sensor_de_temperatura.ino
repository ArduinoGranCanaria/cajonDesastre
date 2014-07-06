/* DTH-22: Sensor de temperatura */
#include "DHT.h"
#include <LiquidCrystal.h>

DHT dht(7, DHT11); // pin, tipo
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print(" %\t");
  lcd.setCursor(0, 0);
  lcd.print("Humedad: ");
  lcd.print(h);
  lcd.print(" %\t");
  
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" *C");
  lcd.setCursor(0, 1);
  lcd.print("Humedad: ");
  lcd.print(t);
  lcd.print(" %\t");

  delay(1000);
}
