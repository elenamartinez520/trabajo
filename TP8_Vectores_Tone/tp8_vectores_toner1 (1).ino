#define D4 294
#define G5 784
#define G6 1568
#define E4 330
#define B4 494
#define Ab5 932
#define Db4 311
#define Gb5 831
#define A5 880
#define F6 1397
#define Ab4 466
#define Gb4 415
#define Ab6 1865
#define Cb5 554
#define D6 1175
#define Fb6 1480
#define Db6 1245
#define G4 392
#define C5 523
#define Fb5 740
#define E5 659
#define Gb6 1661
#define E6 1319
#define F4 349
#define B5 988
#define D5 587
#define C6 1047
#define Db5 622
#define Cb4 277
#define F5 698
#define A6 1760

const int bpm = 110;
const int buzzer = 11;

int cuadritosToDuration(int cuadritos) {
  return (60000L * 4 / bpm) * cuadritos / 32;
}

void playNote(int note, int duration) {
  if (note == 0) {
    noTone(buzzer);
  } else {
    tone(buzzer, note);
  }
  delay(duration);
  noTone(buzzer);
}

void playMelody(const int notes[], const int figures[], int length) {
  for (int i = 0; i < length; i++) {
    int cuadritos = 64 / abs(figures[i]);
    playNote(notes[i], cuadritosToDuration(cuadritos));
  }
}

void pauseBetweenLoops(int seconds) {
  delay(seconds * 1000);
}

void convert3to2(const int melody3[][3], int len, int melody2[], int tempo) {
  int duracionRedonda = (60000 * 4) / tempo;

  for (int i = 0; i < len; i++) {
    int duracion = melody3[i][1];
    int figura = (duracionRedonda * 2) / duracion;
    melody2[i * 2] = melody3[i][0];
    melody2[i * 2 + 1] = figura;
  }
}

const int notas[] = {D4, G5, G6, 0, E4, 0, G6, B4, Ab5, 0, Db4, 0, 0, Gb5, 0, B4, 0, A5, 0, Db4, F6, Ab4, Ab5, Gb4, Ab6, Cb5, D6, E4, Cb5, 0, D4, Cb5, 0, Fb6, 0, D4, Ab6, Db6, G4, 0, Db6, 0, D4, C5, 0, Fb5, 0, E5, Gb6, D4, A5, Db6, 0, Ab5, Gb6, B4, 0, Gb6, Db4, 0, E6, 0, F4, B5, Fb5, Fb5, 0, D5, 0, G6, 0, G4, 0, Db4, Gb5, Ab4, 0, 0, C6, Fb6, 0, 0, Ab4, Db5, Cb4, F5, A6};

const int figuras[] = {32, 32, 32, -32, 32, -32, 32, 32, 32, -32, 32, -16, -32, 32, -16, 32, -32, 32, -16, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, -32, 32, 32, -32, 32, -32, 32, 32, 32, 32, -16, 32, -32, 32, 32, -16, 32, -32, 32, 32, 32, 32, 32, -32, 32, 32, 32, -32, 32, 32, -32, 32, -16, 32, 32, 32, 32, -32, 32, -32, 32, -32, 32, -16, 32, 32, 32, -16, -32, 32, 32, -16, -32, 32, 32, 32, 32, 32};

void setup() {
}

void loop() {
  playMelody(notas, figuras, 87);
  pauseBetweenLoops(3);
}