#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"


/*
const int EMPTY = 0;
const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;

*/

enum {EMPTY, NOUGHTS, CROSSES, BORDER};
enum {HUMANWIN, COMPWIN, DRAW};

const int convertTo25[] = {
    6,7,8,
    11,12,13,
    16,17,18
};

void initializeBoard(int *board){
    int index = 0;

    for (index=0; index< 25; ++index){
        board[index] = BORDER;
    }

    for (index=0; index<9; ++index){
        board[convertTo25[index]] = EMPTY;
    }
}

void printBoard(const int *board) {
    int index = 0;
    char piceChar[] = "-OX|";

    printf("\n\nBoard:\n\n");
    for (index = 0; index < 9; ++index) {
        if (index != 0 && index % 3 == 0) {
            printf("\n\n");
        }

        printf("%4c", piceChar[board[convertTo25[index]]]);
    }
    printf("\n");
}

void Game(){

    int gameOver = 0;
    int side = NOUGHTS;
    int lastMoveMade = 0;
    int board[25];

    initializeBoard(&board[0]);
    printBoard(&board[0]);

    while (!gameOver){
        if (side==NOUGHTS){
           //get move from human, make move on the board, change sides
        } else {
            //get move from computer, make the move on the board, change sides
            printBoard(&board[0]);
        }

        //if three in a row exists then game over

        //if no more moves then draw
    }


}

int main(){

    srand(time(NULL));
    Game();
    return 0;
}

