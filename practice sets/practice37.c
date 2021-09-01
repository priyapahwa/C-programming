#include <stdio.h>

int main()
{
    //create an array of 10 numbers.
    //verify using pointer arithmetic that ptr+2 points to third element where ptr is pointer pointing to first element of array
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These point to the same location\n");
    }
    else
    {
        printf("These do not point to the same location\n");
    }
    return 0;
}