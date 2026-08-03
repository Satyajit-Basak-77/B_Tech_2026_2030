#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,rem,p,s=0,c=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        c++;
    }
    for(n=x;n>0;n=n/10)
    {
        rem=n%10;
        p=pow(rem,c);
        s=s+p;
        c--;
    }
    if(x==s)
        printf("%d is Disurium No. ",x);
    else
        printf("%d is NOT Disurium No. ",x);
}