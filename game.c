#include "stdio.h"

const int EMPTY = 0;
const int NOUGHTS = 1;
const int CROSSES = 2;
const int BORDER = 3;

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

void printBoard(const int *board){
    int index = 0;

    printf("\nBoard:\n");
    for (index=0; index<25;++index){
        if (index!=0 & index%5==0){
            printf("\n");
        }

        printf("%4d", board[index]);
    }
    printf("\n");
}

int main(){
    int board[25];

    initializeBoard(&board[0]);
    printBoard(&board[0]);

    return 0;
}

