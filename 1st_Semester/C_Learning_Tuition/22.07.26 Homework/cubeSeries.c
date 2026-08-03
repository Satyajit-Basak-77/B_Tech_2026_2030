#include<stdio.h>
void main()
{
    int i,n,s;
    printf("Enter your no. of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", i*i*i);
        s = s + i*i*i;
    }
    printf("\n%d is the total sum", s);
}