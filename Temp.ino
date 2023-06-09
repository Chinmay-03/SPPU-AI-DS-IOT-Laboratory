#include <DHT.h>
#define DHTTYPE DHT11
#define DHTPin A5

DHT dht(DHTPin, DHTTYPE);

void setup() {
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("\nTemperature: ");
  Serial.print(temp);
  Serial.print("\nHumidity: ");
  Serial.print(humidity);
  delay(1000);
}
