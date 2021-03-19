#ifndef RUN_GAME_INTERACTOR_H
#define RUN_GAME_INTERACTOR_H

#include "entities/game/game_interface.h"
#include "entities/sensor/sensor_factory.h"
#include "controllers/motor/motor_factory.h"


void run_game_interactor(SensorType, int, GameType, MotorType);

#endif