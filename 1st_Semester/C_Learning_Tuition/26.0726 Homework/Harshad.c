#include <stdio.h>
void main()
{
    int n, x, s=0, rem;
    printf("Enter n: ");
    scanf("%d", &n);

    for(x=n; n>0; n=n/10)
    {
        rem = n%10;
        s = s+rem;
    }

    if(x%s==0)
    {
        printf("Harshad");
    } else 
    {
        printf("NOT Harshad");
    }
}