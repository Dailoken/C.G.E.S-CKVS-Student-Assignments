
void setup() {
  for (int i = 3; i <= 6; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() { 
  for (int j = 3; j <= 6; j++) {
    for (int i = 3; i <= 6; i++) {
      digitalWrite(i, LOW);
    }
    digitalWrite(j, HIGH);
    delay(1000);

  }


}
