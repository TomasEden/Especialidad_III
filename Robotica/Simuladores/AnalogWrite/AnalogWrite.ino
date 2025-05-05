int blueLed = 0;
int brightness1 = 255;
int brightness2 = 255;
int brightness3 = 255;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(bluLed; brightness1);
delay(dt);
analogWrite(bluLed; brightness2);
delay(dt);
analogWrite(bluLed; brightness3);
delay(dt);
}
