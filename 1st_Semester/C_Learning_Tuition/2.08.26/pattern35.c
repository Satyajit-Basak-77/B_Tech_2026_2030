/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/

#include<stdio.h>
void main()
{
    int i,j;
    //upper half portion
    for(i=1; i<=4; i++)
    {   
        //upper left stars
        for(j=4; j>=i; j--)
        {
            printf("*");
        }

        //upper half spaces
        for(j=1; j<i; j++)
        {
            printf("  ");
        }

        // upper right stars
        for(j=4; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    //lower half portion
    for(i=4; i>=1; i--)
    {   
        //upper left stars
        for(j=4; j>=i; j--)
        {
            printf("*");
        }

        //upper half spaces
        for(j=1; j<i; j++)
        {
            printf("  ");
        }

        // upper right stars
        for(j=4; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}