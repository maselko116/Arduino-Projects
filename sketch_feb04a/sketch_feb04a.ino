int LedCerwPin = 11; 
int kuzik = 2;
 void setup() {

pinMode (LedCerwPin, OUTPUT);
pinMode (kuzik, INPUT);
}

void loop() {

if(digitalRead(kuzik) == HIGH)
{
digitalWrite(LedCerwPin, HIGH);
}
else{
digitalWrite(LedCerwPin, LOW);
}

}
