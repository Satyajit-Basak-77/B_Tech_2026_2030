#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 no: ");
    scanf("%d%d%d", &a,&b,&c);
    (a>b)?((a>c)?printf("a is largest"):printf("c is largest")):(b>c)?printf("b is largest"):printf("c is largest");
}