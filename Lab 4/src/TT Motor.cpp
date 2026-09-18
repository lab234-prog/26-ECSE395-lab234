/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1; // Replace 0 with your pin number made MOTOR_B_1A to A1 LAB234 9/18/2026
const int MOTOR_B_1B = A0; // Replace 0 with your pin number made MOTOR_B_1B to A0 LAB234 9/18/2026


void setup() {

  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  

  analogWrite(MOTOR_B_1A, 0);
  analogWrite(MOTOR_B_1B, 128);// changed MOTOR_B_1B to 128 LAB234 9/18/2026

  delay(3000);// changed delay to 3000 LAB234 9/18/2026

  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);

}

void loop() { 
}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32.*/