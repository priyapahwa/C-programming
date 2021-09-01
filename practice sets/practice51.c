#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    // decrypt a string by adding 1 to ascii value of its character
    char c[] = "Tusjoh"; //*c is not recomended as we have to change the string instead of storing into read only memory
    decrypt(c);
    printf("Decrypted message is: %s", c);
    return 0;
}