#include<stdio.h>
void main()
{
    int n,m;
    float t;
    char o;
    printf("Operator: ");
    scanf("%c", &o);
    if(o == '+')
    {
        printf("Enter two numbers: ");
        scanf("%d%d", &n, &m);
        t = n+m;
        printf("%f", t);
    }
    else if(o == '-')
    {
        printf("Enter two numbers: ");
        scanf("%d%d", &n, &m);
        t = n-m;
        printf("%f", t);
    }
    else if(o == '*')
    {
        printf("Enter two numbers: ");
        scanf("%d%d", &n, &m);
        t = n*m;
        printf("%f", t);
    }
    else if(o == '/')
    {
        printf("Enter two numbers: ");
        scanf("%d%d", &n, &m);
        t = (float) n/m;
        printf("%f", t);
    }
    else 
    {
        printf("Invalid!!");
    }
}