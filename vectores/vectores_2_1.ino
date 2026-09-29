int Vector[]={10, 4 , 2};

int tamano = 3;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  for(int i =0 ; i < tamano; i++)
  {
    for(int j = i + 1; j < tamano; j++)
    {
      if (Vector[i] > Vector[j]) 
      {
        int aux = Vector[i];   
        Vector[i] = Vector[j]; 
        Vector[j] = aux;
      }
    }
  }
    
  Serial.print("Vector ordenado de menor a mayor: ");
  for (int i = 0; i < tamano; i++) 
  {
    Serial.print(Vector[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(100);  
}