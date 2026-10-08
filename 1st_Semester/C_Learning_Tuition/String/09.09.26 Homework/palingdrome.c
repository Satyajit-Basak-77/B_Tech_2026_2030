#include<stdio.h>
void main()
{
    char x[20], y[20];
    int i,j,f=0, lx=0;
    printf("Enter = ");
    gets(x);

    for(i=0; x[i]!='\0'; i++){
        lx++;
    }
    for(i=0; i<lx; i++)
    {
        y[lx-i-1]=x[i];
    }
    y[lx]='\0';
    for(j=0; j<lx; j++)
    {
        if(x[j]!=y[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("String Match");
    else
        printf("Not");
}