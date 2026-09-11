/*#include <Arduino.h>

//Put your potentiometer pin assignment here
#define POT_PIN A1
const int sensorPin = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  //This line should print out the values from the sensor by Serial.println(??);
  int sensorValue= analogRead(POT_PIN);
  Serial.println(sensorValue);
  
  delay(50); 
}
//note, you may have to press the reset button on the */