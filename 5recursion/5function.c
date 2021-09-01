#include <stdio.h>
void display(); //function prototype

int main()
{
    int a;
    printf("Initializing display function\n");
    display(); //function call
    printf("Display done \n");
    return 0;
}

void display()
{
    printf("This is display\n"); // function definition
}