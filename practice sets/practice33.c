#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    //calculate sum and average of two numbers using function. use pointers and print the value of sum average in main
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %.2f \n", avg);
    return 0;
}