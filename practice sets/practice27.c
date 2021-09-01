#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d", a, ++a, a++);
    // in print arguments are passed from right to left
    // it depends upon compiler to compiler
    return 0;
}