//Exemplo básico de controle de tom utilizando um sensor digital.

//Este script em C++ configura os pinos de um microcontrolador, lê o estado de um pino de entrada digital e, com base nessa leitura, emite um som em uma frequência específica. É um exemplo simples de como controlar um sinal sonoro utilizando um botão ou sensor digital.

//Funcionalidade:

//Configura os pinos 2 e 7 como entrada e saída, respectivamente.
//O pino 7 é configurado para emitir um sinal sonoro (buzzer).
//O pino 2 é utilizado como entrada digital para detectar um estado lógico (HIGH ou LOW).
//Se o pino 2 for lido como LOW, o script aciona um tom de 698 Hz no pino 7 por 100 milissegundos.
//A leitura é atualizada a cada 10 milissegundos para melhorar o desempenho da simulação.
//
// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);

  digitalWrite(7, LOW);
  digitalWrite(2, HIGH);
}

void loop()
{
  if (digitalRead(2) == LOW) {
    tone(7, 698, 100); // play tone 65 (F5 = 698 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}
