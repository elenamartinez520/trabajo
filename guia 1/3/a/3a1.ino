int ledRojo = 11;   
int ledAzul = 10;  
int buzzer = 8;

void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{

  analogWrite(ledRojo, 255);
  analogWrite(ledAzul, 0);

  digitalWrite(buzzer, HIGH);

  delay(500);

  
  analogWrite(ledRojo, 0);
  analogWrite(ledAzul, 255);

  digitalWrite(buzzer, LOW);

  delay(500);
}