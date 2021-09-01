#include <stdio.h>

int main()
{
    //greatest of four
    int num1, num2, num3, num4;
    printf("Enter number 1 \n");
    scanf("%d", &num1);

    printf("Enter number 2 \n");
    scanf("%d", &num2);

    printf("Enter number 3 \n");
    scanf("%d", &num3);

    printf("Enter number 4 \n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is greatest \n", num1);
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("%d is greatest \n", num2);
    }
    else if (num3 > num4)
    {
        printf("%d is greatest \n", num3);
    }
    else
    {
        printf("%d is greatest \n", num4);
    }

    return 0;
}