// Exemplo básico de controle de LEDs utilizando temporização.
//
// Este script em C++ configura três pinos como saída para controlar LEDs. 
// Ele acende e apaga os LEDs em uma sequência específica com temporizações diferentes, 
// demonstrando como manipular sinais de saída com base em delays.
//
// Funcionalidade:
// - Configura os pinos 9, 11 e 13 como saídas para controlar LEDs.
// - Acende o LED conectado ao pino 9 por 3 segundos.
// - Acende o LED conectado ao pino 11 por 1 segundo enquanto o LED do pino 9 é apagado.
// - Por fim, acende o LED conectado ao pino 13 por 3 segundos, enquanto os outros LEDs estão apagados.
//
// Autor:
// Breno Fiussen
//
// Importante:
// Certifique-se de que os LEDs estejam corretamente conectados aos pinos designados e que os resistores adequados estejam sendo usados para evitar danos aos LEDs.

void setup()
{
  pinMode(9, OUTPUT);  // Configura o pino 9 como saída
  pinMode(11, OUTPUT); // Configura o pino 11 como saída
  pinMode(13, OUTPUT); // Configura o pino 13 como saída

  digitalWrite(9, LOW);  // Define o pino 9 inicialmente como LOW (LED apagado)
  digitalWrite(11, LOW); // Define o pino 11 inicialmente como LOW (LED apagado)
  digitalWrite(13, LOW); // Define o pino 13 inicialmente como LOW (LED apagado)
}

void loop()
{
  digitalWrite(9, HIGH); // Acende o LED no pino 9
  delay(3000);           // Aguarda 3000 milissegundos (3 segundos)
  digitalWrite(11, HIGH); // Acende o LED no pino 11
  delay(1000);            // Aguarda 1000 milissegundos (1 segundo)
  digitalWrite(9, LOW);   // Apaga o LED no pino 9
  digitalWrite(11, LOW);  // Apaga o LED no pino 11
  digitalWrite(13, HIGH); // Acende o LED no pino 13
  delay(3000);            // Aguarda 3000 milissegundos (3 segundos)
  digitalWrite(13, LOW);  // Apaga o LED no pino 13
}
