void setup() {
 pinmode(13,output);

}

void loop() {
 digitalwrite(13,high);
 delay(1000);//1000ms=1s
 digitalwrite(13,low);
 delay(1000);
}
