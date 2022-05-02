int LED =3;
int BUTTON =7;
int BUTTON1 =0;
void setup() {
      pinMode(LED,OUTPUT);
      pinMode(BUTTON,INPUT_PULLUP);
}
void loop() {
   BUTTON1 = digitalRead(BUTTON); 
   if  (BUTTON1 ==LOW)  {
    digitalWrite(LED,HIGH);
   }
   else {
    digitalWrite(LED,LOW);
   }
}
