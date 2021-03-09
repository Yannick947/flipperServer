#include "entities/sensor/sensor_factory.h"
#include "entities/sensor/sensor_interface.h"
#include "entities/sensor/mock_sensor.h"
//#include "entities/sensor/stm32_light_barrier_sensor.h"
#include <list>

list<ISensor*> get_sensors(SensorType sensor_type, int num_sensors){
    list<ISensor*> sensors; 

    if (sensor_type == SensorType::Mock){
        for (int i = 0; i < num_sensors; i++){
            sensors.push_back(new MockSensor()); 
        }
    }
    // else if (sensor_type == SensorType::STM32_LightBarrier){

    //     auto address_iterator = STM32_light_barrier::stm32_addresses.begin();
    //     auto register_iterator = STM32_light_barrier::stm32_registers.begin();

    //     for (int i = 0; i < num_sensors; i++){
            
    //         STM32_light_barrier stm32_sensor = STM32_light_barrier(*register_iterator, *address_iterator);
    //         sensors.push_back(stm32_sensor); 

    //         advance(address_iterator, 1);
    //         advance(register_iterator, 1);
    //     }
    // }
    return sensors;
    
}