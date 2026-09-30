#include<stdio.h>
void main()
{
    int n,i, sum=0;
    float avg;
    printf("Enter how many number you want: ");
    scanf("%d", &n);
    int a[n];
    //input
    for(int i=0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d", &a[i]);
    }
    //print
    printf("Array list = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
        sum+=a[i];
    }
    avg = sum/(float)n;
    printf("\nBelow avg elements are: ");
    for(int i=0; i<n; i++)
    {
        if((float)a[i]<avg)
        printf("%d ", a[i]);
    }
}