#include <stdio.h>
#include <sensor.h>
#include <game.h>

int main(){

    while (true) {

        // TODO: Mutlithreading done here

        //bluetooth_response = get_bluetooth_result(game);


        Game game = Game(GameType::Default);
        game.play_game();

        return true;
    }
}