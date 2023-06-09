import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(26, GPIO.IN)         #Read output from PIR motion sensor connected to GPIO7
GPIO.setup(3, GPIO.OUT)         #LED output pin
while True:
       i=GPIO.input(26)
       if i==1:                 #When output from motion sensor is LOW
             print ("No intruders",i)
             GPIO.output(3, 0)  #Turn OFF LED
             time.sleep(1)
       elif i==0:               #When output from motion sensor is HIGH
             print ("Intruder detected",i)
             GPIO.output(3, 1)  #Turn ON LED
             time.sleep(1)
