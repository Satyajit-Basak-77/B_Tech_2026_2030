#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c], res[r][c];
        //input
        for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter for (%d,%d) for 1st: ", i,j);
            scanf("%d", &a[i][j]);
            printf("Enter for (%d,%d) for 1st: ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
        //subtraction
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                res[i][j] = a[i][j]-b[i][j];
            }
        }
        //output
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");
    }
}