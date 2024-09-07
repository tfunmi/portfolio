#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "functions.hpp"
using namespace std;



int main(){

        randomnumberguesser();
        game_board();
        std::cout << "The player who gets 3 in a row will be the winner!!\n";

        while(true){
            x_or_o(); //keep switching player turns

            if(win_or_draw()) { //check if its a win or draw
                game_board(); //show the final board
                declare_winner(); //declare the result 
                break; //end the game
            } 
        }

        return 0;

}