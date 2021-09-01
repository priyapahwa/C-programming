#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "mind";
    // strcpy is used to copy content of second into first string
    //strcpy(target, source)
    char st2[45];
    strcpy(st2, st);
    printf("Never %s \n", st2);
    // printf(" %s Never \n", st2);
    // printf("%s Never \n", st);
    // printf("Never %s\n", st);

    return 0;
}