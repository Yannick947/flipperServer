#ifndef GAME_FACTORY_H
#define GAME_FACTORY_H

#include "entities/game/game_interface.h"
#include "entities/sensor/sensor_interface.h"
#include "entities/motor_controller_interface.h"
#include <list>

using namespace std; 

IGame* create_game(GameType game_type, list<ISensor*> sensors, IMotor* motor);

#endif