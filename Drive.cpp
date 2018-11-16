/*
  Drive.h - Library for controlling Robot Car with L298x bridge series
  Created by Oladapo E. Ajala, November 13, 2018.
  Released into the public domain.
  Copy right InvenTech llc.
*/

#include "Arduino.h"
#include "Drive.h"

Drive::Drive(int IN1, int IN2, int IN3, int IN4)
{
  pinMode(IN1, OUTPUT);  
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  _IN1 = IN1;
  _IN2 = IN2;
  _IN3 = IN3;
  _IN4 = IN4;
}

void Drive::moveForward()
{
  digitalWrite(_IN1, HIGH);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, HIGH);
  digitalWrite(_IN4, LOW);  
}

void Drive::moveBackward()
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, HIGH);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, HIGH);  
}

void Drive::turnRight()
{
  digitalWrite(_IN1, HIGH);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, HIGH);  
}

void Drive::turnLeft()
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, HIGH);
  digitalWrite(_IN3, HIGH);
  digitalWrite(_IN4, LOW);  
}

void Drive::stopMoving()
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, LOW);  
}
