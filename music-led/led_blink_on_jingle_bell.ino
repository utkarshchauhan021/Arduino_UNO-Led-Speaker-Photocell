//START
int buzzerPin = 3;
int led1=9;
int tempo = 100;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int duration[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void playTheTone(char note, int duration) {
  char notesName[] = { 'c', 'd', 'e', 'f', 'g' };
  int tones[] = { 261, 293, 329, 349, 392 };

  for (int i = 0; i < 5; i++) {
    if (note == notesName[i]) {
      tone(buzzerPin, tones[i], duration);
    }
  }
}

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  for (int i = 0; notes[i] != '\0'; i++) {
    if (notes[i] == ' ') {
      delay(duration[i] * tempo);
    } else {
      digitalWrite(led1, HIGH);
      playTheTone(notes[i], duration[i] * tempo);
      delay(50);
      digitalWrite(led1, LOW);
    }
    delay((tempo*2)*duration[i]);
  }
}
//END..
