//a. x-x+x-x+x-x+x+ ... (0<x<=1)

#include<stdio.h>
#include<math.h>
void main()
{
    int i, n, s=0, x;
    printf("Enter the terms you need: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d", x);
        }
        else if(i%2==0)
        {
            printf(" - %d", x);
            s = s - x;
        }
        else 
        {
            printf(" + %d", x);
            s = s + x;
        }
    }

    printf("\nThe sum is: %d", s);
}