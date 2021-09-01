#include <stdio.h>

int main()
{
    // bodmas is not applicable in c
    // priority order in c in absence of parenthesis
    // priority 1 * / %
    // priority 2 + -
    // priority 3  =

    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d \n", 3 * x - 8 * y);
    printf("The value of 8*y / 3*x is %d \n", 8 * y / 3 * x); // wrong answer
    // it goes left to right a.t.q. 24/3*2 = 8*2 = 16

    // tie breaker by associativity

    return 0;
}