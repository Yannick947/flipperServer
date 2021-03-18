#ifndef GAME_H
#define GAME_H

#include "entities/sensor/sensor_interface.h"
#include "entities/game/game_result.h"
#include "entities/game/game_interface.h"

#include <list>


class DefaultGame: virtual public IGame
{   
private:

    // currently pin numbers are hard coded
    list<ISensor*> m_sensors;
    int m_num_players;
    int m_starting_time;
    int m_num_balls_to_loose;
 
public:
    DefaultGame(list<ISensor*>);
    
    int getNumPlayers();
    GameResult play_game();
};

#endif