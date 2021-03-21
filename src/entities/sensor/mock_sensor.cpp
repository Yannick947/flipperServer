#include "entities/sensor/mock_sensor.h"
#include <stdlib.h>   
  
/**
 * Dummy constructor for mock sensor.
 **/
MockSensor::MockSensor(){}; 

/**
 * Mock check whether player lost a ball since the last
 * time this player lost a ball. Returning true with 1% probability.
 * 
 * @return a flag indicating whether a fallen ball was detected. 
 **/
bool MockSensor::get_ball_fallen(){

    int random_number = rand() % 100 + 1;
    if (random_number == 1){
        return true; 
    }
    else{
        return false;
    }  
}

/**
 * Mock reading of a sensor value.
 **/
void MockSensor::read_sensor(){
    // Mock implementation
    return;
}
