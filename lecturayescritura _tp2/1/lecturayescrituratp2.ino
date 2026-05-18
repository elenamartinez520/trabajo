

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  pinMode(6, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int tiempo = map(analogRead(A0), 0, 1023, 100, 3000);

  int r = map(analogRead(A1), 0, 1023, 0, 255);

  int g = map(analogRead(A2), 0, 1023, 0, 255);

  int b = map(analogRead(A3), 0, 1023, 0, 255);

  Serial.print("Tiempo: ");
  Serial.println(tiempo / 1000.0);

  Serial.print("R: ");
  Serial.println(r);

  Serial.print("G: ");
  Serial.println(g);

  Serial.print("B: ");
  Serial.println(b);

  Serial.println("----------");

 
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 255);

  tone(6, 1000);

  delay(100);

  noTone(6);

  
  analogWrite(9, 255 - r);
  analogWrite(10, 255 - g);
  analogWrite(11, 255 - b);

  delay(tiempo);
}