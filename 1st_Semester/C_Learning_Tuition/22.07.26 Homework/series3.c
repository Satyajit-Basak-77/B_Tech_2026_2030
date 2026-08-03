//1/1!  + 2/2! + 3/3! + 4/4! + 5/5! -- n/n!  all sum
#include<stdio.h>
void main()
{
    float i,j,n,fact;
    float s=0;
    printf("Enter n: ");
    scanf("%f", &n);
    for(i=1; i<=n; i++)
    {   
        fact=1;
        for(j=1; j<=i; j++)
        {
            fact = fact*j;
        }
        printf("%.0f/%.0f ", j-1,fact); 
        s = s + ((j-1)/fact);
    }
    printf("\nThe sum is = %f", s);
}