#include <Servo.h>

Servo servo_9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servo_9.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(servo_9.read());
}
