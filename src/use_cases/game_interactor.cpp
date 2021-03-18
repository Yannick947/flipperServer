#include "entities/game/game_interface.h"
#include "entities/game/game_factory.h"
#include "entities/game/game_result.h"
#include "use_cases/game_interactor.h"
#include "entities/sensor/sensor_factory.h"
#include <list>


//add sensor type to arg
void run_game_interactor(SensorType sensor_type, int num_players, GameType game_type){

    list<ISensor*> sensors = get_sensors(sensor_type, num_players); 

    while (true) {

        // TODO: Mutlithreading done here
        //bluetooth_response = get_bluetooth_result(game);
        
        IGame* game = create_game(game_type, sensors);
        GameResult result = (*game).play_game();
        result.print();
    }
}