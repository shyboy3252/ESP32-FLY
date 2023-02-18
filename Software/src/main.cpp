#include <Arduino.h>
#include <Arduino.h>
void MOTOR_INIT(void)//电机引脚初始化
{
    pinMode(1,OUTPUT);//设置GPIO引脚模式
    pinMode(2,OUTPUT);//设置GPIO引脚模式
    pinMode(3,OUTPUT);//设置GPIO引脚模式
    pinMode(4,OUTPUT);//设置GPIO引脚模式
    pinMode(5,OUTPUT);//设置GPIO引脚模式
    pinMode(6,OUTPUT);//设置GPIO引脚模式
    pinMode(7,OUTPUT);//设置GPIO引脚模式
    pinMode(8,OUTPUT);//设置GPIO引脚模式
    pinMode(9,OUTPUT);//设置GPIO引脚模式
    pinMode(10,OUTPUT);//设置GPIO引脚模式
    pinMode(11,OUTPUT);//设置GPIO引脚模式
    pinMode(12,OUTPUT);//设置GPIO引脚模式
    pinMode(13,OUTPUT);//设置GPIO引脚模式
    pinMode(14,OUTPUT);//设置GPIO引脚模式
    pinMode(15,OUTPUT);//设置GPIO引脚模式
    pinMode(16,OUTPUT);//设置GPIO引脚模式
}
void RISE(void)//上升函数
{
    digitalWrite(1,HIGH);digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);digitalWrite(11,HIGH);
    digitalWrite(13,HIGH);digitalWrite(15,HIGH);
}
void STOP(void)//停止函数
{
    digitalWrite(1,LOW);digitalWrite(3,LOW);
    digitalWrite(5,LOW);digitalWrite(7,LOW);
    digitalWrite(9,LOW);digitalWrite(11,LOW);
    digitalWrite(13,LOW);digitalWrite(15,LOW);
}
void setup() 
{
  // put your setup code here, to run once:
  MOTOR_INIT();
  Serial.begin(115200);//设置串口波特率
}

void loop() 
{
  
}