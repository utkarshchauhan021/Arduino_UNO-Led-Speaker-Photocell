//START
int sensorPin = A0;
int led = 7;
int lightCal;
int lightVal;

void setup() {
  lightCal = analogRead(sensorPin);
}

void loop() {
  lightVal = analogRead(sensorPin);
  
  if (lightVal < lightCal-20 ) {
    tone(9,10);
  }
  
  else {
    noTone(9);
  }
}
//END
