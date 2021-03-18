#ifndef IGAME_H
#define IGAME_H

#include "entities/game/game_result.h"

enum GameType {Default, CrazyBalls, TeamGame};

class IGame{

    public: 
        virtual GameResult play_game()=0;
        //virtual void register_observer()=0;      
        virtual ~IGame(){}  
};

#endif