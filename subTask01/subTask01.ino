const int analogInPin = A0;
int time = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //values (0;1023)
  value = analogRead(analogInPin);

  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
  
}
