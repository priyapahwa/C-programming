#include <stdio.h>

int main()
{
    // area of rectangle using hard code inputs

    int l = 5;
    int b = 4;
    int area = l * b;
    printf("Area of rectangle is %d \n", area);

    // area of rectangle using inputs supplied by user

    int length, breadth;
    printf("Enter Length of rectangle\n");
    scanf("%d", &length);

    printf("Enter Breadth of rectangle\n");
    scanf("%d", &breadth);

    printf("Area of required rectangle is %d", length * breadth);

    return 0;
}