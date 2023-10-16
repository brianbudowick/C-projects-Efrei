#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, playerGuess, numberOfGuesses = 0;
    
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;
    
   
    
    do {
        // Prompt the player for their guess
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &playerGuess);
        
        // Increment the number of guesses
        numberOfGuesses++;
        
        // Check if the guess is too high, too low, or correct
        if (playerGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (playerGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d guesses!\n", numberToGuess, numberOfGuesses);
        }
    } while (playerGuess != numberToGuess);
    
    return 0;
}

 