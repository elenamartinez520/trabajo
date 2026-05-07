

void setup()
{
  pinMode(2, OUTPUT); // BUZZER
  pinMode(3, INPUT);  //BOTON
}

void loop()
{
  if (digitalRead(3) == HIGH)
  {
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    delay(600);
  }
  
  
}