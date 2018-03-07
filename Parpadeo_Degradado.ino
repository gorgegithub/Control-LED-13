int led_13 = 13;
int entrada;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_13, OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    entrada = Serial.read();
    if (entrada == 'H') {
      digitalWrite(led_13, HIGH);
    }
    if (entrada == 'L') {
      digitalWrite(led_13, LOW);
    }
  }

}
