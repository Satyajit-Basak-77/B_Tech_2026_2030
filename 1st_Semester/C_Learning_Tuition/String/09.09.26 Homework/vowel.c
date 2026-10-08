#include<stdio.h>
void main()
{
    char x[20];
    int i,j,v=0, c=0, sp=0;

    gets(x);
    for(i=0; x[i]!='\0'; i++)
    {
        if(x[i]== 'a' || x[i]== 'e' || x[i]== 'i' || x[i]== 'o' || x[i]== 'u' || x[i]== 'A' || x[i]== 'E' || x[i]== 'I' || x[i]== 'O' || x[i]== 'U')
            v++;
        else if(x[i] == 32)
        sp++;
        else
        c++;
    }
    printf("%d %d %d", v, sp, c);
}