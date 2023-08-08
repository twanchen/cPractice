#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    printf("Heads or Tails? Please input 0 to make a guess for heads and 1 for tails\n");

    int userInput = 2;
    scanf("%d", &userInput);
    while (userInput != 0 && userInput != 1) {
		printf("Uh oh. I don't understand you. Please input 0 or 1\n");
		scanf("%d", &userInput);
    }

    if (userInput == 0) {
		printf("You guessed heads.\n");	
    }
    else {
		printf("You guessed tails.\n");
    }

    srand(time(0));
    int result = rand() % 2;

    if (result == 0) {
		printf("Heads. ");
    }
    else {
		printf("Tails. ");
    }

    if (result == userInput) {
		printf("You win!!");
    }
    else {
		printf("I won.");
    }

    return 0;
}
