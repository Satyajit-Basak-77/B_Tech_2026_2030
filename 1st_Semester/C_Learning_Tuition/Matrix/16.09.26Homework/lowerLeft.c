#include <stdio.h>
void main()
{
    int i, j, k = 0;
    // input
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    k=3-1;
    // output
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //transpose
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= k; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        k--;
    }
}