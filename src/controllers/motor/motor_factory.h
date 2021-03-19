#ifndef MOTOR_FACTORY_H
#define MOTOR_FACTORY_H

#include "entities/motor_controller_interface.h"

enum MotorType {MockMotor, MotorController};

IMotor* get_motor(MotorType motor_type);

#endif