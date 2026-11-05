/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       sami                                                      */
/*    Created:      10/15/2026, 4:08:34 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain   Brain;

// define your global instances of motors and other devices here
controller Controller = controller();
motor MotorL = motor(1);
motor MotorR = motor(2);

int main() {

    Brain.Screen.printAt( 10, 50, "Hello V5" );
   
    while(true) {
        MotorL.setVelocity(Controller.Axis3.position()/2, percent);
        MotorR.setVelocity(Controller.Axis2.position()/2, percent);
        MotorL.spin(forward);
        MotorR.spin(forward);

        wait(5, msec);
    }
}