#include "controllers/motor/motor_controller.h"
  

using namespace std; 

// TODO: Change config!
GPIO_TypeDef* MotorController::motor_register = GPIOA;
int MotorController::motor_adress = 0x0001;

MotorController::MotorController(){}; 

void MotorController::set_speed(float speed){
    // Dummy stuff
    this->speed = speed; 

    //void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
}

float MotorController::get_speed(){
    return this->cur_speed;
}

void MotorController::init_gpio_pin(){
    // GPIO initialization done here if necesseary.
    return; 
}
