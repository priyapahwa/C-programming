#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //number guessing game

    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; // generates random no between 1 and 100
    // printf("The number is %d \n", number);

    //keep running the loop until number is guessed
    do
    {
        printf("Guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Your guess is too high \n");
        }
        else if (guess < number)
        {
            printf("Your guess is too low \n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempts. \n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}