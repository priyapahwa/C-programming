#include <stdio.h>

int main()
{
    char *ptr = "Strings";
    // char ptr[] = "Strings";
    ptr = "Whatever";
    printf("%s", ptr);
    return 0;
}