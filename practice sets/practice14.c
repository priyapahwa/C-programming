#include <stdio.h>

int main()
{
    // n natural numbers in reverse order
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for (int a = n; a; a--)
    {
        printf("The value of a is %d \n", a);
    }
    return 0;
}