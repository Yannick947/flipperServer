#ifndef GAME_H
#define GAME_H

#include "sensor.h"
#include "game_result.h"
#include <list>


enum GameType {Default, CrazyBalls, TeamGame};

class Game
{   
private:
    // currently pin numbers are hard coded
    list<Sensor> m_sensors;
    int m_num_players;
    int m_starting_time;
    GameType m_game_type;
    int m_num_balls_to_loose;
 
public:
    Game(GameType);
    
    int getNumPlayers();
    GameResult play_game();
};

#endif