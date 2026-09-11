#include <Arduino.h>

// function prototype
float voltage(float analogvalue);
#define LED_PIN 13

// Put your potentiometer pin assignment here
const int sensorPin = 0;
#define POT_PIN A1

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // This is the line for printing in the serial
    //9.11.2026 the line now reads the sensorVoltage from the voltage function LAB234
    int sensorValue=analogRead(POT_PIN);
    float sensorVoltage=voltage(sensorValue);
    
    if (sensorVoltage>0.3){
        Serial.println("Touch detected!");
        digitalWrite(LED_PIN, HIGH);//turns LED on if no touch. LAB234
    }
    else{
        Serial.println("No touch detected...");
        digitalWrite(LED_PIN, LOW);//turns LED off if no touch. LAB234
    }
    //sets the min voltage for detection 0.3v, and reports that touch was detected if so. Otherwise no touch is detected. LAB234
    
    delay(50); 
}

// function to calculate output voltage
//switched output to a float, makes reference voltage 3.3 and max value 4095. LAB234
float voltage(float analogvalue){
    float voltage;
    voltage=analogvalue*3.3/4095;
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage

    delay(50);
    return voltage;
}