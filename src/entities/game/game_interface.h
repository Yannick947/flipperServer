#ifndef IGAME_H
#define IGAME_H

#include "entities/game/game_result.h"
#include <vector>

enum GameType {Default, CrazyBalls, TeamGame};

class IGame{

    protected:
        vector <class GameObserver*> observers;
        vector <int> balls_fallen;
        int num_players = 4; 
        void init_balls();

    public: 
        virtual GameResult play_game()=0;
        virtual ~IGame(){}  
        void notify();
        
        void attach_observer(GameObserver *obs) {
            this->observers.push_back(obs);
        }
        


        
};

#endif