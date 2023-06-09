char ch;
void setup()
{
    Serial.begin(9600);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
}
void loop()
{
    if (Serial.available() > 0)
        ch = Serial.read(); 
    Serial.println(ch);
    if (ch == 114)
    {

        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        digitalWrite(12, HIGH);
        delay(1000);
    }
    if (ch == 98)
    {
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(12, HIGH);
        delay(1000);
    }
    if (ch == 103)
    {
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(12, LOW);
        delay(1000);
    }
}
