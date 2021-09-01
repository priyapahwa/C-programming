#include <stdio.h>
void times(int *a);

int main()
{
    // to change the value of variable to ten times of its current value. write a function and pass the value by reference.
    int a = 5;
    printf("Initial value of a is %d\n", a);
    times(&a);
    printf("Final value of a is %d\n", a);
    return 0;
}
void times(int *a)
{
    int temp;
    temp = *a;
    *a = 10 * temp;
}

//call by value mei variable ki apni value pass hoti hai lekin call by reference mei variable ke address ki value passs on hoti hai