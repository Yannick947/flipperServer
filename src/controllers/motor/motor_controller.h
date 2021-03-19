#ifndef MOTOR_CONTROLLER_H
#define MOTOR_CONTROLLER_H

#include "entities/motor_controller_interface.h"


using namespace std;

class MotorController: virtual public IMotor 
{
    private: 
        float cur_speed;
        void init_gpio_pin(); 

    public: 

        static GPIO_TypeDef* stm32_register;
        static int stm32_adress;

        MotorController();
        void set_speed(float speed); 
        float get_speed(); 
}; 
#endif
