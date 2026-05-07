// C++ code
//
void setup()
{
  pinMode(11, OUTPUT) ; // Red - peaton
  pinMode(10, OUTPUT) ; // Yellow
  pinMode(7, OUTPUT) ; // White
  pinMode(2, OUTPUT) ; // Green
  pinMode(4, OUTPUT) ; // Red - semaforo
}
 void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW) ;
  digitalWrite(7, HIGH) ;
  digitalWrite(2, LOW) ;
  digitalWrite(4, LOW) ;
  delay(2000); 
   
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW) ;
  digitalWrite(7, LOW) ;
  digitalWrite(2, LOW) ;
  digitalWrite(4, LOW) ;
  delay(2000); 
   
  digitalWrite(2, HIGH);
  digitalWrite(10, LOW) ;
  digitalWrite(7, LOW) ;
  digitalWrite(11, LOW) ;
  digitalWrite(4, HIGH) ;
  delay(2000);
   
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW) ;
  digitalWrite(7, LOW) ;
  digitalWrite(2, LOW) ;
  digitalWrite(4, LOW) ;
  delay(2000); 
 
 }