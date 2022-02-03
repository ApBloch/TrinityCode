#include "main.h"

#include "driver.hpp"
#include "auton.hpp"

void on_center_button() {}

void initialize() {}

void disabled() {}


void competition_initialize() {}


void autonomous() {
	auton1();			//defined in auton

}//adding something adding something also

void opcontrol() {

 	while (true) {
		driver1();			//defined in driver
 	}
 }
