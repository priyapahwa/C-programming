#include <stdio.h>
#include <string.h>

int main()
{
    // comparing two strings
    // if strings are equal then returns 0

    // refer acc to dictionary

    char st1[45] = "Hello";
    char *st2 = "World";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}