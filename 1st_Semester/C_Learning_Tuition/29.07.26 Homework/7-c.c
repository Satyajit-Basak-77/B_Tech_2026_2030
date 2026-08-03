//c. x^2 - x^5 + x^8 - x^11 + x^14 - ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i, n, s=0, x, p=2;
    printf("Enter the terms you need: ");
    scanf("%d", &n);
    printf("Enter x: ");
    scanf("%d", &x);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            printf("%d^%d", x, p);
            s = s + pow(x,p);
            p+=3;
        }
        else if(i%2==0)
        {
            printf(" - %d^%d", x, p);
            s = s - pow(x,p);
            p+=3;
        }
        else 
        {
            printf(" + %d^%d", x, p);
            s = s + pow(x,p);
            p+=3;
        }
    }
    printf("\nThe sum is: %d", s);
}