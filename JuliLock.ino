#include <Servo.h> //Include the library for using servos

Servo julioServo; //Create new servo device with the name julioServo


void setup() { //In the void setup thos runs once
  julioServo.attach(9); //Attach that servo device to pin 9
  

} //Always close void

void loop() { //The loop void runs over and over
  julioServo.write(0); //send the servo a value of 0
  delay(3000); //wait 3000 miliseconds
  julioServo.write(120); //send it 120
  delay(3000); //wait again

} //Close
