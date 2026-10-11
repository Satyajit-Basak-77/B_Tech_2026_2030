//d. 1, 1, 1, 3, 5, 9, 17, 31 ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i,n, a=1, b=1, c=1,s=0;

    printf("Enter the terms you need: ");
    scanf("%d", &n);
    printf("%d %d %d ", a,b,c);

    for(i=1; i<=n-3; i++)
    {
        s = a+b+c;
        printf("%d ", s);
        a=b;
        b=c;
        c=s;
    }
}