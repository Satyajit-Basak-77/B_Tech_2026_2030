#include<stdio.h>
void main()
{
    int i,n,k;
    printf("Enter your desired no. of terms: ");
    scanf("%d", &n);
    for(i=1; i<=2*n; i=i+2)
    {
        printf("%d ", i);
    }
}