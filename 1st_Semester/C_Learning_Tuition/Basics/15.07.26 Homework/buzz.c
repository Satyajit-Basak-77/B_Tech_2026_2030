#include<stdio.h>
void main()
{
    int num;
    printf("Enter your desired number: ");
    scanf("%d", &num);
    if(num%7==0 || num%10==7)
        printf("%d is Buzz number.", num);
    else
        printf("%d is NOT Buzz number.", num);
}