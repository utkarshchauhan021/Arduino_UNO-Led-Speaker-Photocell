int sensorPin = A0;
int led = 7;
int lightCal;
int lightVal;

void setup() {
  pinMode(led, OUTPUT);
  lightCal = analogRead(sensorPin);
}

void loop() {
  lightVal = analogRead(sensorPin);
  
  if (lightVal < lightCal-20 ) {
    digitalWrite(led, HIGH);
    tone(9,10);
  }
  
  else {
    digitalWrite (led, LOW);
    noTone(9);
  }
}
//END
