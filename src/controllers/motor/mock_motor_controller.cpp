#include "controllers/motor/mock_motor_controller.h"
#include <stdlib.h>   

using namespace std;

int MockMotorController::motor_register = 0;
int MockMotorController::motor_adress = 0x0001;


/** 
 * Constructor for a mock motor controller. 
 **/
MockMotorController::MockMotorController(){}; 

/**
 * Mock setter for motor speed. 
 **/
void MockMotorController::set_speed(float speed){
    // TODO 
}

/** 
 * Mock getter for the speed of the motor.
 * 
 * @returns the speed of the motor.
 **/
float MockMotorController::get_speed(){
    // Mock implementation
    return this->cur_speed;
}
