#include<stdio.h>
void main()
{
    int n, s=0, rem, x, x2, rem2, s2=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(x=n; n>0; n=n/10)
    {
        rem = n%10;
        s = s+rem;
    }
    for(x2=s; s>0; s=s/10)
    {
        rem2 = s%10;
        s2 = s2 + rem2;
    }
    if(s2 == 1)
        printf("Magic Number");
    else 
        printf("NOT Magic Number");
}