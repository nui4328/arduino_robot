#include "Servo.h"

Servo servo10;
Servo servo11;
Servo servo12;

void servo(int servo, int angle)
    {
      servo10.attach(10);
      servo11.attach(11);
      servo12.attach(12);

      if(servo==10)
        {
          servo10.write(angle);
        }
      if(servo==11)
        {
          servo11.write(angle);
        }
      if(servo==12)
        {
          servo12.write(angle);
        }     
    }
