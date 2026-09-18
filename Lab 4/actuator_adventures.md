# Actuator Adventures Lab
Third assignment working with the ESP32.
## Objectives
- Work on connecting actuators to ESP32
### Notes: 
- using Windows 11
- Upload code to ESP32 via PlatformIO
- code for DC gear motor will be under TT motor
- code for Servo motor will be under servo motor
## Steps
1. Make actuators.md file
2. Set up TT motor and circuit in accordance with the online output (ignore instructions in repo, can cause issues with computer)
3. Set up DC power supply to 0.15A and 3V
4. take a photo of the circuit, and put photo in actuator adventures.md (see TT circuit.jpg)
5. Run TT Motor Rotate.cpp on the ESP32 and record behavior, changing variables one at a time.
- changing the delay makes the motor run for a different period of time
- changing writeanalog changes the speed of the motor
- switching writeAnalog values flips the motor's direction
6. make the TT motor rotate according to the specifications in TT Motor Rotate.
7. record and upload video on canvas
8. For extra credit, make TT motor EC file for a changing speed on the TT motor.
9. set up servo motor circuit
10. take photo and upload to github (see servo circuit.jpg)
11. upload servo motor.cpp to microcontroller and observe behavior, recording changes according to code adjustments
- changing minPulseWidth changes the minimum amount of amount of time it can take to send a "move" pulse
- changing maxPulseWidth changes the maximum amount of amount of time it can take to send a "move" pulse
- changing setPeriodHertz seems to make the loop alternate between a quick rotation and a slow one if set higher.
- changing Rotation range obviously changes the range the servo moves
- changing the delay changes the speed of the servo.
12. fill out Servo Motor Random.cpp
13. record behavior from code and upload
14. Do extra credit servo code under Servo Motor Code.cpp
15. Report time and fill out reflection

## Reflection:

1. How long did it take you to complete this assignment?
~2.25 hours
2. What level of difficulty would you associate with this assignment?
medium
3. If you associated medium/high difficulty with this assignment, what aspect did you
find the most difficult? 
time constraint 
4. How comfortable do you currently feel with the course content?
relatively
5. Do you have any additional information or feedback you would like to share with
the instructors?
