//WAP to create a employee structure which consist of employee id., employee name, 
//their salary as input & calculate DA, TA, HRA, Gross salary, PF, and net salary nad calculate the designation.
#include<stdio.h>
struct employee
{
    int emp_id, bsalary;
    float da, ta, hra, groslr ,pf, netslr;
    char name[50];
};
void main()
{
    int n;
    printf("Enter your number of your employees: ");
    scanf("%d", &n);
    struct employee e[n];
    //input
    for (int i=0; i<n; i++)
    {
        printf("e_id: ");
        scanf("%d", &e[i].emp_id);
        printf("Enter basic salary: ");
        scanf("%d", &e[i].bsalary);
        printf("Enter name: ");
        scanf("%s", &e[i].name);
        e[i].da = e[i].bsalary * (60.0/100);
        e[i].ta = e[i].bsalary + 5000;
        e[i].hra = e[i].bsalary * (50.0/100);
        e[i].pf = e[i].bsalary * (12.0/100);
        e[i].groslr = e[i].bsalary + e[i].da + e[i].ta + e[i].hra - e[i].pf;
        e[i].netslr = e[i].groslr * 12;
    }

    //output
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    printf("ID\tName\tBasic_Salary\tDA\tTA\tHRA\tGross_Salary\tPF\tNet_Salary\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", e[i].emp_id, e[i].name, e[i].bsalary, e[i].da, e[i].ta, e[i].hra, e[i].groslr, e[i].pf, e[i].netslr);
    }
}