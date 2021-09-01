#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d \n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n", i + 1, ptr[i]);
    }
    ptr[2] = 6677; //This value will be changed in arr main as well
}

int main()
{
    int arr[] = {23, 555, 64, 975, 90, 5543, 71};
    printArray(arr, 7);
    printf("%d", arr[2]);

    return 0;
}