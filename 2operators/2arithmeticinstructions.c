#include <stdio.h>
#include <math.h> //for power

int main()
{
    int a = 4;
    int b = 8;
    int z = b * a;

      printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of z is %d\n", z);
    printf("5 when divided by 2 leaves remainder of %d\n", 5 % 2);
    printf("The value of 4 to the power 5 is %f\n", pow(4, 5)); //exponential

    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);

    return 0;
}