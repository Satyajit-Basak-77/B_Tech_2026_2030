#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {   
        //stars
        for(j=1; j<=i; j++)
        {   
            if(i%2 != 0)
            printf("0");
            else 
            printf("1");
        }
        printf("\n");
    }
}