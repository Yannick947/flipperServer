#include "entities/game/game_result.h"
#include <vector>

using namespace std; 


GameResult::GameResult(vector<int> player_balls, int looser_player_id){
    m_looser_player_id = looser_player_id; 
    m_player_balls = player_balls; 
}

void GameResult::print(){
 //  cout << "Looser is player with id ";
 //  cout << to_string(this->m_looser_player_id) << endl;

    for (int i = 0; i < this->m_player_balls.size(); i++){
        //cout << "Player with id " << to_string(i) << " lost " << to_string(this->m_player_balls[i]) << " balls" << endl;
    }
}
