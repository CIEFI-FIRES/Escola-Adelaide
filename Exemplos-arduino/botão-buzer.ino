// Exemplo básico de controle de tom utilizando um sensor digital.
//
// Este script em C++ configura os pinos de um microcontrolador, lê o estado de um pino de entrada digital e, 
// com base nessa leitura, emite um som em uma frequência específica. 
// É um exemplo simples de como controlar um sinal sonoro utilizando um botão ou sensor digital.
//
// Funcionalidade:
// - Configura os pinos 2 e 7 como entrada e saída, respectivamente.
// - O pino 7 é configurado para emitir um sinal sonoro (buzzer).
// - O pino 2 é utilizado como entrada digital para detectar um estado lógico (HIGH ou LOW).
// - Se o pino 2 for lido como LOW, o script aciona um tom de 698 Hz no pino 7 por 100 milissegundos.
// - A leitura é atualizada a cada 10 milissegundos para melhorar o desempenho da simulação.
//
// Autor:
// - Breno Fiussen
//
// Importante:
// Certifique-se de que os pinos estejam corretamente conectados ao buzzer e ao sensor digital. 
// Este script é ideal para aplicações simples que necessitam de controle sonoro com base em uma entrada digital.

void setup()
{
  pinMode(7, OUTPUT); // Configura o pino 7 como saída
  pinMode(2, OUTPUT); // Configura o pino 2 como saída
  pinMode(2, INPUT);  // Configura o pino 2 como entrada
  pinMode(7, OUTPUT); // Configura o pino 7 como saída novamente

  digitalWrite(7, LOW);  // Define o pino 7 inicialmente como LOW
  digitalWrite(2, HIGH); // Define o pino 2 como HIGH
}

void loop()
{
  if (digitalRead(2) == LOW) {    // Se o pino 2 for lido como LOW
    tone(7, 698, 100);            // Emite um tom de 698 Hz no pino 7 por 100 milissegundos
  }
  delay(10); // Aguarda 10 milissegundos para melhorar o desempenho da simulação
}

