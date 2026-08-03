#include<stdio.h>
void main()
{
    char choice;
    int a,b;
    printf("Enter your choice: \nPress + for addition \nPress - for subtract \nPress * for multiplication \nPress / for division\n");
    scanf("%c" ,&choice);

    switch (choice)
    {
    case '+':
        printf("Enter 2 desired number: ");
        scanf("%d%d", &a, &b);
        printf("Your ans is %d", a+b);
        break;
    case '-':
        printf("Enter 2 desired number: ");
        scanf("%d%d", &a, &b);
        printf("Your ans is %d", a-b);
        break;
    case '*':
        printf("Enter 2 desired number: ");
        scanf("%d%d", &a, &b);
        printf("Your ans is %d", a*b);
        break;
    case '/':
        printf("Enter 2 desired number: ");
        scanf("%f%f", &a, &b);
        printf("Your ans is %f", a/b);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
}