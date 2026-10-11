#include <stdio.h>
void main()
{
    int n, rem, x, s=0, s2=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(x=n; n>0; n=n/10)
    {
        rem = n%10;
        s = s + rem;
        s2 = s2 * rem;
    }
    if(s == s2)
        printf("Spy");
    else
        printf("NOT Spy");
}