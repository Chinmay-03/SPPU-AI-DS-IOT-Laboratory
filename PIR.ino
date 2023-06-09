void setup() {
  pinMode(1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int PirVal = digitalRead(1);

  if(PirVal == 0){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    delay(10);  
  }

  else{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    delay(10);
  }
}
