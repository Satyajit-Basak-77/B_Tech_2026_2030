#include<stdio.h>
#include<math.h>
void s2(int);
void main()
{
    int n;
    scanf("%d", &n);
    s2(n);
}
void s2(int n)
{
    int i,p, sum;
    for(i=1; i<=n; i++)
    {
        p= pow(2,i);
        printf("%d ", p);
        sum+=p;
    }
}