#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j=0,s=0;
    printf("Enter the no. of terms you need: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        j = (i*i)-1;
        printf("%d ", j);
        s = s + j;
    }

    printf("The sum is %d", s);
}