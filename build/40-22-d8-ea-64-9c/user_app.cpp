#include "NKP_ONE.h"
// float Kp = 0.5 ;
//   float Ki = 0;
//   float Kd = 0;
//   uint16_t setpoint;
//   float present_position;
//   float errors = 0;
//   float output = 0;
//   float integral ;
//   float derivative ;
//   float previous_error;





void do_something();
void do_something2();

void do_something(){
          servo(1, 90);
  servo(2, 90);
  servo(3, 90);
  servo(4, 90);
  delay(500);

          return;

}
void do_something2(){
          servo(1, 0);
  servo(2, 0);
  servo(3, 0);
  servo(4, 0);
  delay(500);

          return;

}

void setup()
{
	NKP_ONE();
    /* setup code */

    /* block setup */

}

void loop()
{
  /**
 * Describe this function...
 */
/**
 * Describe this function...
 */
  do_something();
  do_something2();

  
}
