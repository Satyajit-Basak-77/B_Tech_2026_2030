//a. 2, 5, 8, 11, 14, ...

#include<stdio.h>
void s1(int);
void main()
{
    int n;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);
    s1(n);
}
void s1(int n)
{
    int i,j=2, sum=0;

    for(i=1; i<=n; i++)
    {   
        if(i==1)
        printf("%d ", j);
        else
        printf("+ %d ", j);
        sum+=j;
        j=j+3;
    }
    printf("= %d", sum);
}