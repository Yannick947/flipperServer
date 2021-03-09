#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H

#include "entities/sensor/sensor_interface.h"
#include <list>

using namespace std; 

enum SensorType {Mock, STM32_LightBarrier};

list<ISensor*> get_sensors(SensorType sensor_type, int num_sensors);

#endif