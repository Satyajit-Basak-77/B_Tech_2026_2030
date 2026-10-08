#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {   
        //spaces
        for(j=4-i; j>=1; j--)
        {
            printf(" ");
        }
        //stars
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}