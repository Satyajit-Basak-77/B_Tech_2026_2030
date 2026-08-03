#include<stdio.h>
void main()
{
    int i,s=0,n;
    printf("Enter how many terms you wants to add: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++)
    {
        printf ("%d ", i*i);
        s = s + i*i;
    }
    printf("\n YOUR SUMMATION IS = %d", s);
}