// count how many times a letter present within a string.
#include <stdio.h>
void main()
{
    char x[20], p;
    int i, c = 0,f=0;
    printf("Enter the String = ");
    gets(x);
    for (i=0; x[i]!='\0'; i++)
    {
        if(x[i]>=97 && x[i]<=122)
            x[i]= x[i]-32;
    }
    printf("Enter the Letter you want to searched for = ");
    scanf("%c", &p);
    if(p>=97 && p<=122)
    {
        p = p-32;
        f=1;
    }
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == p)
            c++;
    }
    if(f==0)
    printf("%c present %d times ", p, c);
    else
    {
    p=p+32;
    printf("%c present %d times ", p, c);
    }
}