#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[40], name2[40];
    printf("Kya naam hai tera?\n");
    scanf("%s", name1);

    printf("Aur tere saath waale ka?\n");
    scanf("%s", name2);

    ptr = fopen("practice61.txt", "w");
    fprintf(ptr, "%s , 3300 \n", name1);
    fprintf(ptr, "%s , 7700 \n", name2);
    fclose(ptr);
    return 0;
}