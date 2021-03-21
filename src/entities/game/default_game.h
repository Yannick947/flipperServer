#ifndef GAME_H
#define GAME_H

#include "entities/sensor/sensor_interface.h"
#include "entities/game/game_result.h"
#include "entities/game/game_interface.h"
#include "entities/motor_controller_interface.h"

#include <list>


class DefaultGame: virtual public IGame
{   
private:

    // currently pin numbers are hard coded
    list<ISensor*> m_sensors;
    IMotor* motor;
    int m_starting_time;
    int num_balls_to_loose;
 
public:
    DefaultGame(list<ISensor*>, IMotor*);
    
    int getNumPlayers();
    GameResult play_game();
};

#endif