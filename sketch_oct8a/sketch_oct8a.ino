// Definição dos pinos conforme montagem da imagem
const int led = 10;      // LED no pino 10
const int buzzer = 2;    // Piezo no pino 2

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  // Frequências agudas onde o piezo físico produz mais volume
  for (int freq = 2500; freq <= 3500; freq += 80) {
    tone(buzzer, freq, 20);
    delay(10);
  }

  digitalWrite(led, LOW);
  for (int freq = 3500; freq >= 2500; freq -= 80) {
    tone(buzzer, freq, 20);
    delay(10);
  }
}