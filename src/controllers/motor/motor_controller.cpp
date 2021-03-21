#include "controllers/motor/motor_controller.h"
  

using namespace std; 

// TODO: Change config!
GPIO_TypeDef* MotorController::motor_register = GPIOA;
int MotorController::motor_adress = 0x0001;

/// Constructor for MotorController. 
MotorController::MotorController(){}; 


/** 
 * Setter of the speed for the motor.
 * 
 * @param speed: The speed in percent. Speed can be provided in the
 *  range of [0, 1] and if a value out of this range ist provided, will
 *  be set to 1. 
 **/
void MotorController::set_speed(float speed){
    // Dummy stuff
    this->speed = speed; 

    //void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
}

/**
 * Getter for the speed of the motor.
 * 
 * @return the speed of the motor in percent (PWM) in the range between [0,1].
 **/
float MotorController::get_speed(){
    return this->cur_speed;
}


/**
 *  Init the motor gpio pin as GPIO_WRITE. 
 * 
 * @TODO: Check if done by default in init routine of microcontroller.
 **/
void MotorController::init_gpio_pin(){
    // GPIO initialization done here if necesseary.
    return; 
}
