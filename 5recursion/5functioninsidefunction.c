#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf("Gooood Morninggg Indiaaaa!!! \n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon Peeps! \n");

    goodNight();
}
void goodNight()
{
    printf("Gooood Night :| \n");
}