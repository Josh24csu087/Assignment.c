#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
    printf("\n");
}

int checkWinner(char board[3][3], char player) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return 1;

    return 0;
}


int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}


void playerMove(char board[3][3]) {
    int move;
    printf("Enter your move (1-9): ");
    scanf("%d", &move);
    move--;

    int row = move / 3;
    int col = move % 3;

    if (move < 0 || move > 8 || board[row][col] != ' ') {
        printf("Invalid move! Try again.\n");
        playerMove(board);
    } else {
        board[row][col] = 'X';
    }
}


void computerMove(char board[3][3]) {
    printf("Computer's move: \n");


    srand(time(0));
    int move;
    do {
        move = rand() % 9;  
        int row = move / 3;
        int col = move % 3;
        if (board[row][col] == ' ') {
            board[row][col] = 'O';
            break;
        }
    } while (1);
}

void playGame() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int turn = 0; 

    printBoard(board);

    while (1) {
        if (turn % 2 == 0) {
         
            playerMove(board);
        } else {
          
            computerMove(board);
        }

        printBoard(board);

       
        if (checkWinner(board, 'X')) {
            printf("You win!\n");
            break;
        }
        if (checkWinner(board, 'O')) {
            printf("Computer wins!\n");
            break;
        }

     
        if (isBoardFull(board)) {
            printf("It's a tie!\n");
            break;
        }

        turn++;
    }
}


int main() {
    printf("Welcome to Tic Tac Toe!\n");
    playGame();
    return 0;
}
