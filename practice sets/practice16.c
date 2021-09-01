#include <stdio.h>

int main()
{
    //multiplication table in reverse order
    int i;
    for (i = 10; i; i--)
    {
        printf("%d X %d = %d \n", 10, i, 10 * i);
    }
    return 0;
}