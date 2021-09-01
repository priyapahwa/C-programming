#include <stdio.h>

// to find count of positive num
int countPosNum(int *arr, int n)
{
    int pos_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos_count++;
    }
    return pos_count;
}

//to print array
// void printArray(int *arr, int n)
// {
//     int i;
//     printf("Array: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }
int main()
{
    //function that counts the number of positive integers in array
    int arr[] = {2, -1, 8, -9, 7, 0};
    int n;
    n = sizeof(arr) / sizeof(arr[0]); // for variable size of array
    // printArray(arr, n);
    printf("Count of positive elements = %d\n", countPosNum(arr, n));

    return 0;
}