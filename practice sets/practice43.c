#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d = %d\n\n", num, i + 1, mulTable[i]);
    }
    printf("*********************************\n\n");
}

int main()
{
    // create an array of size 3X10 containing multiplication tables of 2,7,9 respt
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    return 0;
}