#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "Chill";
    int a = strlen(st); //tells the length of string excluding the null character
    printf("The length of string st is %d", a);

    return 0;
}