#include <stdio.h>

int main()
{
    //print the value of variable i by using pointer to pointer type variable
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;       // ptr store krskta hai address of i ko
    ptr_ptr = &ptr; //ptr_ptr store krskta hai address of ptr ko

    printf("The value of i is %d", **ptr_ptr);
    return 0;
}