int PinRed=2;
int PinBlue=3;

int secuencia1[] = {1, 0, 0, 1, 1, 0, 1, 1};
int secuencia2[] = {0, 1, 0, 1, 0, 0, 1, 0};

void setup()
{
  pinMode(PinRed, OUTPUT);
  pinMode(PinBlue, OUTPUT);
}

void loop()
{
  for(int i=0; i < sizeof(secuencia1)/2 ; i++)
  {
    digitalWrite(PinRed, secuencia1[i]);
    digitalWrite(PinBlue, secuencia2[i]);
    delay(1000);
  }  
}


