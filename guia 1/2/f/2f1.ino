int potPin = A0;
int ledPin = 3;

int valPot = 0;
int tiempo = 0;

void setup() {
  pinMode( 3 , OUTPUT );
}

void loop() {
  valPot = analogRead(A0);

  tiempo = map(valPot, 0, 1023, 0, 1000);

  digitalWrite( 3 , HIGH );
  delay(tiempo);

  digitalWrite( 3 , LOW );
  delay(tiempo);
}