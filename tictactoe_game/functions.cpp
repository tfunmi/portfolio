#include <iostream>
using namespace std;

char board_space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
char token = 'x';
int column;
bool its_a_tie = false;
int num1guess;
int num2guess;


//deems who goes first

void randomnumberguesser(){
    std::cout << "Welcome to tic tac toe!\n";
    std::cout << "Each player please choose a number between 1-10\n";

    std::cin >> num1guess;
    std::cin >> num2guess;

    //check if the players choose the same number

    if(num1guess == num2guess){
        std::cout << "You cannot choose the same number.\n";
        randomnumberguesser();
        return;
    }

    srand(time(NULL));
    int randnum = rand() % 10 + 1; //to only get numbers 1-10

    int user1difference = abs(num1guess - randnum);
    int user2difference = abs(num2guess - randnum);

    //to see which number is closer to the number generated or if its a tie

    if((num1guess == randnum) && (num2guess == randnum)){
        std::cout << "It's a tie! Try again\n";
        randomnumberguesser();
    } else if((num1guess == randnum) || (user2difference > user1difference)){
        std::cout << "Congrats player 1! You guessed the number I was thinking of/the number closest to the one I was thinking of. You get to go first\n";
        token = 'x';
    } else if((num2guess == randnum) || user1difference > user2difference){
        std::cout << "Congrats player 2! You guessed the number I was thinking of/the number closest to the one I was thinking of. You get to go first.\n";
        token = 'o';
    }
}

//displays game board
void game_board(){

    // char board_space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    //just display the board without re-initializing it

        std::cout << "     |     |     \n";
        std::cout << "  " << board_space[0][0] << "  |  " << board_space[0][1] << "  |  " << board_space[0][2] << "  \n";
        std::cout << "_____|_____|_____\n";
        std::cout << "     |     |     \n";
        std::cout << "  " << board_space[1][0] << "  |  " << board_space[1][1] << "  |  " << board_space[1][2] << "  \n";
        std::cout << "_____|_____|_____\n";
        std::cout << "     |     |     \n";
        std::cout << "  " << board_space[2][0] << "  |  " << board_space[2][1] << "  |  " << board_space[2][2] << "  \n";
        std::cout << "     |     |     \n";
}

//let the games begin!

void x_or_o(){

    int chart_selection;

    if(token == 'x'){
        std::cout << "player1, you have 'x's: please enter the corresponding number to the space on the board you would like to start with.\n";
        std::cin >> chart_selection;

    }

    if(token == 'o'){
    std::cout << "player2, you have 'o's: please enter the corresponding number to the space on the board you would like to start with.\n";
    std::cin >> chart_selection;
    }

    //mapping the chart selection to the board's row and column

    if(chart_selection == 1){
        row = 0;
        column = 0;
    } else if(chart_selection == 2){
        row=0;
        column=1;
    } else if(chart_selection == 3){
        row=0;
        column=2;
    } else if(chart_selection == 4){
        row=1;
        column=0;
    } else if(chart_selection == 5){
        row=1;
        column=1;
    } else if(chart_selection == 6){
        row=1;
        column=2;
    } else if(chart_selection == 7){
        row=2;
        column=0;
    } else if(chart_selection == 8){
        row=2;
        column=1;
    } else if(chart_selection == 9){
        row=2;
        column=2;
    } else {
        std::cout << "Invalid selection!!\n";
        x_or_o(); //restart
        return;
    }

    //inputs x or o

    if(token == 'x' && board_space[row][column] != 'x' && board_space[row][column] != 'o'){
        board_space[row][column] = 'x';
        token = 'o';
        std::cout << "player2 you may go\n";
    } else if(token == 'o' && board_space[row][column] != 'x' && board_space[row][column] != 'o'){
        board_space[row][column] = 'o';
        token = 'x';
        std::cout << "player1 you may go\n";
    } else {
        std::cout << "There is no empty space!\n";
        x_or_o(); //restart if the spot is taken
        return;
    }

    //show the updated board
    game_board();
}

//checking if its a win or draw 

//checks for three pairs of x's or o's both horizontally or vertically, or if the game is still going on
bool win_or_draw(){
    for (int i = 0; i < 3; i++){
        //horizontal check
        if(board_space[i][0] == board_space[i][1] && board_space[i][0] == board_space[i][2]){
            return true;
        }

        //vertical check
        if(board_space[0][i] == board_space[1][i] && board_space[0][i] == board_space[2][i]){
            return true;
        } 
        
    }

    //checks diagonal
    if((board_space[0][0] == board_space[1][1] && board_space[1][1] == board_space[2][2]) || (board_space[0][2] == board_space[1][1] && board_space[1][1] == board_space[2][0])){
        return true;
    }

    //iterates through the 3x3 matrix and checks if any space is empty
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board_space[i][j] != 'x' && board_space[i][j] != 'o'){
                return false; //game continues
            }
        }
    }

    //if no spaces left, its a tie
    its_a_tie = true; 
    return true;
}

void declare_winner(){
    if(its_a_tie){
        std::cout << "It's a draw!\n";
    } else if(token == 'x'){
        std::cout << "Player 2 wins!!\n"; //the token would have switched to the other player
    } else {
        std::cout << "Player 1 wins!!\n";
    }
}
    

