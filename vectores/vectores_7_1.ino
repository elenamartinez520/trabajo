int PinesVector[]={2, 3 , 4, 5, 6};
int tiempo=300;

void setup()
{
  for (int i = 0; i < sizeof(PinesVector)/2; i++) {
    pinMode(PinesVector[i], OUTPUT);
  }
}

void loop()
{
  for(int i = 0; i < sizeof(PinesVector)/2;i ++){
    digitalWrite(PinesVector[i], HIGH);
    delay(tiempo);
  }
  
  for(int i = 0; i < sizeof(PinesVector)/2; i++){
    digitalWrite(PinesVector[i],LOW);
    delay(tiempo);
  }
}