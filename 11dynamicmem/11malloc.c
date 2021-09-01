#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memory allocation. it takes no of bytes as input and returns a pointer
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    // it can be used as an array there after
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }
    return 0;
}