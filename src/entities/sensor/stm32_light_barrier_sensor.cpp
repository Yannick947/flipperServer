#include <stdlib.h>   
#include <string.h>
#include <list>
#include <vector>
#include <gpio.h>

#include "entities/sensor/stm32_light_barrier_sensor.h"
  
using namespace std; 

// But config for registers and adresses here!
char STM32_light_barrier::stm32_registers[4] = {'A', 'B', 'C', 'D'};
int STM32_light_barrier::stm32_adresses[4] = {1000, 1001, 1002, 1003};

STM32_light_barrier::STM32_light_barrier(char register_type, int address){
    this->address = address; 
    this->register_type = register_type;   
}; 

bool STM32_light_barrier::get_ball_fallen(){

    chrono::steady_clock::time_point now = chrono::steady_clock::now();

    if (this->num_detections > this->num_detections_for_lost_ball){
        this->num_detections = 0;
        return true;
    } else if ((chrono::duration_cast<chrono::milliseconds>(now - this->last_detection).count()) > this->reset_threshold_time){
        this->last_detection = now; 
        this->num_detections = 0;
    }
    return false;
}

void STM32_light_barrier::read_sensor(){

    // TODO: gpio stuff here

    float sensor_val; 
    // analog val needs to be read from sensor
    // float sensor_val = gpio.get_analog_senso(this->register, this-> adress);
    int random_number = rand() % 10 + 1;

    if (random_number == 1){
        sensor_val = 0.5 ; 
    } else {
        sensor_val = 0.1;
    }

    chrono::steady_clock::time_point now = chrono::steady_clock::now();

    if (sensor_val > this->threshold_detection &&
     (chrono::duration_cast<chrono::milliseconds>(now - this->last_detection).count()) >
      this->threshold_time_btw_detections) {
          
        this->last_detection = chrono::steady_clock::now();
        this->num_detections += 1;
    }
}

void STM32_light_barrier::init_gpio_pin(){
    // GPIO initialization done here if necesseary.
    int a = 1; 
    return; 
}
