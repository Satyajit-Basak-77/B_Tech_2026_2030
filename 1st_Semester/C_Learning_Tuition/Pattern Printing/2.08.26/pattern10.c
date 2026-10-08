/*
9
79
579
3579
13579
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=9; i>=1; i-=2)
    {
        for(j=i; j<=9; j+=2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}