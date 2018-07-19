#include <Servo.h>

Servo julioServo; //Create new servo device


void setup() {
  julioServo.attach(9); //Attach that servo device to pin 9
  

}

void loop() {
  julioServo.write(0); //send the servo a value of 0
  delay(3000); //wait 3000 miliseconds
  julioServo.write(120); //send it 120
  delay(3000); //wait again

}
