bool esMultiplo(int numero, int base) {
  if (numero % base == 0) {
    return true;
  } else {
    return false;
  }
}

void setup() {
  Serial.begin(9600); 

  int num1 = 15;
  int base1 = 5;

  int num2 = 14;
  int base2 = 3;

  if (esMultiplo(num1, base1)) {
    Serial.println("15 si es multiplo de 5");
  } else {
    Serial.println("15 No es multiplo de 5");
  }

  if (esMultiplo(num2, base2)) {
    Serial.println("14 si es multiplo de 3");
  } else {
    Serial.println("14 no es multiplo de 3");
  }
}

void loop() {
}