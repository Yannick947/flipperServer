#include "game.h"
#include "time.h"
#include "sensor.h"

using namespace std; 

Game::Game(GameType game_type){
    m_game_type = game_type; 
    m_num_players = 4; 

    //Pass by pointer
    m_sensors = get_sensors();
    m_num_balls_to_loose = 3; 
}

GameResult Game::play_game(){
    int winner_id = NULL; 

    list<int> balls_fallen;
    
    for (int i = 0; i < m_num_players; i++)
        balls_fallen.push_back(0);
    
    while (winner_id == NULL){

        
        // here a pointer might be needed since we want to alter the int value in the lists
        auto ball = balls_fallen.begin();
        auto sensor = (*m_sensors).begin();

        for (int id = 0; id < m_num_players; id++){

            advance(ball, 1);
            advance(sensor, 1); 

            bool ball_fallen = (*sensor).get_ball_fallen();

            if (ball_fallen){
                (*ball) += 1;
            }

            if (*ball == m_num_balls_to_loose){
                winner_id = *ball;
            }
        }
    }

    // TODO: Check if this takes to much time, if yes -> pointerize
    GameResult result = GameResult(balls_fallen, winner_id);
    return result;
}
