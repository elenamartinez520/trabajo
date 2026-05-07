int boton = 5;
int ledR = 2;
int ledB = 3;
int ledG = 4;

int color = 0;
void setup()
{
  pinMode(boton, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() 
{
 
  if (digitalRead(boton) == HIGH) 
  {
     
   
    color = color + 1;
   
    if (color > 7) 
    {
      color = 0;
    }
   
 	  digitalWrite(ledR, LOW);
      digitalWrite(ledB, LOW);
      digitalWrite(ledG, LOW);
   
    if (color == 1) 
    {
      while(digitalRead(boton) == HIGH)
      {
         digitalWrite(ledR, HIGH);
      }
    }
   
    if (color == 2) 
    {
      while(digitalRead(boton) == HIGH)
      {
         digitalWrite(ledG, HIGH);
       	 digitalWrite(ledB, HIGH);
      }
      
      
    }
   
    if (color == 3)
    {
      while(digitalRead(boton) == HIGH)
      {
         digitalWrite(ledG, HIGH);
      }
    }
   
    if (color == 4) 
    {
      while(digitalRead(boton) == HIGH)
      {
        digitalWrite(ledR, HIGH);
      	digitalWrite(ledB, HIGH);
      }


    }
   
    if (color == 5) 
    {
      while(digitalRead(boton) == HIGH)
      {
            digitalWrite(ledB, HIGH);
      }
  
    }
   
    if (color == 6) 
    {
       while(digitalRead(boton) == HIGH)
      {
            digitalWrite(ledR, HIGH);
        	digitalWrite(ledG, HIGH);
      		digitalWrite(ledB, HIGH);
      }


    }
   
    if (color == 7) 
    {
      while(digitalRead(boton) == HIGH)
      {
           digitalWrite(ledR, HIGH);
          digitalWrite(ledG, HIGH);
      }

    }

  }
}
