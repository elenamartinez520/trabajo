void setup() 
{
  pinMode(3, OUTPUT); //Verde
  pinMode(5, OUTPUT); // Azul
  pinMode(6, OUTPUT); // Rojo
}

void loop() 
{
  
  //Cian 
  analogWrite(3, 50); 
  analogWrite(5, 50);
  analogWrite(6, 0);
  delay(1000);
  analogWrite(3, 150); 
  analogWrite(5, 150); 
  analogWrite(6, 0);
  delay(1000);
  analogWrite(3, 255); 
  analogWrite(5, 255);
  analogWrite(6, 0);
  delay(1000);

  // Rojo
  analogWrite(3, 0); 
  analogWrite(5, 0); 
  analogWrite(6, 50);
  delay(1000);
  analogWrite(3, 0);
  analogWrite(5, 0); 
  analogWrite(6, 150);
  delay(1000);
  analogWrite(3, 0); 
  analogWrite(5, 0);
  analogWrite(6, 250);
  delay(1000);

  // Amarillo 
  analogWrite(3, 50); 
  analogWrite(5, 0); 
  analogWrite(6, 50);
  delay(1000);
  analogWrite(3, 150); 
  analogWrite(5, 0); 
  analogWrite(6, 150);
  delay(1000);
  analogWrite(3, 255);
  analogWrite(5, 0); 
  analogWrite(6, 255);
  delay(1000);
}