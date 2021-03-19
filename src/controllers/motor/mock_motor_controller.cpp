#include "controllers/motor/mock_motor_controller.h"
#include <stdlib.h>   

using namespace std;

int MockMotorController::motor_register = 0;
int MockMotorController::motor_adress = 0x0001;

MockMotorController::MockMotorController(){}; 

void MockMotorController::set_speed(float speed){
}

float MockMotorController::get_speed(){
    // Mock implementation
    return this->cur_speed;
}
