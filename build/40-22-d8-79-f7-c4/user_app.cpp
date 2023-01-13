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





void Gyro_Left2();
void START_CHOICE();
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
void do_something();
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99Start();
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_88();
void Gyro_Left();
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo();
void STOP();
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
void reset_Encoder();
void Gyro_Right();
void BEEP();
void EndodJor();
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B22();
void ServoFind();
void RGB_DETECT();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
void _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B8_95_E0_B8_B0_E0_B9_80_E0_B8_81_E0_B8_B5_E0_B8_A2_E0_B8_9A__E0_B8_AA_E0_B8_B0_E0_B8_9E_E0_B8_B2_E0_B8_99();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87();
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7();
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_81_E0_B8_94_E0_B8_87();
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84();
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_8A_E0_B8_B5_E0_B8_A2_E0_B8_A7();
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
Number center_Light;
Number Pick_Angle;
Number degree_RED;
Number side_Light;
Number degree_YELLOW;
Number Wait_spin;
Number movement_fowardPower;
Number degree_BLUE;
int color_Red_State;
int doubleCheck_Color;
int color_Yellow_State;
int color_Green_State;
int color_Blue_State;
Number movement_encoder_Foward;
Number movement_spinPower;
Number degree_GREEN;
int movement_encoder_SticknBridge;
int Start_Time;
Number movement_encoder_getBack;
Number movement_encoder_spinLeft;
Number color_greenblue_getBack;
Number color_redyellow_getback;
Number color_getback_Before_Box;
int i;
Number movement_encoder_spinRight;
int Sp_Encoder;

void Gyro_Left2(){
          while ((digitalRead(15)) == 1) {
    display.clear();

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String(((String("Z : ")+String((Read_angle(2)))))));

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,16,String(((String("Pcik")+String(Pick_Angle)))));
    display.display();
  }
  Pick_Angle = (Read_angle(2));
  STOP();
  while ((Read_angle(2)) - Pick_Angle <= 84) {
  }
  ao();

          return;

}
void START_CHOICE(){
          delay(500);
  wait();
  while(1) {
    display.clear();

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String(Start_Time));

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,46,String((digitalRead(15))));
    display.display();
    if ((digitalRead(15)) == 0) {
      Start_Time = Start_Time + 1;
      delay(2);
    }
    if ((Start_Time < 50) && ((digitalRead(15)) == 1)) {
      delay(200);
      set_IMU();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (((Start_Time >= 51) && (Start_Time < 300)) && ((digitalRead(15)) == 1)) {
      while(1) {
        RGB_DETECT();
      }
    } else if (((Start_Time >= 301) && (Start_Time < 500)) && ((digitalRead(15)) == 1)) {
      ServoFind();
    } else if (((Start_Time >= 501) && (Start_Time < 800)) && ((digitalRead(15)) == 1)) {
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_81_E0_B8_94_E0_B8_87();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_8A_E0_B8_B5_E0_B8_A2_E0_B8_A7();
      ao();
    }
    if (((Start_Time >= 801) && (Start_Time < 1000)) && ((digitalRead(15)) == 1)) {
      set_IMU();
      while(1) {
        display.clear();

        display.setFont(ArialMT_Plain_16);
        display.drawString(0,0,String((Read_angle(0))));

        display.setFont(ArialMT_Plain_16);
        display.drawString(0,16,String((Read_angle(1))));

        display.setFont(ArialMT_Plain_16);
        display.drawString(0,32,String((Read_angle(2))));
        display.display();
      }
    }
  }

          return;

}
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99(){
          reset_Encoder();
  while ((analog(32)) >= center_Light) {
    if ((analog(33)) <= side_Light) {
      while ((analog(33)) <= side_Light) {
        motor(1, 1, 40);
        motor(2, 2, 40);
      }
    }
    if ((analog(25)) <= side_Light) {
      while ((analog(25)) <= side_Light) {
        motor(2, 1, 40);
        motor(1, 2, 40);
      }
    }
    if ((encoderA()) <= movement_encoder_Foward) {
      motor(1, 1, (movement_fowardPower - 0));
    }
    if ((encoderB()) <= movement_encoder_Foward) {
      motor(2, 1, (movement_fowardPower - 0));
    }
    if (((encoderA()) >= movement_encoder_Foward) || ((encoderB()) >= movement_encoder_Foward)) {
      _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    }
    if (((analog(34)) <= center_Light) || ((analog(35)) <= center_Light)) {
      _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
      _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    }
  }
  STOP();
  _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
  _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
  reset_Encoder();

          return;

}
void do_something(){
          center_Light = 2200;
  side_Light = 2000;
  _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_88();
  _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo();
  START_CHOICE();

          return;

}
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99Start(){
          reset_Encoder();
  while (!((encoderA()) >= movement_encoder_Foward)) {
    if ((encoderA()) <= movement_encoder_Foward) {
      motor(1, 1, movement_fowardPower);
    }
    if ((encoderB()) <= movement_encoder_Foward) {
      motor(2, 1, (movement_fowardPower - 2));
    }
  }
  STOP();
  _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
  reset_Encoder();

          return;

}
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_88(){
          servo(1, 90);
  servo(2, 90);
  // ความเร็ว
  movement_fowardPower = 50;
  // ความเร็วการหมุน
  movement_spinPower = 30;
  // ระยะทางเดิน 1 ช่อง
  movement_encoder_Foward = 950;
  // ถอยกลับมากลางแผ่น
  movement_encoder_getBack = 270;
  // หมุน ขวา
  movement_encoder_spinRight = 260;
  // รอก่อนเลี้ยวไจโร
  Wait_spin = 200;
  // หมุน ซ้าย
  movement_encoder_spinLeft = 270;
  // ถอยหลัง ก่อนปล่อย   ลูกบาศ
  color_getback_Before_Box = 75;
  // ถอยหลังจาก ปล่อย
  color_greenblue_getBack = 750;
  // ถอยหลังจาก ปล่อย
  color_redyellow_getback = 800;

          return;

}
void Gyro_Left(){
          Pick_Angle = (Read_angle(2));
  delay(Wait_spin);
  while ((Read_angle(2)) - Pick_Angle <= 80) {

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String(((String("Z : ")+String((Read_angle(2)))))));
    if ((Read_angle(2)) - Pick_Angle <= 80) {
      motor(1, 2, 30);	motor(2, 1, 30);
    }
  }
  STOP();

          return;

}
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo(){
          degree_RED = 65;
  degree_YELLOW = 125;
  degree_BLUE = 50;
  degree_GREEN = 127;

          return;

}
void STOP(){
          ao();
  delay(200);

          return;

}
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2(){
          reset_Encoder();
  STOP();
  while (!(((encoderA()) >= movement_encoder_spinLeft) || ((encoderB()) >= movement_encoder_spinLeft))) {
    if (((encoderA()) <= movement_encoder_spinLeft) && ((encoderB()) <= movement_encoder_spinLeft)) {
      motor(2, 1, movement_spinPower);
      motor(1, 2, movement_spinPower);
    } else if ((encoderA()) <= movement_encoder_spinLeft) {
      motor(1, 2, movement_spinPower);
    } else if ((encoderB()) <= movement_encoder_spinLeft) {
      motor(2, 1, movement_spinPower);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void reset_Encoder(){
          resetEncoderA();
  resetEncoderB();

          return;

}
void Gyro_Right(){
          Pick_Angle = (Read_angle(2));
  delay(Wait_spin);
  while (Pick_Angle - (Read_angle(2)) <= 80) {

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String(((String("Z : ")+String((Read_angle(2)))))));
    if (Pick_Angle - (Read_angle(2)) <= 80) {
      motor(1, 1, 30);	motor(2, 2, 30);
    }
  }
  STOP();

          return;

}
void BEEP(){
          beep_on();
  delay(200);
  beep_off();
  delay(150);

          return;

}
void EndodJor(){
          display.clear();

  display.setFont(ArialMT_Plain_16);
  display.drawString(0,0,String((encoderA())));

  display.setFont(ArialMT_Plain_16);
  display.drawString(0,17,String((encoderB())));
  display.display();

          return;

}
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B22(){
          resetEncoderA();
  resetEncoderB();
  STOP();
  while (!(((encoderA()) >= movement_encoder_spinRight) || ((encoderB()) >= movement_encoder_spinRight))) {
    if (((encoderA()) <= movement_encoder_spinRight) && ((encoderB()) <= movement_encoder_spinRight)) {
      motor(2, 2, movement_spinPower);
      motor(1, 1, movement_spinPower);
    } else if ((encoderA()) <= movement_encoder_spinRight) {
      motor(1, 1, movement_spinPower);
    } else if ((encoderB()) <= movement_encoder_spinRight) {
      motor(2, 2, movement_spinPower);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void ServoFind(){
          while(1) {
    display.clear();

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String((_Knob())));

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,24,String(((_Knob()) / 10)));
    display.display();
    servo(1, ((_Knob()) / 10));
    servo(2, ((_Knob()) / 10));
  }

          return;

}
void RGB_DETECT(){
          display.clear();

  display.setFont(ArialMT_Plain_16);
  display.drawString(0,0,String((Read_Color_TCS(0))));

  display.setFont(ArialMT_Plain_16);
  display.drawString(0,16,String((Read_Color_TCS(1))));

  display.setFont(ArialMT_Plain_16);
  display.drawString(0,32,String((Read_Color_TCS(2))));
  display.display();
  delay(250);

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87(){
          resetEncoderA();
  resetEncoderB();
  while (!(((encoderA()) >= movement_encoder_getBack) || ((encoderB()) >= movement_encoder_getBack))) {
    if ((encoderA()) <= movement_encoder_getBack) {
      motor(1, 2, 40);
    }
    if ((encoderB()) <= movement_encoder_getBack) {
      motor(2, 2, 40);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2(){
          resetEncoderA();
  resetEncoderB();
  STOP();
  while (!(((analog(34)) <= center_Light) && ((analog(35)) <= center_Light))) {
    if (((analog(34)) <= center_Light) && ((analog(35)) <= center_Light)) {
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    }
    if (((analog(34)) <= center_Light) && ((analog(35)) >= center_Light)) {
      motor(1, 2, 45);
      motor(2, 1, 25);
    } else if (((analog(34)) >= center_Light) && ((analog(35)) <= center_Light)) {
      motor(1, 1, 25);
      motor(2, 2, 45);
    } else if (((analog(34)) >= center_Light) && ((analog(35)) >= center_Light)) {
      motor(1, 1, 30);
      motor(2, 1, 32);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          resetEncoderA();
  resetEncoderB();
  while (!(((encoderA()) >= color_greenblue_getBack) || ((encoderB()) >= color_greenblue_getBack))) {
    if ((encoderA()) <= color_greenblue_getBack) {
      motor(1, 2, 40);
    }
    if ((encoderB()) <= color_greenblue_getBack) {
      motor(2, 2, 40);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          ao();
  delay(50);
  if (((Read_Color_TCS(0)) < 82) && ((Read_Color_TCS(1)) > 112)) {
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("GREEN JA")));
    display.display();
    BEEP();
    BEEP();
    BEEP();
    BEEP();
    _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7();
  } else if (((Read_Color_TCS(2)) >= 111) && ((Read_Color_TCS(2)) <= 250)) {
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("BLUE BLUE")));
    display.display();
    BEEP();
    BEEP();
    BEEP();
    _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
    Gyro_Right();
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          ao();
  delay(50);
  if (((Read_Color_TCS(0)) >= 160) && ((Read_Color_TCS(1)) <= 70)) {
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("RED RED")));
    display.display();
    BEEP();
    _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87();
  } else if (((Read_Color_TCS(0)) >= 125) && ((Read_Color_TCS(0)) <= 160)) {
    display.clear();

    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,String(String("YELLOW YELLOW")));
    display.display();
    BEEP();
    BEEP();
    _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
  } else {
    Gyro_Left();
  }

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          resetEncoderA();
  resetEncoderB();
  while (!(((encoderA()) >= color_redyellow_getback) || ((encoderB()) >= color_redyellow_getback))) {
    if ((encoderA()) <= color_redyellow_getback) {
      motor(1, 2, 40);
    }
    if ((encoderB()) <= color_redyellow_getback) {
      motor(2, 2, 40);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void _E0_B8_95_E0_B8_B0_E0_B9_80_E0_B8_81_E0_B8_B5_E0_B8_A2_E0_B8_9A__E0_B8_AA_E0_B8_B0_E0_B8_9E_E0_B8_B2_E0_B8_99(){
          resetEncoderA();
  resetEncoderB();
  while ((encoderA()) <= movement_encoder_SticknBridge) {
    if (((analog(34)) <= center_Light) && ((analog(35)) <= center_Light)) {
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    }
    if (((analog(34)) <= center_Light) && ((analog(35)) >= center_Light)) {
      motor(1, 2, 30);
      motor(2, 1, 35);
    } else if (((analog(34)) >= center_Light) && ((analog(35)) <= center_Light)) {
      motor(1, 1, 30);
      motor(2, 2, 35);
    } else if (((analog(34)) >= center_Light) && ((analog(35)) >= center_Light)) {
      motor(1, 1, 30);	motor(2, 1, 30);
    }
  }
  STOP();
  _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
  while(1) {
    _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
  }

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2(){
          resetEncoderA();
  resetEncoderB();
  while (!(((encoderA()) >= color_getback_Before_Box) || ((encoderB()) >= color_getback_Before_Box))) {
    if ((encoderA()) <= color_getback_Before_Box) {
      motor(1, 2, 40);
    }
    if ((encoderB()) <= color_getback_Before_Box) {
      motor(2, 2, 40);
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();
  delay(50);

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87(){
          motor(1, 2, 30);	motor(2, 2, 30);
  delay(80);
  STOP();
  if (((Read_Color_TCS(0)) >= 160) && ((Read_Color_TCS(1)) <= 70)) {
    doubleCheck_Color = 2;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("True Red")));
    display.display();
    _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87();
  } else {
    doubleCheck_Color = 1;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("False Red")));
    display.display();
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          motor(1, 2, 30);	motor(2, 2, 30);
  delay(80);
  STOP();
  if (((Read_Color_TCS(0)) >= 120) && ((Read_Color_TCS(0)) <= 160)) {
    doubleCheck_Color = 2;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("True Yellow")));
    display.display();
    _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
  } else {
    doubleCheck_Color = 1;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("False Yellow")));
    display.display();
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7(){
          motor(1, 1, 30);	motor(2, 1, 30);
  delay(100);
  STOP();
  if (((Read_Color_TCS(0)) < 82) && ((Read_Color_TCS(1)) > 112)) {
    doubleCheck_Color = 2;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("True Green")));
    display.display();
    _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7();
  } else {
    doubleCheck_Color = 1;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("False Green")));
    display.display();
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          motor(1, 1, 30);	motor(2, 1, 30);
  delay(100);
  STOP();
  if (((Read_Color_TCS(2)) >= 115) && ((Read_Color_TCS(2)) <= 250)) {
    doubleCheck_Color = 2;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("True Blue")));
    display.display();
    _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
  } else {
    doubleCheck_Color = 1;
    display.clear();

    display.setFont(ArialMT_Plain_24);
    display.drawString(0,0,String(String("False Blue")));
    display.display();
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
  }

          return;

}
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_81_E0_B8_94_E0_B8_87(){
          if (color_Red_State == 0) {
    if (doubleCheck_Color == 1) {
      doubleCheck_Color = 0;
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (doubleCheck_Color == 2) {
      doubleCheck_Color = 0;
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_81_E0_B8_94_E0_B8_87();
      color_Red_State = 1;
      _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
      Gyro_Right();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    Gyro_Right();
  }

          return;

}
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          if (color_Yellow_State == 0) {
    if (doubleCheck_Color == 1) {
      doubleCheck_Color = 0;
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (doubleCheck_Color == 2) {
      doubleCheck_Color = 0;
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
      color_Yellow_State = 1;
      _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
      Gyro_Right();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    Gyro_Right();
  }

          return;

}
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7(){
          if (color_Green_State == 0) {
    if (doubleCheck_Color == 1) {
      doubleCheck_Color = 0;
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (doubleCheck_Color == 2) {
      doubleCheck_Color = 0;
      motor(1, 2, 30);	motor(2, 2, 30);
      delay(200);
      STOP();
      _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_8A_E0_B8_B5_E0_B8_A2_E0_B8_A7();
      color_Green_State = 1;
      _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
      Gyro_Right();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    Gyro_Right();
  }

          return;

}
void _E0_B8_A7_E0_B8_B2_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          if (color_Blue_State == 0) {
    if (doubleCheck_Color == 1) {
      doubleCheck_Color = 0;
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (doubleCheck_Color == 2) {
      doubleCheck_Color = 0;
      motor(1, 2, 30);	motor(2, 2, 30);
      delay(200);
      STOP();
      _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
      color_Blue_State = 1;
      _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84();
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
      Gyro_Right();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    Gyro_Right();
  }

          return;

}
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_81_E0_B8_94_E0_B8_87(){
          servo(1, 90);
  delay(500);
  servo(1, degree_RED);
  delay(1000);
  servo(1, 90);
  STOP();

          return;

}
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          servo(1, 90);
  delay(500);
  servo(1, degree_YELLOW);
  delay(1000);
  servo(1, 90);
  STOP();

          return;

}
void _E0_B8_A2_E0_B8_81_E0_B8_98_E0_B8_87_E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84(){
          if ((color_Red_State == 1) && ((color_Yellow_State == 1) && ((color_Blue_State == 1) && (color_Green_State == 1)))) {
    ao();
    delay(500);
    servo(1, 0);
    delay(500);
    for (i = 1; i <= 20; i++) {
      BEEP();
    }
    ao();
  } else {
  }

          return;

}
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_8A_E0_B8_B5_E0_B8_A2_E0_B8_A7(){
          servo(2, 90);
  delay(500);
  servo(2, degree_GREEN);
  delay(1000);
  servo(2, 90);
  STOP();

          return;

}
void _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          servo(2, 90);
  delay(500);
  servo(2, degree_BLUE);
  delay(1000);
  servo(2, 90);
  STOP();

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
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
/**
 * Describe this function...
 */
motor(1, 2, 20);	motor(2, 1, 20);
  Gyro_Left2();

  
}
