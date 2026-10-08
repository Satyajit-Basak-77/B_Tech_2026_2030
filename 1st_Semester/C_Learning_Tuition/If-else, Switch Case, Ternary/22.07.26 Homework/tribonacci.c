#include<stdio.h>
void main()
{
    int i,n,a=1,b=1,c=1,s=0, sum=0;
    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    printf("%d " ,a);
    printf("%d " ,b);
    printf("%d " ,c);

    for(i=1; i<=n-3; i++)
    {
        s = a+b+c;
        printf("%d ", s);
        sum = sum + s;
        a=b;
        b=c;
        c=s;
    }

    printf("\nTotal sum is: %d", sum+3);  // first 3 (1 1 1) are excluded from the loop that's why.
}