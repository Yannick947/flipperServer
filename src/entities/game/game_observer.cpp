#include "entities/game/game_interface.h"
#include "entities/game/game_observer.h"


GameObserver::GameObserver(IGame* game){
    this->game = game; 
    this->game->attach_observer(this);
}