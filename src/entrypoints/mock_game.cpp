#include "entities/sensor/sensor_factory.h"
#include "use_cases/game_interactor.h"

using namespace std; 


int main(){

    int num_players = 4; 
    run_game_interactor(SensorType::Mock, num_players, GameType::Default);

}
