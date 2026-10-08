#include<stdio.h>
int timing();
int M;
void main()
{
    printf("Enter months: ");
    scanf("%d", &M);
    timing();
}
int timing(){
    int d,h,m,s;
    d = 30*M;
    printf("\n%d", d);
    h = 24*d;
    printf("\n%d", h);
    m = 60*h;
    printf("\n%d", m);
    s = 60*m;
    printf("\n%d", s);
    return 0;
}