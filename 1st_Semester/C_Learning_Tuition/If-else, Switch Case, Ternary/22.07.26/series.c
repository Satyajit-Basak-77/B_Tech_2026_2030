#include<stdio.h>
#include<math.h>
void main()
{
    int i,s,p,n, j=1;
    printf("Enter how many terms you need: ");
    scanf("%d", &n);
    s=0;
    for(i=1; i<=n; i++)
    {
        printf("%d ", j);
        s = s+j;
        j=j*10 + 1;
    }
    printf("\nSum is = %d" ,s);
}