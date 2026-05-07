#define Pin 3
void setup() 
{
  pinMode(3, OUTPUT);
}
void loop() 
{
  analogWrite(3, 51);
  delay(1000);
  analogWrite(3, 105);
  delay(1000);
  analogWrite(3, 150);
  delay(1000);
  analogWrite(3, 205);
  delay(1000);
  analogWrite(3, 255);
  delay(1000);
}