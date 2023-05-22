const int CzujTemp = A0;


void setup() {
Serial.begin(9600);
}

void loop() {
int odczyt = analogRead(CzujTemp);
float napiecie = (odczyt/1024.0) * 5.0;
float temperatura = (napiecie - 0.5) * 100;

Serial.print("odczytana wartosc");
Serial.print(odczyt);

Serial.print("|| napiecie:");
Serial.print(napiecie);

Serial.print("| temperatura:");
Serial.print(temperatura);

Serial.println();
}

