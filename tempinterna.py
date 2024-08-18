"""
Exemplos básico para monitoramento da temperatura interna da ESP32.

Este script lê a temperatura interna da ESP32 utilizando o sensor de temperatura integrado. 
O valor da temperatura é obtido em Fahrenheit e convertido para Celsius. 
A leitura da temperatura é atualizada a cada 2 segundos.

Funcionalidade:
- Lê a temperatura interna da ESP32 utilizando a função `esp32.raw_temperature()`.
- Converte a temperatura de Fahrenheit para Celsius.
- Imprime a temperatura interna da ESP32 no formato "Temperatura Interna da ESP32: X.XX °C".
- Atualiza a leitura a cada 2 segundos.

Autor:
- Fernanda A. Paz

Importante:
Certifique-se de que a biblioteca `esp32` esteja corretamente instalada e que a ESP32 esteja devidamente conectada para executar este script.

"""
import esp32
import time

while True:

    temp = esp32.raw_temperature()
    temp_celsius = (temp - 32) / 1.8
    
    print("Temperatura Interna da ESP32: {:.2f} °C".format(temp_celsius))

    time.sleep(2)
