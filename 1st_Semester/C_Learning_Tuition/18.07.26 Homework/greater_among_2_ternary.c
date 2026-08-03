#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    (a>b)?printf("a(%d) is greater than b(%d)", a,b):printf("b(%d) is greater than a(%d)", a,b);
}