 #include <LiquidCrystal.h>

// LiquidCrystal (rs, e, d4, d5, d6, d7)
LiquidCrystal lcd(5, 6, 10, 11, 12, 13);

void setup() 
{
  pinMode(A0, INPUT); //LDR(luz)
  pinMode(A1, INPUT); //TMP(temperatura)
  pinMode(2, INPUT); //PIR(movimiento)  
  pinMode(3, INPUT); //Echo
  pinMode(4, OUTPUT); //Trigger 
  pinMode(8, OUTPUT); //LED Rojo
  pinMode(9, OUTPUT);  //LED Verde
  pinMode(7, OUTPUT);  //Buzzer
  lcd.begin(16, 2);
  Serial.begin(9600); 
}

void loop() 
{
  //Luz 
  int lecturaLuz = analogRead(A0);
  float luz = lecturaLuz / 1023.0 * 100.0;
  
  //Temperatura 
  int lecturaTemp = analogRead(A1);
  float voltaje = lecturaTemp * (5.0 / 1024.0);
  float temperatura = (voltaje - 0.5) * 100.0;
  
  //Movimiento 
  int hayMovimiento = digitalRead(2);
  
  //Distancia
  digitalWrite(4, LOW);
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);
  float tiempo = pulseIn(3, HIGH);
  float distancia = tiempo * 0.034 / 2;
  

  //Mostrar en LCD
  lcd.clear();
  lcd.setCursor(0, 0); 
  lcd.print("T:");
  lcd.print(temperatura, 0);
  lcd.print(" L:");
  lcd.print(luz, 0);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("D:");
  lcd.print(distancia, 0);
  lcd.print("cm M:");
  lcd.print(hayMovimiento);
  
  
  //Serial
  Serial.print("Temp: ");
  Serial.print(temperatura);
  Serial.print(" Luz: ");
  Serial.print(luz);
  Serial.print(" Dist: ");
  Serial.print(distancia);
  Serial.print(" Mov: ");
  Serial.println(hayMovimiento);
  
  
  //Apagar todo
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  
   // Noche (luz < 20%)
  if (luz < 20) 
  {
    if (temperatura > 39) 
    {
      digitalWrite(8, HIGH); // ROJO
      digitalWrite(7, HIGH);
      delay(200);
      digitalWrite(7, LOW);
      delay(100);
      digitalWrite(7, HIGH);
      delay(200);
      digitalWrite(7, LOW);
      Serial.println("ALERTA: Temperatura alta");
    } 
    else if (hayMovimiento == HIGH) 
    {
      digitalWrite(8, HIGH); // AMARILLO
      digitalWrite(9, HIGH);
      digitalWrite(7, HIGH); 
      delay(150);
      digitalWrite(7, LOW);
      Serial.println(" ALERTA: Movimiento");
    } 
    else 
    {
      digitalWrite(9, HIGH); // VERDE
      Serial.println("Monitoreo noche OKI");
    }
  } 
  // Día (luz >= 20%)
  else 
  {
    if (distancia > 0 && distancia < 100) 
    {
      digitalWrite(8, HIGH); // ROJO
      digitalWrite(7, HIGH);
      delay(100);
      digitalWrite(7, LOW);
      delay(50);
      digitalWrite(7, HIGH);
      delay(100);
      digitalWrite(7, LOW);
      Serial.println(" ALERTA: Proximidad");
    } 
    else 
    {
      digitalWrite(9, HIGH); 
      Serial.println("Todo tranqui");
    }
  }
  delay(250);
}