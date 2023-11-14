bool boo = 0;

void setup() {
Serial.begin(9600) // put your setup code here, to run once:
}

void loop() {
boo = !boo;
Serial.println(boo);
delay(200);
}
