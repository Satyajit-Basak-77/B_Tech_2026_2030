#include<stdio.h>
void main()
{
    int i,j1;
    for(i=1; i<=4; i++)
    {
        for(j1=1; j1<=i; j1++)
        {
            printf("%d", j1);
        }
        for(j1=i-1; j1>=1; j1--)
        {
            printf("%d", j1);
        }
        printf("\n");
    }
}