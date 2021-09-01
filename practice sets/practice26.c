#include <stdio.h>
int fib(int n);

int main()
{
    //recursion to calculate nth element of fibonacci series

    // The Fibonacci Sequence is the series of numbers:
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    // The next number is found by adding up the two numbers before it
    int n;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    printf("The desired value is %d \n", fib(n));
    return 0;
}
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}