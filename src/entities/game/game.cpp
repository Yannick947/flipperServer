#include "entities/game/game.h"
#include "entities/sensor/sensor_interface.h"
#include "list"

using namespace std; 

Game::Game(GameType game_type, list<ISensor*> sensors){
    this->m_game_type = game_type; 
    this->m_num_players = 4; 

    //Pass by pointer
    this->m_sensors = sensors;
    this->m_num_balls_to_loose = 3; 
}

GameResult Game::play_game(){

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
