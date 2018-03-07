int led_13 = 13;
int valor, valor_fin;
char entrada;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Control del tiempo mediante teclado");
  Serial.println("Introducir el valor en milisegundos seguido de una X");
}
// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    entrada = Serial.read();
    if (entrada == 'X') {
      valor_fin = valor;
      Serial.println(valor_fin);
      valor = 0;
    }
    if (entrada >= '0' && entrada <= '9') {
      valor = (valor * 10) + (entrada - '0');
    }
  }
  if (valor_fin >= 25 && valor_fin <= 1000) {
    digitalWrite(led_13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(valor_fin);
    digitalWrite(led_13, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(valor_fin);

  }
}
