#include <stdio.h>
char strcopy(char *st2, char *st1)
{
    char *ptr1 = st1;
    char *ptr2 = st2;
    int i = 0;
    while ((*ptr2++ = *ptr1++))
        ;
}

// st2[i] = st1[i];
// i++;
// ptr1++;
// ptr2++;

int main()
{
    // own version of strcpy
    char *st1 = "mind";
    char *st2 = "Never";
    strcopy(st2, st1);
    printf("The copied string is: %s \n", st1);

    return 0;
}