int Vector[]={ 2 , 6 , 10 , 11};

void setup()
{
  Serial.begin(9600);
  
  for(int i=0; i<sizeof( Vector ) / 2;i++){
    Serial.print("Multiplos de ");
    Serial.print(Vector[i]);
    Serial.println(": ");
    
    for(int j=1; j <= 5; j++){
      Serial.print(Vector[i] * j);
      Serial.println(" ");
    }
   Serial.println(""); 
  }
}

void loop()
{
}