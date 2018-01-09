const int analogInPin = A0;
int time = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(analogInPin);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  
  if(voltage == 5){ //PWM ratio is 100% -> ON
    digitalWrite(LED_BUILTIN, HIGH);
    delay(time);
  }else{  //PWM ratio is 0% -> OFF
    digitalWrite(LED_BUILTIN, LOW);
    delay(time);
  }
}
