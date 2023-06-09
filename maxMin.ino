#include <DHT.h>
#include <limits.h>
float min = 95, max = 0, temp;
DHT dht(A5, DHT11);
void setup()
{
    // put your setup code here, to run once:
    dht.begin();
    Serial.begin(9600);
    while (!Serial.available())
    {
        temp = (dht.readTemperature() * 9 / 5) + 32;
        Serial.print("Temp in farenheit : ");
        Serial.println(temp);
        delay(1000);

        if (min > temp)
        {
            min = temp;
        }
        if (max < temp)
        {
            max = temp;
        }
    }
    Serial.print("\n\n\nMin and max temperatures are ");
    Serial.print(min);
    Serial.print(" and ");
    Serial.println(max);
}
void loop()
{
    // put your main code here, to run repeatedly:
}
