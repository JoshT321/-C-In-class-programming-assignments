#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, column;

    for(row = 1; row <= 12; row++){
                printf("%4d ", row);
        for(column = 1; column <= 12; column++){
            if(column != 1)
                printf("%4d ", row * column);
        }
        printf("\n");
    }
    int guesses = 0;
    int playerGuess = 0;
    int numberToGuess = 4;
    while(guesses != 3){
        printf("Please guess a number (1-10): ");
        scanf("%d", &playerGuess);
        if(playerGuess == numberToGuess){
            printf("You win! Congrats!");
            break;
            }
       else if (playerGuess < numberToGuess){
            guesses += 1;
            printf("Guess to low! \n");
        }
        else{
            guesses += 1;
            printf("Guess to high! \n");
        }
    }
    return 0;
}
