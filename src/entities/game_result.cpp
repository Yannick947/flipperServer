#ifndef GAMERESULT_H
#define GAMERESULT_H

#include <list>
#include "game_result.h"

using namespace std; 


GameResult::GameResult(list<int> player_balls, int winner_player_id){
    m_winner_player_id = winner_player_id; 
    m_player_balls = player_balls; 
}
#endif