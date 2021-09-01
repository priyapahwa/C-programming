#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; //in this computer's architecture integer size is of 4 byte, i++ increments its address by 4 byte

    // printf("The value of ptr is %u\n", ptr);

    // ===============

    // char c = 34;
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++; //in this computer's architecture character size is of 1 byte, i++ increments its address by 1 byte

    // printf("The value of ptr is %u\n", ptr);

    //=================

    float f = 3.4;
    float *ptr = &f;
    printf("The value of ptr is %u\n", ptr);
    ptr++; //in this computer's architecture float size is of 4 byte, i++ increments its address by 4 byte
    ptr++;

    printf("The value of ptr is %u\n", ptr);
    return 0;
}
