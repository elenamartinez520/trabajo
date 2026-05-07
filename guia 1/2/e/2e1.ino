int potR = A0;
int potG = A1;
int potB = A2;

int ledR = 3;
int ledG = 5;
int ledB = 6;

void setup() {
  pinMode( 3 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
}

void loop() {
  int Red = analogRead(A0);
  int Green = analogRead(A1);
  int Blue = analogRead(A2);

  Red = map(Red, 0, 1023, 0, 255);
  Green = map(Green, 0, 1023, 0, 255);
  Blue = map(Blue, 0, 1023, 0, 255);

  analogWrite( 3 , Red);
  analogWrite( 5 , Green);
  analogWrite( 6 , Blue);
}