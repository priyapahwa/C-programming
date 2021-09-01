#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        //n/2 because n tk jaane mei do baar reverse hokr same array aajayegi
        // 1,2,3 swap honge 4 same rhega phirse 5,6,7 swap hojaayenge
        // kyunki ye integer hi hai toh odd no ke case mei half krke bhi same rhega aur even mei bhi
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    //function which reverses the array passed to it.
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is: %d\n", i, arr[i]);
    }
    return 0;
}