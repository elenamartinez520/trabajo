#define G3 196
#define Cb2 69
#define Fb1 46
#define Db3 156
#define Ab3 233
#define E2 82
#define B2 123
#define G2 98
#define Gb1 52
#define F3 175
#define Ab2 117
#define A1 55
#define E1 41
#define A2 110
#define D3 147
#define F1 44
#define Ab1 58
#define Cb1 35
#define G1 49
#define A3 220
#define C2 65
#define Db1 39
#define Cb3 139
#define Fb3 185
#define F2 87
#define E3 165
#define B1 62

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

const int notas[] = {G3, 0, Cb2, Fb1, Db3, Ab3, E2, B2, G2, Gb1, F3, Ab2, 0, B2, A1, E1, Ab3, Db3, 0, A2, 0, D3, 0, F1, E2, 0, Ab1, 0, Ab2, 0, G3, 0, G2, Db3, Cb1, 0, G1, 0, B2, Cb2, F1, 0, 0, E2, D3, E1, A3, 0, C2, 0, D3, Db1, G3, Cb3, Fb1, 0, A2, 0, 0, B2, Fb3, 0, E1, 0, Cb2, 0, D3, 0, 0, Cb2, Gb1, 0, D3, 0, 0, G3, 0, F2, 0, 0, C2, 0, D3, Gb1, 0, E3, 0, B1, 0, 0, D3};

const int figuras[] = {32, -32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, -8, 32, 32, 32, 32, 32, -32, 32, -32, 32, -32, 32, 32, -32, 32, -16, 32, -32, 32, -32, 32, 32, 32, -32, 32, -32, 32, 32, 32, -16, -32, 32, 32, 32, 32, -32, 32, -32, 32, 32, 32, 32, 32, -32, 32, -16, -32, 32, 32, -32, 32, -32, 32, -32, 32, -16, -32, 32, 32, -32, 32, -16, -32, 32, -32, 32, -16, -32, 32, -16, 32, 32, -16, 32, -32, 32, -16, -32, 32};

void setup() {
}

void loop() {
  playMelody(notas, figuras, 91);
  pauseBetweenLoops(3);
}