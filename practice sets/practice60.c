#include <stdio.h>

int main()
{
    // read a file char by char and write its content twice in separate file
    char c;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("practice60r.txt", "r");
    ptr2 = fopen("practice60w.txt", "w");
    c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}