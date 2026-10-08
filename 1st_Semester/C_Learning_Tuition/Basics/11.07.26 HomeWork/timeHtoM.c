// convert Hour to min.
#include<stdio.h>
void main()
{
    float h, m, s;
    printf("Enter Hour: ");
    scanf("%f", &h);
    m=h*60;
    printf("Minutes = %.3f",m);
}