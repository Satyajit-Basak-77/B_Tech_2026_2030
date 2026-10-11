//b. 4, 8, 16, 32, 64, ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,j=2,p;
    printf("Enter terms you need: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        p= pow(2,j);
        printf("%d ", p);
        j++;
    }
}