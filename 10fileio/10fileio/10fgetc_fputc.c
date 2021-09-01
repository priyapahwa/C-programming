#include <stdio.h>

int main()
{
    FILE *ptr;
    //fgetc gor reading a file char by char
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", c);
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));

    // fputc for writing char by char
    ptr = fopen("putcdemo.txt", "w");
    putc('s', ptr);
    putc('h', ptr);
    putc('u', ptr);
    putc('t', ptr);
    putc(' ', ptr);
    putc('u', ptr);
    putc('p', ptr);
    fclose(ptr);
    return 0;
}