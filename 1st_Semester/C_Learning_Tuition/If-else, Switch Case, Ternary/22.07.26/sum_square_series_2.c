#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,p;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        p=pow(i, 2);
        printf("%d ", p);
        s=s+p;
    }
    printf("The sum is %d", s);
}