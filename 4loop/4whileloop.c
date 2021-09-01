#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d \n", a);
        a++;
    }

    printf("Enter a number less than 10");

    return 0;
}