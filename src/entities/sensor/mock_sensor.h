#ifndef MOCK_SENSOR_H
#define MOCK_SENSOR_H

#include <list>
#include "entities/sensor/sensor_interface.h"


using namespace std;

class MockSensor: virtual public ISensor 
{
    void init_gpio_pin(){};
    
public: 
    MockSensor();
    bool get_ball_fallen(); 
    void read_sensor();
}; 

#endif