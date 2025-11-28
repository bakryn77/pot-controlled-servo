Potentiometer Controlled Servo (Arduino)
Overview:

This project uses an Arduino, a micro servo, and a potentiometer to control the angle of the servo. Rotating the potentiometer changes the analog voltage sent to the Arduino, which is mapped to a servo angle between 0 and 180 degrees.

**This project demonstrates:
Reading analog input values
Mapping analog ranges to servo angles
Using the Servo library
Basic hardware interaction between a sensor and an actuator

**Components Used:
Arduino Uno 
SG90 micro servo
10k potentiometer
Jumper wires
Breadboard
USB cable

-Circuit Diagram-
Potentiometer:
One outer pin to 5V
Other outer pin to GND
Middle pin to A1

Servo:
Brown/Black wire → GND
Red wire → 5V
Orange/Yellow wire → Digital pin 9

**Wiring Summary:
Potentiometer center pin → A1
Servo signal wire → D9
All grounds connected together
Servo powered from 5V and GND from Arduino but connected to rails
