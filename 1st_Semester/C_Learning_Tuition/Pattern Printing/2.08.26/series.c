//X^2 -X^5 +X^8- x^11  +X^14    -n   & sum
#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,p,s=0,b;
    long n;
    printf("Enter the Range = ");
    scanf("%ld",&n);
    printf("Enter the Base = ");
    scanf("%d",&b);
    for(i=1,x=2;i<=n;i++,x=x+3)
    {
        p=pow(b,x);
        if(i==1)
        {
            printf("%d ",p);
            s=s+p;
        }
        else if(i%2==0)
        {
            printf(" - %d ",p);
            s=s-p;
        }
        else
        {
            printf(" + %d ",p);
            s=s+p;
        }
    }
    printf(" = %d ",s);
}