int trig=4;
int echo=2;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);
}

float DistanciaObjeto(){
  digitalWrite(trig,LOW);
  delay(200);
  digitalWrite(trig,HIGH);
  delay(200);
  digitalWrite(trig,LOW);

  
  int duracion = pulseIn(echo,HIGH);
  
  float distancia= duracion * 0.034/2;
  
  return distancia;
  
}

void loop()
{
  float distancia=DistanciaObjeto();
  Serial.print("Distancia al objeto: ");
  Serial.print(distancia);
  Serial.println("cm");
  delay(500);
}