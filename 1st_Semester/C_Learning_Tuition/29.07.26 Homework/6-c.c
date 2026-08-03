//c. 2/3, 4/5, 8/7 , 16/9 ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,j=1,k=3,p;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        p = pow(2,j);
        printf("%d/%d ", p, k);
        j++;
        k+=2;
    }
}