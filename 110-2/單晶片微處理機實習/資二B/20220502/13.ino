1 #include "DHT.h"
2 #define DHTPIN 9
3 #define DHTTYPE DHT11
4 DHT dht(DHTPIN, DHTTYPE);
5
6 void setup ()[
7  Serial.begin(9600);
8  Serial.println("DHT11 TEST!");
9  dht.begin ();
10]
11
12 void loop() {
13  delay(1000);
14  float h = dht.readHumidity();
15  float t =dht.readTemperature ();
16
17  Serial.print("Humidity:");
18  Serial.print(h);
19  Serial.print("%\t");
20  Serial.print("Temperature:");
21  Serial.print(t);
22  Serial.print("*C");
23}
