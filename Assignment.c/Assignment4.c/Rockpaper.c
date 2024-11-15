#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    int userChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};
    
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &userChoice);

    
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return;
    }

    
    computerChoice = rand() % 101;

    
    if (computerChoice <= 33) {
        computerChoice = 0; 
    } else if (computerChoice <= 66) {
        computerChoice = 1; 
    } else {
        computerChoice = 2;
    }

    
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

   
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
 
    srand(time(0));

    playGame();

    return 0;
}
