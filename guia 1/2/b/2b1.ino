void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() 
{
  analogWrite(3, 0); 
  delay(100); 
  analogWrite(5, 40);  
  delay(100); 
  analogWrite(6, 70);
  delay(100); 
  analogWrite(9, 110); 
  delay(100); 
  analogWrite(10, 150);
  delay(100); 
  analogWrite(11, 180);
  delay(100); 
  analogWrite(A1, 220);
  delay(100); 
  analogWrite(A2, 255);
  delay(100); 
}