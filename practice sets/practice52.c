#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
            ptr++;
        }
    }
    return count;
}

int main()
{
    // count occurence of given character in string
    char st[] = "Hello";
    int count = occurence(st, 'l');
    printf("Occurences = %d", count);
    return 0;
}