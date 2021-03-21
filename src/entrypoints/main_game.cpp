#include "entities/sensor/sensor_factory.h"
#include "use_cases/game_interactor.h"

using namespace std; 

/** 
 * Main entrypoint for flipper game. 
 **/
int main_g(){

    int num_players = 4; 
    run_game_interactor(SensorType::STM32_LightBarrier, num_players, GameType::Default);

}
