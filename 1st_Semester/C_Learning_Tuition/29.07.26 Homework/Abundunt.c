#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0;
    printf("Enter your number: ");
    scanf("%d", &n); 

    for(i=1; i<n; i++)
    {   
    //printf("The factors are: ");
        if(n%i == 0)
        {   
            printf("%d ", i);
            s = s+i;
        }
    }

    if(s>=n)
    printf("\n%d is Abundunt", n);
    else
    printf("\n%d is NOT Abundunt", n);
}