#include <Servo.h> //add servo library

Servo myServo; //create a servo object

int servo=9;
int pot=A1;
int pVal=0;
int angle=0;
int dt=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servo); // attaches servo "object" to servo pin
  pinMode(pot,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  pVal=analogRead(pot); //looks at voltage on pin & converts into 0-1023
  angle=map(pVal, 0, 1023, 0, 180); //converts pot position into servo angle
  myServo.write(angle); //sends control signal to servo 
  delay(dt);
}
