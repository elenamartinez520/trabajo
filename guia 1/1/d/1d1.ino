// C++ code
//
void setup()
{
  pinMode(2, OUTPUT); //Red
  pinMode(3, OUTPUT); //Green
  pinMode(4, OUTPUT); //Bozzer
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(2000); 
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(2000);
  
}