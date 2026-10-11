#include <stdio.h>
#include <math.h>
int prime(int);
int rev(int);
void main()
{
    int n = 173, f=0, x;
    // x=n;
    f = prime(n);
    if (f == 1)
        printf("\n%d is not prime and %d is not circular prime", n, n);
    else
    {
        x = rev(n);
        printf("\n %d", x);
        f = prime(x);
    }
    while (x != n)
    {
        f = prime(x);
        x = rev(x);
        printf("\n %d", x);
    }
    if (f == 1)
        printf("\n%d is not prime and %d is not circular prime", x, n);
    else
        printf("\n%d is circular prime", x, n);
}
int prime(int n)
{
    int f = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            return f;
        }
    }
    return f;
}
int rev(int n)
{
    int x, rem, sum, c = 0;
    for (x = n; n != 0; n /= 10)
    {
        c++;
    }
    n = x;
    rem = n % ((int)round(pow(10, c - 1)));
    n = n / ((int)round(pow(10, c - 1)));
    sum = rem * 10 + n;
    return sum;
}