#include<stdio.h>
void main()
{
    int i, n;
    printf("Enter the last term you need: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
}