#include "auton.hpp"

using namespace pros;
//auton 1 does stuff call this in the main.cpp in the auton
void auton1()
{
  motor1 = 127;
  delay(500);
  motor1 = 0;
  delay(1000);

}
