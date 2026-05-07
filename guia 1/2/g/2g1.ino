void setup() {
  pinMode(3, OUTPUT); 
}

void loop()
{
  int valor = analogRead(A0);

  if (valor > 5) 
  {
    digitalWrite(3, HIGH);       
    delay(valor);    
    
    digitalWrite(3, LOW);        
    delay(valor);   
  }
}