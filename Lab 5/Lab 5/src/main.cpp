#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);// Initialize serial communication at 115200 baud rate
  #define MOTION 12// Define the pin connected to the motion sensor
  #define Buzzer A0// Define the pin connected to the buzzer
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue= digitalRead(MOTION);// Read the value from the motion sensor
  if (sensorValue == HIGH) {
    Serial.println("Motion detected");
    tone(Buzzer, 659.26); // Activate the buzzer with a 500 Hz tone
    delay(500); // Add a delay to allow the first tone to be heard
    tone(Buzzer, 698.46); // Activate the buzzer with a F note 
    delay(250); // Add a delay to allow the second tone to be heard
    noTone(Buzzer); // Deactivate the buzzer after playing the tones
    delay(500); // Add a delay to allow the buzzer to stop before the next check
  } else {// No motion detected
    Serial.println("No motion");
    noTone(Buzzer); // Deactivate the buzzer
    delay(500);
  }
  delay(500); // Add a delay to avoid flooding the serial monitor
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}