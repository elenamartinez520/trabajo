int Pin[] = {2, 3, 4 ,5};
int cantidad = 4;

void activarPines(int pines[], int tamano) 
{
  for (int i = 0; i < tamano; i++) 
  {
    digitalWrite(pines[i], HIGH);
  }
}

void setup() {
  for (int i = 0; i < cantidad; i++) {
    pinMode(Pin[i], OUTPUT);
  }
  activarPines(Pin, cantidad);
}

void loop() {
}
              
          