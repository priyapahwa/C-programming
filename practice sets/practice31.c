#include <stdio.h>
void printAdd(int a);

int main()
{
    //write a programme having variable i. print the address of i. pass this variable to a function and print its address.
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printAdd(i);
    printf("The address of variable i is %u\n", &i);

    return 0;
}

void printAdd(int a)
{
    printf("The address of variable i is %u\n", &a);
}

//the address of i by calling with function and without function are different by both the methods. i ke andar 4 aagya uski value aagyi.. main ka i, main ke paas hi rhega. jo printadd mei paas hogi wo uski copy bnke aayegi. clone bn jayegi i ka jiski value bhi 4 hai. toh isiliye dono ke address alag alag honge.