#include <stdio.h>
#include <stdlib.h>

int main()
{
    //continuous allocation
    //initializes each memory blovk with default value of 0
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

        // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of %d element: \n", i + 1);
    //     scanf("%d", &ptr[i]);
    // }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i + 1, ptr[i]);
    }

    return 0;
}