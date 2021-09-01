#include <stdio.h>

int main()
{
    // program to determine whether a number is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibilty test returns: %d\n", num % 97);
    return 0;
}