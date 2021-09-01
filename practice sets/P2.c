#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockPaperScissor(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 it the match gets draw
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }

    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
}

int main()
{
    //rock, paper, scissor
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number <= 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("ROCKKK, PAPERR, SCISSOR!\n");
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissor \n");
    scanf("%c", &you);
    int result = rockPaperScissor(you, comp);
    printf("You chose %c and computer chose %c. \n", you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You won!\n");
    }
    else
    {
        printf("Computer won!\n");
    }

    return 0;
}