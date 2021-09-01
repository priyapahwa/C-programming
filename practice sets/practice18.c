#include <stdio.h>

int main()
{
    // calculate sum of numbers occuring in multiplication of 8
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("8 X %d = %d\n", i, 8 * i);
        sum = sum + 8 * i;
    }
    printf("Sum = %d", sum);
    return 0;
}