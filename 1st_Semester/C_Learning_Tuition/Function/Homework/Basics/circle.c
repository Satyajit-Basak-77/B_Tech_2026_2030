#include<stdio.h>
float ar(float);
float per(float);
void main()
{
    float r,area,peri;
    scanf("%f", &r);
    area = ar(r);
    peri = per(r);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f", peri);
}
float ar(float n)
{
    float area = 3.14*n*n;
    return area;
}
float per(float n)
{
    float peri = 2*3.14*n;
    return peri;
}