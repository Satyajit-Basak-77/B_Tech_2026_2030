#include<stdio.h>
void leap(void);
void main()
{
    leap();
}
void leap(){
    int y;
    scanf("%d", &y);
    if(y%100==0 && y%400==0)
        printf("%d is LP", y);
    else if(y%4==0 && y%100!=0)
        printf("%d is LP", y);
    else
        printf("%d is not LP", y);
}