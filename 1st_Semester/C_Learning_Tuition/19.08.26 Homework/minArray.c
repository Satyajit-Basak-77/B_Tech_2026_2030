#include<stdio.h>
void main()
{
    int n,i,seq=1;
    printf("Enter how many number you want: ");
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++, seq++)
    {
        printf("Enter ");
        printf("%d", seq);
        printf(" Number: ");
        scanf("%d", &a[i]);
    }

    printf("Array List: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}