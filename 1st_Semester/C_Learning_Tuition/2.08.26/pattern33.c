#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=4; j>i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(j=i-1; j>=1; j--)
        {
            printf("*", j);
        }
        printf("\n");
    }
}