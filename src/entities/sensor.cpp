#include "sensor.h"
#include "list"
#include <stdlib.h>   
  
Sensor::Sensor(int pin_number, float threshold){

    this->m_pin_number = pin_number; 
    this->m_threshold = threshold; 

}

void Sensor::read_analog_sensor(){
    int a = 1;
}

bool Sensor::get_ball_fallen(){
    read_analog_sensor();


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

list<Sensor> get_sensors(){

    int thresh = 0.3; 
    list<int> sensor_adresses; 
    sensor_adresses.push_back(0);
    sensor_adresses.push_back(1);
    sensor_adresses.push_back(2);
    sensor_adresses.push_back(3);

    list<Sensor> sensors; 
    for (int addr: sensor_adresses){
        Sensor sensor = Sensor(addr, thresh);
        sensors.push_back(sensor);
    }
    return sensors;
}