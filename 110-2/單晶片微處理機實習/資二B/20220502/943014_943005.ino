#include "DHT.h"
#include DHTPIN 9
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11B TEST!");
  dht.begin();
 }

void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature:");
  Serial.print(t);
  Serial.print("*C");}
