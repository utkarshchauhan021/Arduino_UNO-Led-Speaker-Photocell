int speakerPin = 3;
int led1=7;
int led2=12;
int length = 27; 

char notes[] = "cdeeeeeeeeeeedef eeedddbdc "; 

int beats[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 4 };

int tempo = 275; 

void playTone(int tone, int duration) {  

  for (long i = 0; i < duration * 1000L; i += tone * 2) {

    digitalWrite(speakerPin, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led1, LOW);
    delayMicroseconds(tone);

  }

}

void playNote(char note, int duration) { 

  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };

  int tones[] = { 956, 851, 758, 716, 638, 568, 1014, 478 };


  for (int i = 0; i < 8; i++) {

    if (names[i] == note) {

      playTone(tones[i], duration);

    }

  }
}



void setup() 

{

  pinMode(speakerPin, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

}



void loop() 

{  //Main function

  for (int i = 0; i < length; i++) { 

    if (notes[i] == ' ') { 

      delay(beats[i] * tempo); 

    } else 

    {

      playNote(notes[i], beats[i] * tempo); 

    }


    delay(tempo / 2);

  }

}
