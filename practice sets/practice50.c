#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    // encrypt a string by adding 1 to ascii value of its character
    char c[] = "String"; //*c is not recomended as we have to change the string instead of storing into read only memory
    encrypt(c);
    printf("Encrypted message is: %s", c);
    return 0;
}

//working: basically ptr is the address of that block in which s of string is there. so, e.g. agr s ki ascii value 97 hai toh ptr+1 krne mei jiski bhhi ascii value 98 hogi wo s ki jagah aajayega