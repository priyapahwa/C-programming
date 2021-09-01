#include <stdio.h>

int main()
{
    // factorial of given no using for loop
    // int i = 0, n = 3, factorial = 1; //3 ka factorial nikaalna hai
    // for (i = 1; i <= 3; i++)
    // {
    //     factorial *= i;
    // }
    // printf("The value of factorial %d is %d", n, factorial);

    // factorial of given no using while loop
    int i = 1, n = 7, factorial = 1;
    while (i <= 7)
    {
        factorial *= i;
        i++;
    }
    printf("The value of factorial 7 is %d ", factorial);
    return 0;
}