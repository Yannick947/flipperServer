#include <list>

using namespace std;

static const int sensor_pin1 = 1000; 
static const int sensor_pin2 = 1001; 
static const int sensor_pin3 = 1002; 
static const int sensor_pin4 = 1003; 

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

list<Sensor>* get_sensors(); 
