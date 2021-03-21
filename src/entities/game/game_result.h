#ifndef GAMERESULT_H
#define GAMERESULT_H

#include <vector>

using namespace std; 


class GameResult {
    private: 
        int m_looser_player_id; 
        vector<int> m_player_balls; 

    public: 
    
        GameResult(vector<int> player_balls, int looser_player_id);

        int getWinner();
        int getBallsByPlayer(int player_id);
        void print();
};
#endif