# Interfacing of Push button with Raspberry Pi board.

import RPi.GPIO as GPIO
import time
pushbuttonPin = 7

GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)
GPIO.setup(pushbuttonPin, GPIO.IN)

while True:
     if(GPIO.input(pushbuttonPin) == True):
         print ("push button1 is pressed")
         time.sleep(1)
 
     else:
         print ("push button is released")
         time.sleep(1)
