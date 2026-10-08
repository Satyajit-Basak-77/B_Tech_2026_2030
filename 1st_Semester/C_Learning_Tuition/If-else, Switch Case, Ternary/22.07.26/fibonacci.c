#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,sum=0;
    printf("Enter no. of terms you need: ");
    scanf("%d", &n);

    printf("%d ", a);
    printf("%d ", b);

    for(int i=1; i<=n-2; i++)
    {
        c = a+b;
        printf("%d ", c);
        sum=sum+c;
        a=b;
        b=c;
    }
    printf("\nSum of the series is: %d", sum+1); // because the b=1 at initial was excluded from the loop. 
}