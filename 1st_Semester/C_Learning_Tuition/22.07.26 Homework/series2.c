#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the no. of terms you need: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
            printf("%d ", (i*i)-1);
        else
            printf("%d ", (i*i)+1);
    }
}