#include <list>
#include <iostream>
#include "entities/game/game_result.h"

using namespace std; 


GameResult::GameResult(list<int> player_balls, int looser_player_id){
    m_looser_player_id = looser_player_id; 
    m_player_balls = player_balls; 
}

void GameResult::print(){
    cout << "Looser is player with id ";
    cout << to_string(this->m_looser_player_id) << endl; 
    auto player_ball_iterator = this->m_player_balls.begin();

    for (int i = 0; i < this->m_player_balls.size(); i++){
        cout << "Player with id " << to_string(i) << " lost " << to_string(*player_ball_iterator) << " balls" << endl; 
        advance(player_ball_iterator, 1);
    }
}
