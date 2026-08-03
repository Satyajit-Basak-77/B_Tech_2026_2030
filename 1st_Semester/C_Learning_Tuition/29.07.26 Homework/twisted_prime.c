#include<stdio.h>
void main()
{
    int x, n, rev=0, rem, f=0, g=0; 

    printf("Enter n: ");
    scanf("%d", &n);
    // check the given number is prime or not. 
    for(int i=2; i<n/2; i++)
    {
        if(n%i ==0)
            f=1;
            break;
    }

    // reverse the given number
    for(x=n; n>0; n=n/10)
    {
        rem = n%10;
        rev = rev*10 + rem;
    }

    printf("The reverse is: %d", rev);

    // check the given number's rev is prime or not
    for(int j=2; j<rev/2; j++)
    {
        if(rev%j == 0)
            g=1;
            break;
    }

    if(f==0 && g==0)
    {
        printf("\nTwisted prime");
    } 
    else 
    {
        printf("\nNOT Twisted prime");
    }
}