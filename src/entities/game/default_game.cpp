#include "entities/game/game_interface.h"
#include "entities/game/default_game.h"
#include "entities/game/game_result.h"
#include "entities/sensor/sensor_interface.h"
#include "list"

using namespace std; 

DefaultGame::DefaultGame(list<ISensor*> sensors){

    // Declare as const
    this->m_num_players = 4; 
    this->m_num_balls_to_loose = 3; 

    //Pass by pointer
    this->m_sensors = sensors;
}

GameResult DefaultGame::play_game(){

    list<int> balls_fallen;
    
    for (int i = 0; i < this->m_num_players; i++)
        balls_fallen.push_back(0);
    
    while (true){

        
        // here a pointer might be needed since we want to alter the int value in the lists
        auto ball = balls_fallen.begin();
        auto sensor = m_sensors.begin();

        for (int id = 0; id < this->m_num_players; id++){

            (**sensor).read_sensor();
            bool ball_fallen = (**sensor).get_ball_fallen();

            if (ball_fallen){
                (*ball) += 1;
            }

            if (*ball == m_num_balls_to_loose){
                // TODO: Check if this takes to much time, if yes -> pointerize
                GameResult result = GameResult(balls_fallen, id);
                return result;
            }
            advance(ball, 1);
            advance(sensor, 1);
        }
    }
}
