int led1 = 9;
int led2 = 6;  

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop() {
  int brightness = 0;
  while(brightness <= 100) {
      analogWrite (led1, brightness);
      delay(5);
      brightness++;
  }
  while(brightness >= 0) {
      analogWrite (led1, brightness);
      delay(5);
      brightness--;
  }
  delay(100);
  brightness = 0;
  while(brightness <= 100) {
      analogWrite (led2, brightness);
      delay(5);
      brightness++;
  }
  while(brightness >= 0) {
      analogWrite (led2, brightness);
      delay(5);
      brightness--;
  }
  delay(100);
//    for (int brightness=0; brightness<100; brightness++) {
//      analogWrite (led1, brightness);
//      delay(5);
//    }
//    for (int brightness=99; brightness>=0; brightness--) {
//      analogWrite (led1, brightness);
//      delay(5);
//    }
//    delay(100);
//    for (int brightness=0; brightness<100; brightness++){
//      analogWrite (led2, brightness);
//      delay (5);
//    }
//    for (int brightness=99; brightness>=0; brightness--) {
//      analogWrite (led2, brightness);
//      delay (5);
//    }
//    delay(100);
}
