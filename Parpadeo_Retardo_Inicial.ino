int led_13=13;
bool inicio = false;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (inicio == false){
    delay(5000);
    inicio = true;
  }
  digitalWrite(led_13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(led_13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
