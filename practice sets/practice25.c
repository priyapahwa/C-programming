#include <stdio.h>
float force(float a);

int main()
{
    //to calculate force of attraction on body of mass m exerted by earth
    float m;
    printf("Enter the value of mass in Kg \n");
    scanf("%f", &m);

    printf("Force of attraction of mass %f Kg exerted by earth is %.2f N. \n", m, force(m));

    return 0;
}
float force(float m)
{
    float g = 9.8;
    float result;
    result = (float)(m * g);
    return result;
}