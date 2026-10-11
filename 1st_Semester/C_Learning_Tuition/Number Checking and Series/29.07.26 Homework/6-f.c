//f. 1, 1/(3!), 1/(5!), 1/(7!), 1/(9!) ...
#include<stdio.h>
void main()
{
    int i,n,j=1,f=1;
    float s=0.0, t = 0.0;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {   if (j==1)
            f=f*j;
        else
            f=f*j*(j-1);
        if(i!=n)
            printf("1/(%d)! + ", j);
        else 
            printf("1/(%d)! = ", j);

        t = 1/(float)f;
        s = s + t;
        j+=2;
    }
    printf("%.3f", s);
}