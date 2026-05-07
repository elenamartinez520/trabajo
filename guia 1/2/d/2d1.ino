//Definicion de pines del LED1(Magenta)
int Red1 = 6;
int Green1 = 3;
int Blue1 = 5; 
//Definicion de pines del LED2(Amarillo)
int Red2 = 11; 
int Green2 = 9;
int Blue2 = 10;   
int POT = A0;

void setup() 
{
  pinMode( 3 , OUTPUT); 
  pinMode( 6 , OUTPUT); 
  pinMode( 5 , OUTPUT);
  pinMode( 9 , OUTPUT); 
  pinMode( 11 , OUTPUT); 
  pinMode( 10 , OUTPUT);
}

void loop() {
  int lectura = analogRead(A0);
  int velocidad = lectura; 

  
  analogWrite( 6 , 255); 
  analogWrite( 3 , 0); 
  analogWrite( 5 , 255);//Magenta(Rojo + Azul)
  analogWrite( 11 , 255);
  analogWrite( 9 , 255); 
  analogWrite( 10 , 0);//Amarillo(Rojo + Verde)
  delay(velocidad);

 
  digitalWrite( 3 , 0); 
  digitalWrite( 6 , 0); 
  digitalWrite( 5 , 0);
  digitalWrite( 9 , 0); 
  digitalWrite( 11 , 0); 
  digitalWrite( 10 , 0);
  delay(velocidad);
}