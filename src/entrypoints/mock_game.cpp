#include "entities/sensor/sensor_factory.h"
#include "controllers/motor/motor_factory.h"
#include "use_cases/game_interactor.h"

using namespace std; 

///Entrypoint for mock game.
int main(){

    int num_players = 4; 
    run_game_interactor(SensorType::Mock,
                        num_players,
                        GameType::Default,
                        MotorType::MockMotor);
}
