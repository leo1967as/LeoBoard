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
int iiinput;
int ssetpoint;
int eerror;
int KKpp;
int OOutput;
int interrgal;
int KKii;
int deeerivative;
int KKdd;
int lastErroR;

void GyroX(){
          iiinput = (Read_angle(2));
  eerror = ssetpoint - iiinput;
  interrgal = interrgal + eerror;
  deeerivative = iiinput - lastErroR;
  OOutput = KKpp * eerror + KKii * interrgal + KKdd * deeerivative;
  if (OOutput > 100) {
    OOutput = 100;
  }
  if (OOutput < 0) {
    OOutput = 0;
  }
  lastErroR = eerror;

          return;

}

void setup()
{
	NKP_ONE();
    /* setup code */

    /* block setup */
set_IMU();
  ssetpoint = 0;
  KKpp = 1;
  KKii = 0.1;
  KKdd = 0.01;
}

void loop()
{
  /**
 * Describe this function...
 */
  display.clear();
  display.setFont(ArialMT_Plain_16);
  display.drawString(0,0,String(OOutput));
  display.display();

  
}
