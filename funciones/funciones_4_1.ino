int Led=2;
int PIR=3;

void setup()
{
  pinMode(Led, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  LuzMovimiento();
}

void LuzMovimiento(){
  int estadoMovimiento = digitalRead(PIR);
  
  if (estadoMovimiento == HIGH){
    digitalWrite(Led,HIGH); 
  }
  else{
    digitalWrite(Led, LOW);
  }
  
}