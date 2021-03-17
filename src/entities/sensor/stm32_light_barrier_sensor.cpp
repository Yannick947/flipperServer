#include <stdlib.h>   
#include <string.h>
#include <list>
#include <vector>
#include <string>
#include "stm32f1xx_hal.h"

#include "entities/sensor/stm32_light_barrier_sensor.h"
  
//void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)
//GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)


using namespace std; 

// Put config for registers and addresses here!
GPIO_TypeDef* STM32_light_barrier::stm32_registers[4] = {GPIOC, GPIOC, GPIOB, GPIOA};
int STM32_light_barrier::stm32_adresses[4] = {0x0001, 0x0002, 0x0001, 0x0010};

STM32_light_barrier::STM32_light_barrier(GPIO_TypeDef* register_type, int address){
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

    sensor_val = HAL_GPIO_ReadPin(this->register_type, this->address);
    chrono::steady_clock::time_point now = chrono::steady_clock::now();

    if (sensor_val &&
     (chrono::duration_cast<chrono::milliseconds>(now - this->last_detection).count()) >
      this->threshold_time_btw_detections) {
          
        this->last_detection = chrono::steady_clock::now();
        this->num_detections += 1;
    }
}

void STM32_light_barrier::init_gpio_pin(){
    // GPIO initialization done here if necesseary.
    return; 
}
