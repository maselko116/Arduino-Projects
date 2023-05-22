int LedCerwPin = 11;
int kuzik = 2;
int o = 100;
void setup() {

  pinMode (LedCerwPin, OUTPUT);
  pinMode (kuzik, INPUT);

}
void loop() {

  if (digitalRead(kuzik) == HIGH)
  {
    for (int licznik = 0; licznik < 100; licznik = licznik + 1)
{
  for (o = 100; o == 5000; o = o + 100) 
  {
      digitalWrite(LedCerwPin, HIGH);
    delay (o);
    digitalWrite(LedCerwPin, LOW);
    delay (0);
}
}

  }
  else {
    digitalWrite(LedCerwPin, LOW);
  }

}

