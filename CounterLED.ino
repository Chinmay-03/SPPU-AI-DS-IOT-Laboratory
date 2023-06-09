int counter = 0;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(counter <30){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
  }

  if(counter >30 and counter < 60){
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    delay(100);
  }

   if(counter > 60){
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(100);
  }

  counter = counter + 5;
}
