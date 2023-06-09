#include <DHT.h>
#define DHTTYPE DHT11
int DHTPIN = A5;
DHT dht(DHTPIN, DHTTYPE);
float t, h;


void setup()
{
    Serial.begin(9600);
    dht.begin();
    pinMode(DHTPIN, INPUT);
    delay(2000);
}
void loop()  
{
    t = dht.readTemperature();
    Serial.print("Temperature: ");
    Serial.println(t);
    h = dht.readHumidity();
    Serial.print("Humidity: ");
    Serial.println(h);
    delay(1000);
}
