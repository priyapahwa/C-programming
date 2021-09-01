#include <stdio.h>

int main()
{
    // read 4 integers from file
    int a, b, c, d1;
    FILE *ptr;
    ptr = fopen("practice58.txt", "r");
    fscanf(ptr, "%d %d %d %d", &a, &b, &c, &d1);
    printf("Values of a, b, c and d are %d, %d, %d and %d respectively.\n", a, b, c, d1);

    return 0;
}