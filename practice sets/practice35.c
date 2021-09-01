#include <stdio.h>
int times(int a);

int main()
{
    // to change the value of variable to ten times of its current value. write a function and pass it by call the value .
    int a = 5;
    printf("The value of 10 times %d is %d\n", a, times(a));
    return 0;
}

int times(int a)
{
    return 10 * a;
}