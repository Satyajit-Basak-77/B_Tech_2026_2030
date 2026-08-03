// second to day
#include<stdio.h>
void main()
{
    int s,m,h,d;
    printf("Enter seconds: ");
    scanf("%d", &s);
    d=s/(24*60*60);
    s=s%(24*60*60);
    h=s/(60*60);
    s=s%(60*60);
    m=s/60;
    s=s%60;
    printf("Days = %d Hours = %d Minutes = %d Seconds = %d", d, h, m, s);
}