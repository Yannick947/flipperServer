#ifndef MOCK_MOTOR_H
#define MOCK_MOTOR_H

#include "entities/motor_controller_interface.h"


using namespace std;

class MockMotorController: virtual public IMotor 
{
    private: 
        float cur_speed;
        void init_gpio_pin(); 

    public: 

        static int motor_register;
        static int motor_adress;

        MockMotorController();
        void set_speed(float speed); 
        float get_speed(); 
}; 

#endif