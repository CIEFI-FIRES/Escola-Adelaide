from machine import Pin, TouchPad, PWM
import time

# Configuração do sensor touch e do buzzer
touch_sensor = TouchPad(Pin(15))
buzzer = PWM(Pin(23))

def check_touch():
    touch_value = touch_sensor.read()
    print(touch_value)
    
    if 250 <= touch_value <= 350:  
        buzzer.freq(1000)  
        buzzer.duty(128)   
    
    elif 150 <= touch_value <= 249:
        buzzer.freq(1500)  
        buzzer.duty(256)   
    
    elif 0 <= touch_value <= 149:
        buzzer.freq(2000)  
        buzzer.duty(512)
        
    else:
        buzzer.duty(0)     

while True:
    check_touch()
    time.sleep(0.1)
    
