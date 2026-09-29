float Vector[]={5.4 , 5.39 , 5.38 , 5.31 
, 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49 };

int tamano=10;

void setup()//Se ejecuta una sola vez
{
  Serial.begin(9600);
  float NumMax=Vector[0];
  
  for(int i=0; i < tamano ;i++)
  {
    if(Vector[i] > NumMax)
    {
      NumMax = Vector[i];
    }
  }
  
  Serial.print("El numero mas grande es: ");
  Serial.println(NumMax,1);
}

void loop()
{
}