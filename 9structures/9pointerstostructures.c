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
    struct employees e1;
    struct employees *ptr;

    ptr = &e1; // *ptr = e1
    // (*ptr).code = 101; //or you can write :-
    ptr->code = 101;
    printf("%d", e1.code);

    return 0;
}