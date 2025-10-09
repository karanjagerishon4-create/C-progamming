/*
Name:Gerishon Kamau Karanja
Reg:PA106/G/29211/25
Description:program for a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main function

int main() {
    int secret_number, guess;

    // Seed the random number generator
    srand(time(NULL));
    
    //generation of number to be guessed
    secret_number = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    // Loop until player is correct
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
            break;
        }
    }

    return 0;
}