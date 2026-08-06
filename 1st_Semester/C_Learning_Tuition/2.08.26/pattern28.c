/*
   * 
  * * 
 * * * 
* * * * 
 * * * 
  * * 
   *
*/

#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {   
        //spaces
        for(j=i; j<4; j++)
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

    //bottom half
    for(i=3; i>=1; i--)
    {   
        //spaces
        for(j=i; j<4; j++)
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