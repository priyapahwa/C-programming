#include <stdio.h>

int main()
{
    //multiplication table generator
    FILE *ptr;
    int num;
    printf("Tipi tipi top, Which table you waaantt??\n");
    scanf("%d", &num);
    ptr = fopen("practice59.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    return 0;
}