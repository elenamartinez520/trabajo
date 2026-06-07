#include <Adafruit_NeoPixel.h>

#define NEOPIN 11
#define CANT_PIXEL 12
#define POT A0

Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  RING.begin();
  RING.clear();
  RING.show();

  randomSeed(analogRead(A0));
}

void loop()
{
  efecto1();
  delay(1000);

  efecto2();
  delay(1000);

  efecto3();
  delay(1000);
}

void efecto1()
{
  int velocidad = map(analogRead(POT), 0, 1023, 50, 1000);

  RING.clear();
  RING.setPixelColor(0, 255, 0, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(1, 0, 255, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(2, 0, 0, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(3, 255, 255, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(4, 255, 0, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(5, 0, 255, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(6, 255, 0, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(7, 0, 255, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(8, 0, 0, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(9, 255, 255, 0);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(10, 255, 0, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.setPixelColor(11, 0, 255, 255);
  RING.show();
  delay(velocidad);

  RING.clear();
  RING.show();
}

void efecto2()
{
  int velocidad = map(analogRead(POT), 0, 1023, 50, 1000);

  RING.clear(); RING.setPixelColor(0, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(1, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(2, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(3, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(4, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(5, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(6, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(7, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(8, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(9, 255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(10,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(11,255,255,255); RING.show(); delay(velocidad);

  RING.clear(); RING.setPixelColor(11,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(10,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(9,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(8,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(7,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(6,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(5,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(4,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(3,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(2,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(1,255,255,255); RING.show(); delay(velocidad);
  RING.clear(); RING.setPixelColor(0,255,255,255); RING.show(); delay(velocidad);

  RING.clear();
  RING.show();
}

void efecto3()
{
  int velocidad = map(analogRead(POT), 0, 1023, 50, 1000);

  RING.clear();

  RING.setPixelColor(0, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(2, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(4, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(6, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(8, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(10, random(0,256), random(0,256), random(0,256));

  RING.show();
  delay(velocidad);

  RING.clear();
  RING.show();
  delay(velocidad);

  RING.setPixelColor(1, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(3, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(5, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(7, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(9, random(0,256), random(0,256), random(0,256));
  RING.setPixelColor(11, random(0,256), random(0,256), random(0,256));

  RING.show();
  delay(velocidad);

  RING.clear();
  RING.show();
}