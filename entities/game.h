#include "sensor.h"
#include "game_result.h"
#include <list>

using namespace std; 

// Gametype might be derived as subclass from game
enum GameType {Default, CrazyBalls, TeamGame};

class Game
{
private:
    // currently pin numbers are hard coded
    list <Sensor>* m_sensors;
    int static m_num_players;
    int m_starting_time;
    GameType m_game_type;
    int m_num_balls_to_loose;
 
public:
    Game(GameType);
    ~Game(); 
    
    int getNumPlayers();
    GameResult play_game();
};