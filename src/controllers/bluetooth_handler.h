#ifndef BLUETOOTH_HANDLER_H
#define BLUETOOTH_HANDLER_H

#include "entities/game/game_interface.h"
#include "entities/game/game_observer.h"

class BluetoothHandler: public GameObserver{
    
    public: 
        BluetoothHandler(IGame* game): GameObserver(game){};
        void update();
};

#endif