#include <stdio.h>
#include <stdlib.h>

int main(){   /*build the guessing game with unlimited tries*/
    int secretNumber = 5;      /*the secretNumber is 5 when entered correctly the program will print out you win*/
    int guess;      /*Guessed number will be stored in this variable*/
    
    while(guess != secretNumber){    /*while the guessed number is not equal to the secretNumber continue looping*/
        printf("Enter a number: ");
        scanf("%d", &guess);    /*guessed number will be entered here and will be compared to secretNumber above*/ 
    }
    printf("You Win!\n");   /*when the guessed number is equal to secretNumber it will break out of the loop and print out you win!*/
    
    /*create a guessing game with guess limit*/
    int secretNumber_1 = 5; /*secret number is 5*/
    int guess_1;    /*guess will be stored here*/
    int guessCount = 0;   /*initially the guessCount will be 0*/
    int guessLimit = 3;     /*guess limit will be 3*/
    int outOfGuesses = 0;   /*set outOfGuesses to 0*/
    
    while(guess_1 != secretNumber_1 && outOfGuesses == 0){   /*while the secretNumber_1 is not equalto guessed number and outOfGuesses is 0 the loop will go on */
        if(guessCount < guessLimit){   /*if the guessCount is less the guessLimit the loop will continue*/
            printf("Enter a number: ");
            scanf("%d", &guess_1);
            guessCount++;   /*guessCount will increase one by one each time you guess the number when the above condition becomes false then the outOfGuesses will become oneand when outOfGuesses become 1 the loop will stop */
        } else{
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1){    /*if out Guesses becomes 1 it will print out out of guesses*/
        printf("Out of guesses");
    }else {
        printf("You Win!");   /*else it means you have guessed the number correctly then it will print out you win!*/
    }
    return 0;
}