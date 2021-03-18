#include "entities/game/game_factory.h"
#include "entities/game/game_interface.h"
#include "entities/game/default_game.h"
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
IGame* create_game(GameType game_type, list<ISensor*> sensors){
    IGame* game; 

    if (game_type == GameType::Default){
        game = new DefaultGame(sensors);
    }
    // else if (game_type == GameType::MockGame){
    //     game = new MockBallsGame(sensors);
    // }
    // else if(game_type == GameType::MockGame){
    //     game = new MockBallsGame(sensors);
    // }
    
    return game;
    
}