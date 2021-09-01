#include <stdio.h>

int main()
{
    // to print the address of variable. use this to get address of this variable.
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d \n", a);
    printf("The address of variable a is %u\n", ptr);
    printf("The value of variable a is %d\n", *ptr);

    return 0;
}