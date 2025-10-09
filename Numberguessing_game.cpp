/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:program to prompt user to guess a number untill correct
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL));
    secret = rand() % 20 + 1;  

    printf("Guess the secret number (between 1 and 20):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}