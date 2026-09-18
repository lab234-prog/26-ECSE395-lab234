/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // TODO: Initialize Serial communication
   Serial.begin(115200);

  // TODO: Set your motor pins as OUTPUTs
   pinMode(MOTOR_B_1A, OUTPUT);
   pinMode(MOTOR_B_1B, OUTPUT); 

   Serial.println("Setup complete");
}

void loop() {

   int a = 0;
   for(int i = 0; a=1; i++){
  // TODO: Write HIGH to one pin and LOW to the other
   analogWrite(MOTOR_B_1A, (255*sin(i)/4)+128);
   analogWrite(MOTOR_B_1B, 0);
   delay(200);
   }
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.*/