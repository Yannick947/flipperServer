#include "entities/game/game_interface.h"
#include "entities/game/game_factory.h"
#include "entities/game/game_result.h"
#include "controllers/bluetooth_handler.h"
#include "use_cases/game_interactor.h"
#include "entities/sensor/sensor_factory.h"
#include "controllers/motor/motor_factory.h"
#include "entities/motor_controller_interface.h"
#include "controllers/bluetooth_handler.h"

#include <list>


/**
 * Game interactor to start games and handle input and output to 
 * and from bluetooth devices.
 * 
 * @sensor_type: Type of the sensor. 
 * @num_players: Number of players playing the game, defaults to 4.
 * @game_type: Type of the game. 
 * @motor_type: Type of the motor to be used. 
 **/
void run_game_interactor(SensorType sensor_type,
                         int num_players,
                         GameType game_type,
                         MotorType motor_type){

    list<ISensor*> sensors = get_sensors(sensor_type, num_players); 
    IMotor* motor = get_motor(motor_type);

    while (true) {

        // TODO: Mutlithreading done here
        //game_type, num_players = get_config_from_bluetooth_connection();
        
        IGame* game = create_game(game_type, sensors, motor);
        
        BluetoothHandler* bluetooth_handler = new BluetoothHandler(game);

        GameResult result = (*game).play_game();

        result.print();

    }
}