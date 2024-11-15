#include <stdio.h>
#include <string.h>

#define MAX_TRIES 3

void displayWord(char word[], char guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char word[] = "programming";  
    int wordLength = strlen(word);
    char guessed[wordLength];     
    int incorrectGuesses = 0;     
    int correctGuesses = 0;        
    char guess;

    
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = '_';
    }

    printf("Welcome to Hangman Game!\n");
    printf("You have %d incorrect guesses allowed.\n", MAX_TRIES);

    
    while (incorrectGuesses < MAX_TRIES) {
        printf("\nCurrent word: ");
        displayWord(word, guessed);

        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess);  

        int found = 0;
       
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && guessed[i] != guess) {
                guessed[i] = guess;  
                correctGuesses++;
                found = 1;
            }
        }

        if (!found) {
            incorrectGuesses++;
            printf("Incorrect guess! You have %d tries left.\n", MAX_TRIES - incorrectGuesses);
        }

       
        if (correctGuesses == wordLength) {
            printf("\nCongratulations! You've guessed the word correctly: %s\n", word);
            break;
        }
    }

   
    if (incorrectGuesses == MAX_TRIES) {
        printf("\nSorry, you've been hanged! The word was: %s\n", word);
    }

    return 0;
}
