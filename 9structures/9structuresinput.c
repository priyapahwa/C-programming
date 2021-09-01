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
    struct employees e1, e2, e3;
    printf("Enter code of first employee: \n");
    scanf("%d", &e1.code);
    printf("Enter salary of first employee: \n");
    scanf("%f", &e1.salary);
    printf("Enter name of first employee: \n");
    scanf("%s", e1.name);

    printf("Enter code of second employee: \n");
    scanf("%d", &e2.code);
    printf("Enter salary of second employee: \n");
    scanf("%f", &e2.salary);
    printf("Enter name of second employee: \n");
    scanf("%s", e2.name);

    printf("Enter code of third employee: \n");
    scanf("%d", &e3.code);
    printf("Enter salary of third employee: \n");
    scanf("%f", &e3.salary);
    printf("Enter name of third employee: \n");
    scanf("%s", e3.name);
    return 0;
}