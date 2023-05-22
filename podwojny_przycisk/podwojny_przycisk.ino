int przycisk1 = 2;
int przycisk2 = 3;
int led = 11;

void setup() {
pinMode(przycisk1, INPUT);
pinMode(przycisk2, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
if (digitalRead(przycisk1) == HIGH)
 {
 digitalWrite(led, HIGH);
 }
else {
 digitalWrite(led, HIGH);
}
 
 
if (digitalRead(przycisk2) == HIGH)
{
digitalWrite(led, LOW);  
}
else {
digitalWrite(led, LOW);  
}
}

