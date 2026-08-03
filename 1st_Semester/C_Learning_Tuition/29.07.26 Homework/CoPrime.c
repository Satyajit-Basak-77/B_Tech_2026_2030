#include<stdio.h>
void main()
{
    int n, m, i, gcd;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n, &m);

    for(i=1; i<=n; i++)
    {
        if(n%i == 0 && m%i == 0)
        {
            gcd = i;
        }
    }

    if(gcd == 1)
        printf("%d & %d are Co-Prime. ", n, m);
    else
        printf("%d & %d are NOT Co-Prime. ", n, m);
}