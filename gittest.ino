bool boo = 0;
bool boo2 = 0;

void setup() {
Serial.begin(9600) // put your setup code here, to run once:
}

void loop() {
boo = !boo;
Serial.println(boo);
delay(100);
boo2 = !boo2;
Serial.println(boo2);
delay(100);
}
