#include<stdio.h>
void main()
{
    int n=10,i;
    for(i=2; i<=n; i=i+2) // 0 is not considered a even here. 
    {
        printf("%d ", i);
    }
}