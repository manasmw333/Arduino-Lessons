int ledPin = 13;  //Declare variables

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  //Set the mode of operation
}

void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
