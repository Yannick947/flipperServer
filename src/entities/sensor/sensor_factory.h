#include "sensor_interface.h"
#include "mock_sensor.h"

enum SensorType {Mock, STM32_LightBarrier};

list<ISensor> get_sensor(SensorType sensor_type, int num_sensors);