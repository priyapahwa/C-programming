#include <stdio.h>

int main()
{
    // output 5
    int skip = 5, i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d \n", i);
        }
    }
    return 0;
}