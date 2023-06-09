int output = 0;
void setup()
{
    Serial.begin(9600);
}

void loop()
{

    if (Serial.available() > 0)
    {
        int number = Serial.parseInt();
        Serial.println("Entered input : ");
        Serial.println(number);
        output = number * number;
        Serial.println("Square of the given number : ");
        Serial.println(output);
    }
}
