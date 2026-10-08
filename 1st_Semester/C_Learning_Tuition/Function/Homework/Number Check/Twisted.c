#include <stdio.h>
#include<stdlib.h>
void prime(int);
int rev(int);
int f = 0;
void main()
{   
    int p,n;
    printf("Enter: ");
    scanf("%d", &n);
    prime(n);
    if(f==0){
        p = rev(n);
        prime(p);
        if(f==0){
            printf("\nTwisted.");
        } else {
            printf("\nNot Twisted");
        }
    } else {
        printf("Not twisted. ");
    }
}
void prime(int n)
{
    f = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is NOT prime\n", n);
            f = 1;
            return;
        }
    }
    printf("%d is prime\n", n);
}
int rev(int n)
{
    int re=0, rem, x;
    for (x = n; n != 0; n /= 10)
    {
        rem = n % 10;
        re = re * 10 + rem;
    }
    return re;
}