#include <Adafruit_NeoPixel.h>

#define NEOPIN 3
#define CANT_PIXEL 6

int ldrPin = A0;
Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(A0, INTPUT);
  pinMode(2, INPUT_PULLUP);
  lcd.begin(16, 2);
  RING.begin();
  RING.clear();
  RING.show();

  randomSeed(analogRead(A0));
}

void loop()
{ //BOTON
  int estadoBoton = digitalRead(boton);
  
  //NEOPIN
   RING.clear();
   RING.setPixelColor(0, 255, 0, 0);
   RING.show();
   Delay(1000);
  
 
   RING.clear();
   RING.setPixelColor(0, 0, 255, 0);
   RING.show();
   Delay(1000);
     
   RING.clear();
   RING.setPixelColor(255,0, 0, 0);
   RING.show();
   Delay(100);
     
   RING.clear();
   RING.setPixelColor(0, 0, 0, 255);
   RING.show();
   Delay(1000);
     
   RING.clear();
   RING.setPixelColor(0, 255, 255, 0);
   RING.show();
   Delay(1000);
     
   RING.clear();
   RING.setPixelColor(0, 255, 0, 255);
   RING.show();
   Delay(1000);
  
  
     
  //LUZ + LCD
  int lecturaLuz = analogRead(ldrPin);

  
  int porcentajeLuz = map(lecturaLuz, 1, 310, 0, 100);
  porcentajeLuz = constrain(porcentajeLuz, 0, 100);


  Serial.print("El nivel de luz actual es: ");
  Serial.print(porcentajeLuz);
  Serial.println("%");

  Serial.print("Color: ");
  Serial.print(color);
 
  Serial.print("N Led: ");
  Serial.print(nled);
  Serial.print(" Sensor: ");
  Serial.println(sensor);
  
}
