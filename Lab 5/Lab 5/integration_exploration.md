# Sensor-Actuator Lab
## Goals
- work with ESP32 & integrate both sensors&actuators
- upload code to ESP32 via PlatformIO on VS code (windows used)
## Specific project
- connect passive buzzer module to PIR motion sensor
- make buzzer get louder when motion sensor triggers
- Buzzer makes the jaws sound when triggered
## Layout
1. VCC of motion detector directly connected to 5v on power supply, GND is directly connected to power supply's ground. The I/O of the sensor connects to pin 12. 
2. The buzzer connects the the ESP32's ground and 3.3V output. The data pin connects to A0.
3. the power supply connects to the BAT pin.
## Time Report and Reflection
1. ~1 hr to finish
2. low difficulty
3. very comfortable
4. nope!