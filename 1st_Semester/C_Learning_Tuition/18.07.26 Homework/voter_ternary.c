#include<stdio.h>
void main()
{
    int age;
    printf("Entern your age: ");
    scanf("%d",&age);
    (age>=18)?printf("You are eligible for vote."):printf("You are NOT eligible for vote.");
}