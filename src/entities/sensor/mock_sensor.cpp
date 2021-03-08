#include "mock_sensor.h"
#include <stdlib.h>   
  
MockSensor::MockSensor(){}; 

bool MockSensor::get_ball_fallen(){

    int random_number = rand() % 100 + 1;
    if (random_number == 1){
        return true; 
    }
    else{
        return false;
    }  
}
