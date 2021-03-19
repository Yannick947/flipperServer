#include "entities/game/game_factory.h"
#include "entities/game/game_interface.h"
#include "entities/game/default_game.h"
#include "entities/motor_controller_interface.h"

#include <list>


/** 
 * game factory method to create a game of a specified type
 * 
 * Arguments: 
 *  game_type: Type of the game that can be extended by any further game
 *  sensors: List of sensors to use
 * 
 * returns a game of given type.
 **/
IGame* create_game(GameType game_type, list<ISensor*> sensors, IMotor* motor){
    IGame* game; 

    if (game_type == GameType::Default){
        game = new DefaultGame(sensors, motor);
    }
    // else if (game_type == GameType::MockGame){
    //     game = new MockBallsGame(sensors, motor);
    // }
    // else if(game_type == GameType::MockGame){
    //     game = new MockBallsGame(sensors, motor);
    // }
    
    return game;
    
}