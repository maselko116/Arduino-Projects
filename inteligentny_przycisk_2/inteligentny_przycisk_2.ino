int LedCerwPin = 11;
int kuzik = 2;
int licznik;
void setup() {

  pinMode (LedCerwPin, OUTPUT);
  pinMode (kuzik, INPUT);
}

void loop() {

  if (digitalRead(kuzik) == HIGH)
  {
    digitalWrite(LedCerwPin, HIGH);
  }
  if (digitalRead(kuzik) == HIGH)
  {
    digitalWrite(LedCerwPin, LOW);
  }
}

