
void setup() {

}

void loop() {

  noTone(8);

  delay(200);
  
  tone(7, 494, 500);

  delay(500);

  noTone(7);

  tone(8, 523, 300);

  delay(300);
}
//END
