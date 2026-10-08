#include<stdio.h>
void main()
{
    int i;
    char x[20];

    printf("Enter = ");
    gets(x);

    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]>=65 && x[i]<=90)
            printf("%c", x[i]);
        else if (x[i]>=97 && x[i]<=122)
            printf("%c", x[i]-32);
        else
            printf("%c", x[i]);
    }
}