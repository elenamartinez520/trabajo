int Vector[]={ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int tamano=10;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float suma = 0; 
  
  for (int i = 0; i < tamano; i++) 
  {
    suma = suma + Vector[i];
  }

  float media = suma / tamano;

  Serial.print("La media del array es: ");
  Serial.println(media);

  delay(1000);
}