/**
  Vehicle Gate System
  --Sensors used: IR Sensor, Servo Motor
  --Board: Arduino UNO R3
  --Author:Simran
**/

#include <Servo.h>

int s = 8;
Servo servo;

int angle = 0;

int ir = 7

void setup() {

  Serial.begin(9600);

  servo.attach(s);
  servo.write(angle);

  pinMode(ir,INPUT);
}

void loop() {

  if(digitalRead(ir) == 1){
    servo.write(0);
    delay(500);

    Serial.println();
  }else{
    servo.write(90);
    delay(500);
  }
}
