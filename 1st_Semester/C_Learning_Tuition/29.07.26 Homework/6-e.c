//e. 1, 2/2!, 3/3!, 4/4!, 5/5! ...

#include<stdio.h>
void main()
{
    int i,n,f=1;
    float s = 0.0;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {   
        f=f*i;
        if (i == n)
            printf("%d/%d! = ", i,i);
        else 
            printf("%d/%d! + ", i, i);
        s = s + (float)i/(float)f;
    }

    printf("The sum is %.3f", s);
}