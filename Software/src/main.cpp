#include <Arduino.h>
#include "../lib/main.h"
void setup() 
{
  // put your setup code here, to run once:
  MOTOR_INIT();
  Serial.begin(115200);//设置串口波特率
}

void loop() 
{
  
}