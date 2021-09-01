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
    struct employees emp1 = {100, 345.98, "Butler"};

    printf("Code is %d \n", emp1.code);
    printf("Salary is %f \n", emp1.salary);
    printf("Name is %s \n", emp1.name);
    return 0;
}