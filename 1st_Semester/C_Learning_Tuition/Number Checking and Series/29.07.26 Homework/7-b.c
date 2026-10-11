//b. x-x^2+x^3-x^4+x^5- ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i, n, s=0, x, p=1;
    printf("Enter the terms you need: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d", x);
            s = s + x;
            p++;
        }
        else if(i%2==0)
        {
            printf(" - %d^%d", x, p);
            s = s - pow(x, p);
            p++;
        }
        else 
        {
            printf(" + %d^%d", x, p);
            s = s + pow(x, p);
            p++;
        }
    }

    printf("\nThe sum is: %d", s);
}