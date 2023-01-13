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
Number eerror;
int ssetpoint;
int interrgal;
int OOutput;
int KKpp;
int deeerivative;
int KKii;
int KKdd;
int lastErroR;

void GyroX(){
          iiinput = (Read_angle(2));
  eerror = ssetpoint - iiinput;
  interrgal = interrgal + eerror;
  deeerivative = iiinput - lastErroR;
  OOutput = KKpp * eerror + KKii * interrgal + KKdd * deeerivative;
  if (OOutput > 40) {
    OOutput = 40;
  }
  if (OOutput < 0) {
    OOutput = 0;
  }
  motor(1, 2, OOutput);	motor(2, 1, OOutput);
  lastErroR = eerror;

          return;

}

void setup()
{
	NKP_ONE();
    /* setup code */

    /* block setup */
set_IMU();
  ssetpoint = 1090;
  KKpp = 1.5;
  KKii = 0;
  KKdd = 0;
}

void loop()
{
  /**
 * Describe this function...
 */
  display.clear();
  display.setFont(ArialMT_Plain_16);
  display.drawString(0,0,String(OOutput));
  display.setFont(ArialMT_Plain_16);
  display.drawString(0,16,String(((String("AngleX: ")+String((Read_angle(0)))))));
  display.setFont(ArialMT_Plain_16);
  display.drawString(0,32,String(((String("AngleY: ")+String((Read_angle(1)))))));
  display.setFont(ArialMT_Plain_16);
  display.drawString(0,48,String(((String("AngleZ: ")+String((Read_angle(2)))))));
  display.display();

  
}
