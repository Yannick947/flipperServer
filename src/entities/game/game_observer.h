#ifndef GAME_OBSERVER_H
#define GAME_OBSERVER_H

#include "entities/game/game_interface.h"

class GameObserver{
    private: 
        IGame* game;

    public: 
        GameObserver(IGame* game);
        virtual void update() = 0;
};

#endif