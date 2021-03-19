#include "controllers/motor/motor_factory.h"
#include "entities/motor_controller_interface.h"
#include "controllers/motor/mock_motor_controller.h"
#include <list>


/** 
 * Motor factory method to create a specified number of motors of a specified type
 * 
 * Arguments: 
 *  motor_type: Type of the senesor that can be extended by any further motors
 * 
 * returns a list of motors with the length num_motors.
 **/
IMotor* get_motor(MotorType motor_type){
    IMotor* motor; 

    if (motor_type == MotorType::MockMotor){
        motor = new MockMotorController();
    }
    
    return motor;
}