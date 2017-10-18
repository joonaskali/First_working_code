#include <Servo.h>

Servo servo;

int servo2;


void setup ()
{
  servo.attach(10);
} 


void loop()
{
 servo.write(10);
 delay(50);
servo.write(-10);
delay(100);
 servo.write(50);
 delay(50);
servo.write(-50);
delay(50);

}
