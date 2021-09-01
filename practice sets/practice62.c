#include <stdio.h>

int main()
{
    // modily a file containing an integer to double its value
    FILE *ptr;
    int num;
    ptr = fopen("practice62.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("practice62.txt", "w");
    fprintf(ptr, "%d", 2 * num);
    fclose(ptr);

    return 0;
}