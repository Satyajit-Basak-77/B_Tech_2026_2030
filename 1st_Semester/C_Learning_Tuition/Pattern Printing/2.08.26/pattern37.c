/*
1
11
112
1123
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1)
            printf("%d", j);
            else
            printf("%d", j-1);
        }
        printf("\n");
    }
}