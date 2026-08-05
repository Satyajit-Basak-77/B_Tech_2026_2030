#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {   
        //spaces
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        //stars
        for(k=4; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}