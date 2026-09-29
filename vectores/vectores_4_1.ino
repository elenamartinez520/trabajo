int Pin=2;

int VectorSecuencia[]={ 1, 0 ,0 ,1, 1, 0, 1,
                       1};

void setup()
{
  pinMode(Pin, OUTPUT);
}

void loop()
{
  for(int i=0; i < sizeof(VectorSecuencia)/2 ; i++)
  {
    digitalWrite(Pin, VectorSecuencia[i]);
    delay(1000);
  }  
}