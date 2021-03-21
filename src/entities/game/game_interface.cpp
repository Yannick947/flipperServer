#include "entities/game/game_interface.h"
#include "entities/game/game_observer.h"
#include <thread>
#include <vector>

void IGame::notify(){

    for (int i = 0; i < this->observers.size(); i++){
        // The notification is sent asynchronously and detached 
        //to send bluetooth message to all observers and avoid waiting for response
        std::thread(GameObserver::update, observers[i]).detach();
    }
}

void IGame::init_balls(){

    this->balls_fallen = vector<int>();

    for (int i = 0; i < this->num_players; i++)
        this->balls_fallen.push_back(0);
}
        
