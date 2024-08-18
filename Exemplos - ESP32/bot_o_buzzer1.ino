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