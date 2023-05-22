int licznik;
int klikacz = 2;
int red = 11;
int yellow = 10;
int funkcja;
long czas;

void setup()

{
  pinMode(klikacz, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  if(digitalRead(klikacz) == LOW)
  {
    delay(20);
    licznik = licznik++;
    while(digitalRead(klikacz) == LOW);
    delay(20);
    czas = millis()/1000;
  }
  if(millis()/1000-czas > 3 && funkcja < 4)
  {
    funkcja = licznik;
    licznik = 0;
  }
  switch(funkcja)
  {
    case 1:
    {
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
  
      break;
    }
        case 2:
    {
      digitalWrite(red, LOW);
      digitalWrite(yellow, HIGH);
      break;
    }
   
     
    }
}

