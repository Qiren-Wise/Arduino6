#include <Servo.h>

Servo servo_9;

void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
servo_9.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i =1;i<=180;i = i + (1))
{
  digitalWrite(8,LOW);
  servo_9.write(i);
  delay(10);
  }

  for (int i=180;i<=1;i = i-(1))
  {
    servo_9.write(i);
    delay(10);
    }
}
