int tempPin = A0;
int ldrPin = A1;

int rojo = 11;
int verde = 9;
int azul = 10;

void setup()
{
  Serial.begin(9600);

  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
 
  int lecturaTemp = analogRead(tempPin);
  float voltaje = lecturaTemp * 5.0 / 1023.0;
  float temperatura = (voltaje - 0.5) * 100.0;


  int lecturaLuz = analogRead(ldrPin);

  
  int porcentajeLuz = map(lecturaLuz, 1, 310, 0, 100);
  porcentajeLuz = constrain(porcentajeLuz, 0, 100);


  Serial.print("El nivel de luz actual es: ");
  Serial.print(porcentajeLuz);
  Serial.println("%");

  Serial.print("Y la temperatura actual: ");
  Serial.print(temperatura);
  Serial.println(" °C");


  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);


  if (porcentajeLuz >= 30 && porcentajeLuz <= 70)
  {
    if (temperatura > 90)
    {
      digitalWrite(rojo, HIGH);
    }
    else if (temperatura < 18)
    {
      digitalWrite(azul, HIGH);
    }
    else if (temperatura >= 18 && temperatura <= 90)
    {
      digitalWrite(verde, HIGH);
    }
  }

  delay(1000);
}