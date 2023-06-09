void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int PirVal = digitalRead(2);

  if(PirVal == 1){
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
  }

  else{
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
}


/* int pirPin = 2;
int pirVal;
int ledPin = 3;
int relayPin1 = 4;
int relayPin2 = 5;
int relayPin3 = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
}

void loop()
{
  pirVal = digitalRead(pirPin);
  Serial.print("The Pir value is: ");
  Serial.println(pirVal);
  delay(100);

  if(pirVal == 1)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(relayPin1, HIGH);
    digitalWrite(relayPin2, HIGH);
    digitalWrite(relayPin3, HIGH);
  }
  else
  {
  if(pirVal == 0)
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(relayPin1, LOW);
    digitalWrite(relayPin2, LOW);
    digitalWrite(relayPin3, LOW);
  }
  }
} */