#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter your desired no. of terms= ");
    scanf("%d", &n);
    printf("ODD");
    printf("\tEVEN\n");

    for(int i =1; i<=n; i++)
    {
        if(i%2 != 0)
            printf("%d", i);
        else
            printf("\t%d\n", i);
    }
}