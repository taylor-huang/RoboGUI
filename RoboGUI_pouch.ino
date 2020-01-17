#include <Wire.h>
#include <Adafruit_LEDBackpack.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>
#include "RoboGUI_pouch.h"

Adafruit_BicolorMatrix matrix = Adafruit_BicolorMatrix();

enum State state;

boolean bootingFlag,
  idleFlag,
  turningLeftFlag,
  turningRightFlag,
  batteryFlag,
  emergencyFlag;
  
void setup() {
  Serial.begin(9600);
  matrix.begin(0x70);
  matrix.clear();
  matrix.writeDisplay();
  state = BATTERY;

  Serial.print("test1");
}

void loop() {
  
  if (Serial.available())  {
    Serial.write(Serial.read());//send what has been received
    Serial.println();   //print line feed character
  }
  
  /*
  switch(state){
    case BOOTING:
      bootingFlag = true;
      while(bootingFlag){
        matrix.clear();
        matrix.drawBitmap(0, 0, boot0, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot1, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot2, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot3, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot4, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot5, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot6, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot7, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        matrix.clear();
        matrix.drawBitmap(0, 0, boot8, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(200);
        bootingFlag = false;
      }
    break;
    
    case IDLING:
    break;
    
    case TURNING_LEFT:
      turningLeftFlag = true;
      while(turningLeftFlag){
        matrix.clear();
        matrix.drawBitmap(0, 0, turn_left, 8, 8, LED_YELLOW);
        matrix.writeDisplay();
        delay(300);
        matrix.clear();
        matrix.writeDisplay();
        delay(300);
        turningLeftFlag = false;
      }
    break;
    
    case TURNING_RIGHT:
      turningRightFlag = true;
      while(turningRightFlag){
        matrix.clear();
        matrix.writeDisplay();
        delay(300);
        matrix.drawBitmap(0, 0, turn_right, 8, 8, LED_YELLOW);
        matrix.writeDisplay();
        delay(300);
        turningRightFlag = false;
      }
    break;
    
    case BATTERY:
      batteryFlag = true;
      while(batteryFlag){
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_6, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(1000);
        
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_5, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(1000);
        
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_4, 8, 8, LED_GREEN);
        matrix.writeDisplay();
        delay(1000);
        
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_3, 8, 8, LED_YELLOW);
        matrix.writeDisplay();
        delay(1000);
        
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_2, 8, 8, LED_YELLOW);
        matrix.writeDisplay();
        delay(1000);
        
        matrix.clear();
        matrix.drawBitmap(0, 0, battery_1, 8, 8, LED_RED);
        matrix.writeDisplay();
        delay(1000);
        
        for(int i = 0; i < 5; i++){
          matrix.clear();
          matrix.writeDisplay();
          delay(200);
          matrix.drawBitmap(0, 0, battery_0, 8, 8, LED_RED);
          matrix.writeDisplay();
          delay(200);
        }
        batteryFlag = false;
      }
    break;
    
    case EMERGENCY:
      emergencyFlag = true;
      while(emergencyFlag){
        matrix.clear();
        matrix.writeDisplay();
        delay(200);
        matrix.drawBitmap(0, 0, emergency_alert, 8, 8, LED_RED);
        matrix.writeDisplay();
        delay(200);
        emergencyFlag = false;
      }
    break;

    default:
      Serial.print("default error");
    break;
  }
  */
}
