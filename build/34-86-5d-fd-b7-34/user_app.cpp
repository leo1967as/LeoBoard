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





void START_CHOICE();
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99Start();
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_88();
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_882();
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo();
void STOP();
void reset_Encoder();
void BEEP();
void EndodJor();
void ServoFind();
void RGB_DETECT();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
void _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2();
void _E0_B8_95_E0_B8_B0_E0_B9_80_E0_B8_81_E0_B8_B5_E0_B8_A2_E0_B8_9A__E0_B8_AA_E0_B8_B0_E0_B8_9E_E0_B8_B2_E0_B8_99();
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
Number Light_Center;
Number degree_RED;
int Foward;
Number Light_Mid;
Number degree_YELLOW;
int Stick;
Number movement_fowardPower;
Number Light_Side;
Number degree_BLUE;
Number color_greenblue_getBack;
Number color_redyellow_getBack;
Number color_getback_Before_Box;
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
int i;
Number Foward_Time;
Number movement_encoder_spinRight;
Number movement_encoder_spinLeft;
Number Stick_Time;
int Sp_Encoder;

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
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    } else if (((Start_Time >= 50) && (Start_Time < 300)) && ((digitalRead(15)) == 1)) {
      while(1) {
        RGB_DETECT();
      }
    } else if (((Start_Time >= 301) && (Start_Time < 500)) && ((digitalRead(15)) == 1)) {
      ServoFind();
    } else if (((Start_Time >= 501) && (Start_Time < 700)) && ((digitalRead(15)) == 1)) {
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_81_E0_B8_94_E0_B8_87();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
      _E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2_E0_B9_80_E0_B8_8A_E0_B8_B5_E0_B8_A2_E0_B8_A7();
      ao();
    } else if (((Start_Time >= 700) && (Start_Time < 800)) && ((digitalRead(15)) == 1)) {
      STOP();
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
      STOP();
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
    }
  }

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
void _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99(){
          reset_Encoder();
  Foward = 0;
  while (!((analog(32)) <= Light_Center)) {
    Foward = Foward + 1;
    if (Foward >= Foward_Time) {
      Foward = 0;
      _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    }
    if ((analog(32)) >= Light_Center) {
      motor(2, 1, movement_fowardPower);
      motor(1, 1, (movement_fowardPower - 1));
    }
    if ((analog(33)) <= Light_Side) {
      while ((analog(33)) <= Light_Mid) {
        motor(1, 1, 30);
        motor(2, 2, 30);
      }
    }
    if ((analog(25)) <= Light_Side) {
      while ((analog(25)) <= Light_Mid) {
        motor(2, 1, 30);
        motor(1, 2, 30);
      }
    }
    if (((analog(34)) <= Light_Mid) || ((analog(35)) <= Light_Mid)) {
      Foward = 0;
      _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
      _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    }
  }
  Foward = 0;
  STOP();
  _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2();
  _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
  reset_Encoder();

          return;

}
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_88(){
          servo(1, 90);
  servo(2, 90);
  // ความเร็ว
  movement_fowardPower = 60;
  // ความเร็วการหมุน
  movement_spinPower = 40;
  // ระยะทางเดิน 1 ช่อง
  movement_encoder_Foward = 900;
  // ถอยกลับมากลางแผ่น
  movement_encoder_getBack = 250;
  // หมุน ขวา
  movement_encoder_spinRight = 300;
  // หมุน ซ้าย
  movement_encoder_spinLeft = 300;
  // ถอยหลัง ก่อนปล่อย   ลูกบาศ
  color_getback_Before_Box = 75;
  // ถอยหลังจาก ปล่อย
  color_greenblue_getBack = 675;
  // ถอยหลังจาก ปล่อย
  color_redyellow_getBack = 725;

          return;

}
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_882(){
          servo(1, 90);
  servo(2, 90);
  servo(4, 0);
  // ความเร็ว
  movement_fowardPower = 20;
  // ความเร็วการหมุน
  movement_spinPower = 40;
  // ความเร็ว
  Foward_Time = 400;
  // ถอยหลัง ก่อนปล่อย   ลูกบาศ
  color_getback_Before_Box = 75;
  // ถอยหลังจาก ปล่อย
  color_greenblue_getBack = 500;
  // ถอยหลังจาก ปล่อย
  color_redyellow_getBack = 450;
  // ถอยหลังจาก ปล่อย
  Stick_Time = 1000;

          return;

}
void _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo(){
          degree_RED = 65;
  degree_YELLOW = 110;
  degree_BLUE = 65;
  degree_GREEN = 130;

          return;

}
void STOP(){
          ao();
  delay(150);

          return;

}
void reset_Encoder(){
          resetEncoderA();
  resetEncoderB();

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
          STOP();
  motor(1, 2, 30);	motor(2, 2, 30);
  delay(200);
  STOP();

          return;

}
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2(){
          reset_Encoder();
  STOP();
  motor(1, 2, 40);	motor(2, 1, 40);
  delay(360);
  STOP();

          return;

}
void _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2(){
          reset_Encoder();
  STOP();
  motor(1, 1, 40);	motor(2, 2, 40);
  delay(360);
  STOP();

          return;

}
void _E0_B8_9B_E0_B8_A3_E0_B8_B1_E0_B8_9A_E0_B8_AB_E0_B8_99_E0_B9_89_E0_B8_B2(){
          STOP();
  Stick = 0;
  while (!(((analog(34)) <= Light_Center) && ((analog(35)) <= Light_Center))) {
    Stick = Stick + 1;
    if (((analog(34)) <= Light_Center) && ((analog(35)) <= Light_Center)) {
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    }
    if (((analog(34)) <= Light_Center) && ((analog(35)) >= Light_Center)) {
      motor(1, 2, 45);
      motor(2, 1, 30);
    } else if (((analog(34)) >= Light_Center) && ((analog(35)) <= Light_Center)) {
      motor(1, 1, 30);
      motor(2, 2, 45);
    } else if (((analog(34)) >= Light_Center) && ((analog(35)) >= Light_Center)) {
      motor(1, 1, 40);	motor(2, 1, 40);
    }
    if (Stick >= Stick_Time) {
      Stick = 0;
      STOP();
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    }
  }
  STOP();
  resetEncoderA();
  resetEncoderB();

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          motor(1, 2, 50);	motor(2, 2, 50);
  delay(color_greenblue_getBack);
  STOP();
  delay(50);

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          motor(1, 2, 50);	motor(2, 2, 50);
  delay(color_redyellow_getBack);
  STOP();
  delay(50);

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          ao();
  delay(200);
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
  } else if (((Read_Color_TCS(2)) >= 112) && ((Read_Color_TCS(2)) <= 200)) {
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
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B9_81_E0_B8_A3_E0_B8_81_E0_B9_81_E0_B8_94_E0_B8_87__E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87(){
          ao();
  delay(200);
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
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_8B_E0_B9_89_E0_B8_B2_E0_B8_A2();
  }

          return;

}
void _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_81_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_9B_E0_B8_A5_E0_B9_88_E0_B8_AD_E0_B8_A2(){
          motor(1, 2, 50);	motor(2, 2, 50);
  delay(color_getback_Before_Box);
  STOP();
  delay(50);

          return;

}
void _E0_B8_95_E0_B8_B0_E0_B9_80_E0_B8_81_E0_B8_B5_E0_B8_A2_E0_B8_9A__E0_B8_AA_E0_B8_B0_E0_B8_9E_E0_B8_B2_E0_B8_99(){
          resetEncoderA();
  resetEncoderB();
  while ((encoderA()) <= movement_encoder_SticknBridge) {
    if (((analog(34)) <= Light_Center) && ((analog(35)) <= Light_Center)) {
      _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87();
      while(1) {
        _E0_B9_80_E0_B8_94_E0_B8_B4_E0_B8_99();
      }
    }
    if (((analog(34)) <= Light_Center) && ((analog(35)) >= Light_Center)) {
      motor(1, 2, 30);
      motor(2, 1, 35);
    } else if (((analog(34)) >= Light_Center) && ((analog(35)) <= Light_Center)) {
      motor(1, 1, 30);
      motor(2, 2, 35);
    } else if (((analog(34)) >= Light_Center) && ((analog(35)) >= Light_Center)) {
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
  }

          return;

}
void _E0_B9_80_E0_B8_8A_E0_B9_87_E0_B8_84_E0_B8_A3_E0_B8_AD_E0_B8_9A_E0_B8_AA_E0_B8_AD_E0_B8_87__E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99(){
          motor(1, 1, 30);	motor(2, 1, 30);
  delay(100);
  STOP();
  if (((Read_Color_TCS(2)) >= 120) && ((Read_Color_TCS(2)) <= 200)) {
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
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
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
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_81_E0_B8_94_E0_B8_87_E0_B9_80_E0_B8_AB_E0_B8_A5_E0_B8_B7_E0_B8_AD_E0_B8_87();
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
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
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
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
      _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
    }
  } else {
    _E0_B8_96_E0_B8_AD_E0_B8_A2_E0_B8_AB_E0_B8_A5_E0_B8_B1_E0_B8_87_E0_B8_AA_E0_B8_B5_E0_B9_80_E0_B8_82_E0_B8_B5_E0_B8_A2_E0_B8_A7_E0_B8_99_E0_B9_89_E0_B8_B3_E0_B9_80_E0_B8_87_E0_B8_B4_E0_B8_99();
    _E0_B9_80_E0_B8_A5_E0_B8_B5_E0_B9_89_E0_B8_A2_E0_B8_A7_E0_B8_82_E0_B8_A7_E0_B8_B2();
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
    servo(4, 180);
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
Light_Center = 2000;
  Light_Mid = 2700;
  Light_Side = 2000;
  _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2_E0_B9_80_E0_B8_84_E0_B8_A5_E0_B8_B7_E0_B9_88_E0_B8_AD_E0_B8_99_E0_B8_97_E0_B8_B5_E0_B9_882();
  _E0_B8_95_E0_B8_B1_E0_B9_89_E0_B8_87_E0_B8_84_E0_B9_88_E0_B8_B2Servo();
  START_CHOICE();
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

  
}
