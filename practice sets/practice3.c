#include <stdio.h>

int main()
{
    int principal = 100, rate = 4, time = 1;
    int simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest is calculated as %d", simpleInterest);
    return 0;
}