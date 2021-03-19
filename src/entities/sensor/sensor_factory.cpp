#include "entities/sensor/sensor_factory.h"
#include "entities/sensor/sensor_interface.h"
#include "entities/sensor/mock_sensor.h"
// #include "entities/sensor/stm32_light_barrier_sensor.h"
#include <list>


/** 
 * Sensor factory method to create a specified number of sensors of a specified type
 * 
 * Arguments: 
 *  sensor_type: Type of the senesor that can be extended by any further sensors
 *  num_sensors: Number of sensors to instantiate.
 * 
 * returns a list of sensors with the length num_sensors.
 **/
list<ISensor*> get_sensors(SensorType sensor_type, int num_sensors=4){
    list<ISensor*> sensors; 

    if (sensor_type == SensorType::Mock){
        for (int i = 0; i < num_sensors; i++){
            sensors.push_back(new MockSensor()); 
        }
    }
    // else if (sensor_type == SensorType::STM32_LightBarrier){

    //     auto adresses = STM32_light_barrier::stm32_adresses;
    //     auto registers = STM32_light_barrier::stm32_registers;

    //     for (int i = 0; i < num_sensors; i++){
            
    //         auto stm32_sensor = new STM32_light_barrier(registers[i], adresses[i]);
    //         sensors.push_back(stm32_sensor); 

    //     }
    // }
    
    return sensors;
    
}