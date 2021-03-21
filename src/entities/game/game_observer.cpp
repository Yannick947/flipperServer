#include "entities/game/game_interface.h"
#include "entities/game/game_observer.h"

/**
 * Default constructor for observer class
 * 
 * @param game: The game which shall be observed. 
 **/
GameObserver::GameObserver(IGame* game){
    this->game = game; 
    this->game->attach_observer(this);
}