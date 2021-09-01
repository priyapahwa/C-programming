#include <stdio.h>

int main()
{
    //whether given number is prime or not using loops
    int n = 2, prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;

            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }

    return 0;
}