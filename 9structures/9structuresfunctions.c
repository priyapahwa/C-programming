#include <stdio.h>
#include <string.h>

struct employees
{
    int code;
    float salary;
    char name[10];
};

void show(struct employees emp)
{
    printf("The code of employee is %d\n", emp.code);
    printf("The salary of employee is %f\n", emp.salary);
    printf("The name of employee is %s\n", emp.name);
}

int main()
{
    //show function
    struct employees e1;
    struct employees *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 18.91;
    strcpy(ptr->name, "Devil");
    show(e1);
    return 0;
}
