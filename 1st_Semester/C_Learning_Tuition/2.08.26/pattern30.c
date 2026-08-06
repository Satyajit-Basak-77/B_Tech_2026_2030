#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=7; i+=2)
    {
        for(j=7; j>i; j-=2)
        {
            printf("  "); //there are double space
        }

        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}