#include "entities/game/game.h"
#include "entities/game/game_result.h"
#include "entities/sensor/sensor_factory.h"
#include <list>


//add sensor type to arg
void run_game_interactor(SensorType sensor_type, int num_players, GameType game_type){

    list<ISensor*> sensors = get_sensors(sensor_type, num_players); 

    while (true) {

        // TODO: Mutlithreading done here
        //bluetooth_response = get_bluetooth_result(game);

        Game game = Game(game_type, sensors);
        GameResult result = game.play_game();
        result.print();
    }
}