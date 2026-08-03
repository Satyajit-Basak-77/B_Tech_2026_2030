//a. 2, 5, 8, 11, 14, ...

#include<stdio.h>
void main()
{
    int i,j=2,n;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", j);
        j=j+3;
    }
}