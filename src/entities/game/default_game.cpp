#include "entities/game/game_interface.h"
#include "entities/game/default_game.h"
#include "entities/game/game_result.h"
#include "entities/sensor/sensor_interface.h"
#include "entities/motor_controller_interface.h"

#include <iostream>
#include "list"

using namespace std; 

DefaultGame::DefaultGame(list<ISensor*> sensors, IMotor* motor){

    this->num_players = 4; 
    this->num_balls_to_loose = 3; 

    this->m_sensors = sensors;
    this->motor = motor; 

    // init balls after setting number of players since depends on length of list
    this->init_balls();
}

GameResult DefaultGame::play_game(){
    
    while (true){

        // here a pointer might be needed since we want to alter the int value in the lists
        auto sensor = m_sensors.begin();

        for (int id = 0; id < this->num_players; id++){

            (**sensor).read_sensor();
            bool ball_fallen = (**sensor).get_ball_fallen();

            if (ball_fallen){
                this->balls_fallen[id] += 1;
                this->notify();
            }

            if (this->balls_fallen[id] == num_balls_to_loose){
                // TODO: Check if this takes to much time, if yes -> pointerize
                GameResult result = GameResult(this->balls_fallen, id);
                
                this->notify();
                return result;
            }
            advance(sensor, 1);
        }
    }
}
