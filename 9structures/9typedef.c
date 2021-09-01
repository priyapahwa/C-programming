#include <stdio.h>
#include <string.h>

typedef struct employees
{

    int code;
    float salary;
    char name[10];
} emp;

void show(struct employees emp1)
{
    printf("The code of employee is %d\n", emp1.code);
    printf("The salary of employee is %f\n", emp1.salary);
    printf("The name of employee is %s\n", emp1.name);
}

int main()
{
    //declaring e1 and ptr
    emp e1;
    emp *ptr;
    //pointing ptr to e1
    ptr = &e1;
    //set the number for e1
    ptr->code = 101;
    ptr->salary = 18.91;
    strcpy(ptr->name, "Devil");
    show(e1);

    return 0;
}