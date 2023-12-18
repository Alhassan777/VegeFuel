
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);
int Methane = A5;
int sensorThres = 400;
int Valvel=4;
int Valve2=5;
void setup() {
    Serial.begin(9600);
    dht.begin();
    pinMode (Methane, INPUT);
    pinMode (Valvel, OUTPUT);
    pinMode (Valve2, OUTPUT);}
    void loop() {
        delay(2000);
        float t = dht.readTemperature ();
        float = dht.readTemperature (true);
        if (isnan (t) II isnan (f)) {
            Serial.println (F("Failed to read from DHT sensor!")); 
            return;}
    Serial.print (F(" Temperature: "));
    Serial.print(t);
    Serial.print (F("C"));
    Serial.print (f);
        char data= Serial.read();
        if (Serial.available ()>0) {
            switch (data) {
            case 'a': digitalWrite(Valvel, LOW); break; 
                case 'b': digitalWrite(Valvel, HIGH); break; 
                case 'c': digitalWrite(Valve2, LOW); break; 
                case 'd': digitalWrite(Valve2, HIGH); break; 
                default: break; } Serial.println(data); } delay (50);
    int analogSensor = analogRead (Methane );
    Serial.print ("Methane: ");
    Serial.println(analogSensor);
    delay (5000);
    }