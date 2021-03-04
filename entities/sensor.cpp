#include "sensor.h"
#include "list"
#include <stdlib.h>     

using namespace std; 


Sensor::Sensor(int pin_number, float threshold){

    m_pin_number = pin_number; 
    m_threshold = threshold; 

};

bool Sensor::get_ball_fallen(){
    this->read_analog_sensor();


    // TODO: replace dummy implementation
    // Currently return True with 1% chance
    int random_number = rand() % 100 + 1;
    if (random_number == 1){
        return true; 
    }
    else{
        return false;
    }  
}

list<Sensor>* get_sensors(){

    int thresh = 0.3; 
    list<int> sensor_adresses; 
    sensor_adresses.push_back(sensor_pin1);
    sensor_adresses.push_back(sensor_pin2);
    sensor_adresses.push_back(sensor_pin3);
    sensor_adresses.push_back(sensor_pin4);

    list<Sensor> sensors; 
    for (int addr: sensor_adresses){
        Sensor sensor = Sensor(addr, thresh);
        sensors.push_back(sensor);
    }
    return &sensors;
}