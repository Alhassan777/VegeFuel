#include "DHT.h"

// Define the pin for the DHT sensor
#define DHTPIN 2
// Define the type of DHT sensor (DHT11 in this case)
#define DHTTYPE DHT11

// Create an instance of the DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Define pin for the methane sensor
int Methane = A5;
// Threshold value for methane sensor
int sensorThres = 400;

// Define pins for the valves
int Valve1 = 4;
int Valve2 = 5;

void setup() {
    // Initialize serial communication
    Serial.begin(9600);
    
    // Initialize the DHT sensor
    dht.begin();

    // Set pin modes for methane sensor and valves
    pinMode(Methane, INPUT);
    pinMode(Valve1, OUTPUT);
    pinMode(Valve2, OUTPUT);
}

void loop() {
    // Delay for 2 seconds
    delay(2000);

    // Read temperature and humidity from DHT sensor
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    // Check if the reading is valid
    if (isnan(temperature) || isnan(humidity)) {
        Serial.println(F("Failed to read from DHT sensor!"));
        return;
    }

    // Print temperature
    Serial.print(F("Temperature: "));
    Serial.print(temperature);
    Serial.println(F("C"));

    // Print humidity
    Serial.print(F("Humidity: "));
    Serial.print(humidity);
    Serial.println(F("%"));

    // Read a character from serial input
    if (Serial.available() > 0) {
        char data = Serial.read();
        switch (data) {
            // Control Valve1
            case 'a': digitalWrite(Valve1, LOW); break;
            case 'b': digitalWrite(Valve1, HIGH); break;
            // Control Valve2
            case 'c': digitalWrite(Valve2, LOW); break;
            case 'd': digitalWrite(Valve2, HIGH); break;
            default: break;
        }
        Serial.println(data);
    }

    // Read methane sensor value
    int analogSensor = analogRead(Methane);
    Serial.print(F("Methane: "));
    Serial.println(analogSensor);

    // Delay for 5 seconds
    delay(5000);
}
