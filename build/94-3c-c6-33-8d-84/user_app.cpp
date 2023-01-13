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





void GyroX();
int i;
int offset;
Number PickAngle;
int KKpp;
int ssetpoint;
int KKii;
int KKdd;
int OOutput;
int lastErroR;
int eerror;
int iiinput;
int interrgal;

void GyroX(){
          while ((digitalRead(15)) == 1) {
    display.clear();

    display.setFont(ArialMT_Plain_10);
    display.drawString(0,0,String(((String("AngleZ : ")+String((Read_angle(2)))))));
    display.display();
    delay(1500);
    ao();
  }
  i = 0;
  PickAngle = (Read_angle(2));
  ssetpoint = PickAngle + 90;
  while (!((((Read_angle(2)) >= ssetpoint - offset) && ((Read_angle(2)) <= ssetpoint + offset)) && (i >= 5))) {
    if (OOutput > 40) {
      OOutput = 40;
    }
    if (OOutput <= 10) {
      OOutput = 0;
    }
    if ((Read_angle(2)) > ssetpoint) {
      motor(1, 1, 50);	motor(2, 2, 50);
      delay(1);
    }
    if (((Read_angle(2)) >= ssetpoint - offset) && ((Read_angle(2)) <= ssetpoint + offset)) {
      OOutput = 0;
      i = i + 1;
    }
    motor(1, 2, OOutput);	motor(2, 1, OOutput);
    lastErroR = eerror;
    iiinput = (Read_angle(2));
    eerror = ssetpoint - iiinput;
    interrgal = interrgal + eerror;
    PickAngle = iiinput - lastErroR;
    OOutput = KKpp * eerror + KKii * interrgal + KKdd * PickAngle;
  }

          return;

}

void setup()
{
	NKP_ONE();
    /* setup code */

    /* block setup */
set_IMU();
  offset = 1;
  KKpp = 5;
  KKii = 0;
  KKdd = 0;
}

void loop()
{
  /**
 * Describe this function...
 */
  GyroX();

  
}
