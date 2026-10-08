// convert min. to hour.

#include<stdio.h>
void main()
{
    int h,m;
    printf("Enter minutes: ");
    scanf("%d", &m);
    h=m/60;
    m=m%60;
    printf("Hour = %d Minutes = %d",h,m);
}