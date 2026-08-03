#include<stdio.h>
void main()
{
    int y;
    printf("Enter your desired year: ");
    scanf("%d", &y);
    // A century year (a year ending in 00) is only a leap year if it is evenly divisible by 400.
    if (y%100==0){
        if(y%400==0){
            printf("%d is leap year", y);
        }
        else 
            printf("%d is NOT leap year", y);
    }
    // Any Normal year which is not ending with 00 (ex = 2020, 2024)
    else if(y%4==0)
        printf("%d is leap year" ,y);
    else
        printf("%d is NOT leap year");
}