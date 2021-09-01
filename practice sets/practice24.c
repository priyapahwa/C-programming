#include <stdio.h>
float conversion(float a);

int main()
{
    // convert celcius to fahrenheit
    float temp;
    printf("Enter the value of temperature in degree celcius \n");
    scanf("%f", &temp);

    printf("Given temperature %f in fahrenheit is %f\n", temp, conversion(temp));
    return 0;
}

float conversion(float a)
{
    float result;
    result = (float)((a * 9 / 5) + 32);
    return result;
}