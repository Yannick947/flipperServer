#ifndef SENSOR_H
#define SENSOR_H

#include <list>

using namespace std;

class Sensor
{
private:
    int m_pin_number; 
    float m_threshold; 
    list<float> m_history_sensor_data; 

    void read_analog_sensor(); 


public: 
    Sensor(int pin_number, float threshold);
    bool get_ball_fallen(); 

}; 

list<Sensor> get_sensors(); 

#endif