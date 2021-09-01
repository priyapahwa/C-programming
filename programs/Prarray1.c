#include <stdio.h>

int main()
{
    printf("\n\n\t\t SUM OF N NUMBERS USING ARRAY \n\n\n");
    int n, sum = 0, c;
    int array[100];
    printf("Enter the number of integers to be added: ");
    scanf("%d", &n);
    printf("\n\n Enter %d integers \n\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c];
    }
    printf("\n\nSum = %d \n\n", sum);
    return 0;
}