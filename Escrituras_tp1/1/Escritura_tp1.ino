int rojo1 = 5;

int rojo2 = 2;
int azul2 = 4;

int verde3 = 9;
int azul3 = 10;

int buzzer = 11;

void setup()
{
  pinMode(rojo1, OUTPUT);

  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);

  pinMode(verde3, OUTPUT);
  pinMode(azul3, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void loop()
{
  

  analogWrite(rojo1, 255);

  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, LOW);

  analogWrite(verde3, 0);
  analogWrite(azul3, 0);

  delay(1000);

 
  analogWrite(buzzer, 150);

  delay(100);

  analogWrite(buzzer, 0);



  analogWrite(rojo1, 0);

  digitalWrite(rojo2, HIGH);
  digitalWrite(azul2, HIGH);

  analogWrite(verde3, 0);
  analogWrite(azul3, 0);

  delay(1000);



  analogWrite(buzzer, 150);

  delay(100);

  analogWrite(buzzer, 0);



  analogWrite(rojo1, 0);

  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, LOW);

  analogWrite(verde3, 80);
  analogWrite(azul3, 80);

  delay(1000);

  

  analogWrite(buzzer, 150);

  delay(100);

  analogWrite(buzzer, 0);
}