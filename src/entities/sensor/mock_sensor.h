#ifndef MOCK_SENSOR_H
#define MOCK_SENSOR_H

#include <list>
#include "sensor_interface.h"

using namespace std;

class MockSensor: public ISensor 
{

public: 
    MockSensor();
    bool get_ball_fallen(); 
}; 

#endif