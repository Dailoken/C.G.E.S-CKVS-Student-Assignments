#include "DHT.h"
#define DHTPIN 9
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 TEST!);
  dht.begin();
}

void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.println("Humidity:");
  Serial.println(h);
  Serial.println("%\t");
  Serial.println("Temperature:");
  Serial.println(t);
  Serial.println("*C");
}
