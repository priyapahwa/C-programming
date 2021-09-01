#include <stdio.h>

int main()
{
    // pass or fail

    int physics, chemistry, maths;
    float total;

    printf("Enter Physics marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;
    if (total < 40 || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Sorry, your total percentage is %f better luck next time! \n", total);
    }
    else
    {
        printf("Congratulations, Your total percentage is %f \n", total);
    }
    return 0;
}