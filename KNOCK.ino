void setup(){
  pinMode(A4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop(){
  int PiezoVal = analogRead(A4);

  if(PiezoVal > 50){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(10);
  }

  else{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    delay(10);
  }
}
