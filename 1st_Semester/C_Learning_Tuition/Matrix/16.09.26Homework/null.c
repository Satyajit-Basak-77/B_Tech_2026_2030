#include <stdio.h>
void main()
{
    int r, c, i, j, f = 0;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d", &r, &c);
    int a[r][c];
    // input
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter for (%d,%d) for 1st: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // output
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // checking
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
        printf("Null");
    else
        printf("NOT Null");
}