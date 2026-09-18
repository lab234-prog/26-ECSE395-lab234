/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;// changed MOTOR_B_1A to A1 LAB234 9/18/2026
const int MOTOR_B_1B = A0; // changed MOTOR_B_1B to A0 LAB234 9/18/2026

void setup() {
  // TODO: Initialize Serial communication
   Serial.begin(115200);// made Serial.begin(115200) to initialize serial communication LAB234 9/18/2026

  // TODO: Set your motor pins as OUTPUTs
   pinMode(MOTOR_B_1A, OUTPUT);// made pinMode(MOTOR_B_1A, OUTPUT) to set the motor pin as output LAB234 9/18/2026
   pinMode(MOTOR_B_1B, OUTPUT); // made pinMode(MOTOR_B_1B, OUTPUT) to set the motor pin as output LAB234 9/18/2026

   Serial.println("Setup complete");// made Serial.println("Setup complete") to indicate the setup is complete LAB234 9/18/2026
}

void loop() {
  // --- SECTION 1: Clockwise (5s) ---
   Serial.println("Clockwise 5s");//made print statement to indicate the motor is running clockwise LAB234 9/18/2026
  
  // TODO: Write HIGH to one pin and LOW to the other
   digitalWrite(MOTOR_B_1A, HIGH);//filled out the blank, added digitalWrite to turn on the motor LAB234 9/18/2026
   digitalWrite(MOTOR_B_1B, LOW);//filled out the blank, added digitalWrite to keep B_1B off  LAB234 9/18/2026
  
   delay(5000);

  // --- SECTION 2: Stop (2s) ---
   Serial.println("Stop 2s");//made print statement to indicate the motor is stopped LAB234 9/18/2026
  
  // TODO: Turn off the motor
   digitalWrite(MOTOR_B_1A, LOW);//filled out the blank, added digitalWrite to turn off the motor LAB234 9/18/2026
   digitalWrite(MOTOR_B_1B, LOW);//filled out the blank, added digitalWrite to turn off the motor LAB234 9/18/2026

   delay(2000);

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("Counterclockwise 5s");//made print statement to indicate the motor is running counterclockwise LAB234 9/18/2026
  
  // TODO: Write HIGH to one pin and LOW to the other
   digitalWrite(MOTOR_B_1A, LOW);//filled out the blank, made digitalWrite to keep B_1A off  LAB234 9/18/2026
   digitalWrite(MOTOR_B_1B, HIGH);//filled out the blank, made digitalWrite to turn on the motor LAB234 9/18/2026

    delay(5000);

  // --- SECTION 4: Stop (2s) ---
  Serial.println("Stop 2s");//made print statement to indicate the motor is stopped LAB234 9/18/2026
  
  // TODO: Turn off the motor
   digitalWrite(MOTOR_B_1A, LOW);//filled out the blank, added digitalWrite to turn off the motor LAB234 9/18/2026
   digitalWrite(MOTOR_B_1B, LOW);//filled out the blank, added digitalWrite to turn off the motor LAB234 9/18/2026

   delay(2000);
}

*/
// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.