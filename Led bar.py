import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)
GPIO.setup(5, GPIO.OUT)
GPIO.setup(11,GPIO.OUT)
GPIO.setup(12,GPIO.OUT)
GPIO.setup(15,GPIO.OUT)

while True:
    print("on")
    GPIO.output(5, True)
    time.sleep(1)
    GPIO.output(11,True)
    time.sleep(1)
    GPIO.output(12,True)
    time.sleep(1)
    GPIO.output(15,True)
    time.sleep(1)
    
    print ("off")
    GPIO.output(5, False)
    time.sleep(1)
    GPIO.output(11,False)
    time.sleep(1)
    GPIO.output(12,False)
    time.sleep(1)
    GPIO.output(15,False)
    time.sleep(1)
    

   
    




