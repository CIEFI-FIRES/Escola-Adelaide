// Exemplo básico de controle de LED utilizando um sensor digital.
//
// Este script em C++ configura os pinos de um microcontrolador para controlar um LED com base no estado de um sensor digital. 
// Se o sensor detectar um sinal LOW, o LED é aceso. Caso contrário, o LED permanece apagado.
//
// Funcionalidade:
// - Configura o pino 3 como saída para controlar um LED.
// - Configura o pino 2 como entrada para ler o estado de um sensor digital.
// - Se o pino 2 for lido como LOW, o LED conectado ao pino 3 é aceso.
// - Se o pino 2 for lido como HIGH, o LED conectado ao pino 3 é apagado.
// - A leitura é atualizada a cada 10 milissegundos para melhorar o desempenho da simulação.
//
// Autor:
// Breno Fiussen
//
// Importante:
// Certifique-se de que o LED e o sensor digital estejam corretamente conectados aos pinos designados. 
// Este exemplo é útil para entender como utilizar entradas digitais para controlar saídas simples como LEDs.

void setup()
{
  pinMode(3, OUTPUT);  // Configura o pino 3 como saída para o LED
  pinMode(2, OUTPUT);  // Configura o pino 2 como saída
  pinMode(2, INPUT);   // Configura o pino 2 como entrada para o sensor digital

  digitalWrite(3, LOW);  // Define o pino 3 inicialmente como LOW (LED apagado)
  digitalWrite(2, HIGH); // Define o pino 2 inicialmente como HIGH (esperando por LOW no sensor)
}

void loop()
{
  if (digitalRead(2) == LOW) {  // Se o pino 2 for lido como LOW
    digitalWrite(3, HIGH);      // Acende o LED no pino 3
  } else {
    digitalWrite(3, LOW);       // Apaga o LED no pino 3
  }
  delay(10); // Aguarda 10 milissegundos para melhorar o desempenho da simulação
}
