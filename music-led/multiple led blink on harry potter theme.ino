int buzzer_pin = 8;
int led2 = 9;
struct MusicStruct {
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int A2 = 1100;
  int A2s = 1165;
  int B2 = 1234;
  int C3 = 1308;
  int C3s = 1385;
  int D3 = 1555;
}Music;

struct LengthStruct {
  float half = 0.5;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;
}Length;

int tempo = 400;

void setup() {
  pinMode(buzzer_pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led2, OUTPUT); 

}

void setTone(int pin, int note, int duration, int X) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
  if(X==1){
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(led2, LOW);
  }else{
    digitalWrite(led2, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
  }
  
}

void loop() {
  setTone(buzzer_pin, Music.B, tempo * Length.one, 1);
  setTone(buzzer_pin, Music.E, tempo * Length.one_half, 0);
  setTone(buzzer_pin, Music.G, tempo * Length.half, 1);
  setTone(buzzer_pin, Music.F, tempo * Length.one, 0);
  setTone(buzzer_pin, Music.E, tempo * Length.two, 1);
  setTone(buzzer_pin, Music.B2, tempo * Length.one, 0);
  setTone(buzzer_pin, Music.A2, tempo * Length.two_half, 1);
  setTone(buzzer_pin, Music.Fs, tempo * Length.two_half, 0);
  setTone(buzzer_pin, Music.E, tempo * Length.one_half, 1);
  setTone(buzzer_pin, Music.G, tempo * Length.half, 0);
  setTone(buzzer_pin, Music.F, tempo * Length.one, 1);
  setTone(buzzer_pin, Music.Ds, tempo * Length.two, 0);
  setTone(buzzer_pin, Music.F, tempo * Length.one, 1);
  setTone(buzzer_pin, Music.B, tempo * Length.two_half, 0);
  delay(1000); 
}
//end
