#include<stdio.h>
struct vector
{
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;
};
void main()
{
    int n, pro, i, j;
    printf("Enter how many products you want to get: ");
    scanf("%d", &n);
    struct vector v[n];
    //input
    for(i=0; i<n; i++){
        printf("Enter x1: ");
        scanf("%d", &v[i].x1);
        printf("Enter y1: ");
        scanf("%d", &v[i].y1);
        printf("Enter z1: ");
        scanf("%d", &v[i].z1);
        printf("Enter x2: ");
        scanf("%d", &v[i].x2);
        printf("Enter y2: ");
        scanf("%d", &v[i].y2);
        printf("Enter z2: ");
        scanf("%d", &v[i].z2);

        v[i].x3 = (v[i].y1 * v[i].z2) - (v[i].z1 * v[i].y2);
        v[i].y3 = (v[i].z1 * v[i].x2) - (v[i].x1 * v[i].z2);
        v[i].z3 = (v[i].x1 * v[i].y2) - (v[i].y1 * v[i].x2);
    }
    printf("-----------------------------------------------\n");
    printf("v1\t\tv2\t\tv3\n");
    printf("-----------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("(%d,%d,%d)\t\t(%d,%d,%d)\t\t(%d,%d,%d)\n", v[i].x1, v[i].y1, v[i].z1, v[i].x2, v[i].y2, v[i].z2, v[i].x3, v[i].y3, v[i].z3);
    }
}