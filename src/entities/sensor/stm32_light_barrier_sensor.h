#ifndef STM32_LIGHT_BARRIER_SENSOR_H
#define STM32_LIGHT_BARRIER_SENSOR_H

#include <list>
#include <string>
#include <chrono>
#include "entities/sensor/sensor_interface.h"


using namespace std;

class STM32_light_barrier: virtual public ISensor 
{
    private: 
        char register_type;
        int address;
        float threshold_detection = 0.3;
        int num_detections_for_lost_ball = 10;

        // Time in milliseconds after which ball can be detected again.
        float threshold_time_btw_detections = 10;

        // Time in milliseconds after which the num_detections is reset to 0.
        float reset_threshold_time = 400;

        int num_detections = 0;
        chrono::steady_clock::time_point last_detection;

        void init_gpio_pin(); 
        bool evaluate_last_vals();

    public: 

        static char stm32_registers[4]; 
        static int stm32_adresses[4];

        STM32_light_barrier(char register_type, int address);
        void read_sensor(); 
        bool get_ball_fallen(); 
}; 
#endif