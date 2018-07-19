#include <Servo.h>

Servo julioServo;


void setup() {
  julioServo.attach(9);
  

}

void loop() {
  julioServo.write(0);
  delay(3000);
  julioServo.write(120);
  delay(3000);

}
