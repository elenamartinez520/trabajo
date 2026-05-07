int rojo = 11;
int verde = 10;
int azul = 9;

int boton = 2;
int pote = A0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

  pinMode(boton, INPUT_PULLUP);
}

void loop()
{
  int estadoBoton = digitalRead(boton);

  int valorPote = analogRead(pote);

  int escala = map(valorPote, 0, 1023, 0, 2);

  if(estadoBoton == LOW)
  {
    if(escala == 0)
    {
      digitalWrite(rojo, HIGH);
      digitalWrite(verde, LOW);
      digitalWrite(azul, LOW);
    }

    else if(escala == 1)
    {
      digitalWrite(rojo, LOW);
      digitalWrite(verde, HIGH);
      digitalWrite(azul, LOW);
    }

    else
    {
      digitalWrite(rojo, LOW);
      digitalWrite(verde, LOW);
      digitalWrite(azul, HIGH);
    }
  }

  else
  {
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }
}