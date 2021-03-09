#ifndef GAME_H
#define GAME_H

#include "entities/sensor/sensor_interface.h"
#include "entities/game/game_result.h"

#include <list>


enum GameType {Default, CrazyBalls, TeamGame};

class Game
{   
private:
    // currently pin numbers are hard coded
    list<ISensor*> m_sensors;
    int m_num_players;
    int m_starting_time;
    GameType m_game_type;
    int m_num_balls_to_loose;
 
public:
    Game(GameType, list<ISensor*>);
    
    int getNumPlayers();
    GameResult play_game();
};

#endif