int led_13 = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 25; i <= 200; i = i + 3) {
    digitalWrite(led_13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(i);                       // wait for a second
    Serial.println(i);
    digitalWrite(led_13, LOW);    // turn the LED off by making the voltage LOW
    delay(i);                       // wait for a second
  }
  delay(1000);
  for (int i = 200; i <= 25; i = i - 3) {
    digitalWrite(led_13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(i);                       // wait for a second
    digitalWrite(led_13, LOW);    // turn the LED off by making the voltage LOW
    delay(i);                       // wait for a second
  }
}
