#include <stdio.h>
#include <string.h>

struct employees
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employees facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 368.97;
    strcpy(facebook[0].name, "Chandler");

    facebook[1].code = 106;
    facebook[1].salary = 329.07;
    strcpy(facebook[1].name, "Ross");

    facebook[2].code = 90;
    facebook[2].salary = 298.87;
    strcpy(facebook[2].name, "Joey");

    printf("Done!");
    return 0;
}