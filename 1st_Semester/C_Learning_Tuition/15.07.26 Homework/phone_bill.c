// 1 theke 100 1taka per call 100 theke 200 4taka per call 200 theke 400 8taka per call 400-800 unit 10 taka per call and 800+ unit 10 taka per call 

#include<stdio.h>
void main()
{
    int unit, calls ,bill;
    printf("Enter the amount of unit you spent: ");
    scanf("%d", &unit);
    if(unit<0)
    printf("Invalid!");
    else if(unit>=0 && unit<=100)
    {
    bill = unit*1;
    printf("Your bill is:  %d", bill);
    }
    else if(unit>100 && unit<=200)
    {
        bill = (unit - 100)*4+100;
        printf("Your bill is:  %d", bill);
    }
    else if(unit>200 && unit<=400)
    {
        bill = (unit - 200)*8+500;
        printf("Your bill is: %d", bill);
    }
    else if(unit>400 && unit<=800)
    {
        bill = (unit-400)*10+2100;
        printf("Your bill is:  %d", bill);
    }
    else if(unit>800)
    {
        bill = (unit-800)*12+6100;
        printf("Your bill is:  %d", bill);
    }
}