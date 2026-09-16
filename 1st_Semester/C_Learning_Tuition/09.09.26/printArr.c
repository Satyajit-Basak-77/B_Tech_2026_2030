// WAP to take input into a character array & print the array
#include <stdio.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n", x);
    for (int i = 0; x[i] != '\0'; i++)
    {
        printf("%c", x[i]);
    }
}