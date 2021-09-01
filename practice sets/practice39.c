#include <stdio.h>

int main()
{
    //create an array of 10 integers
    //store multiplication table of 5 in it
    int n;
    printf("Multiplication table of: \n");
    scanf("%d", &n);
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d = %d\n", n, i + 1, mul[i]);
    }

    return 0;
}