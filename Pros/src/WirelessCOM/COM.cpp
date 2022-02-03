#include "COM.h"

/*
Implementation of functions
*/



void printMotor(pros::Motor motor)
{
  int value = VALUE;        //example definitions
  printf("Send %f",motor.get_position());
}

void doNothing()
{
  //nothing
}
