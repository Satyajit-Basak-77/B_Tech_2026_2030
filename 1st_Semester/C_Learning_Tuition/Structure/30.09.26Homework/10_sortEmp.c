//Sort the employee structure in descending order of their gross salary. 
#include<stdio.h>
#include<string.h>
struct employee
{
    int emp_id, bsalary;
    float da, ta, hra, groslr ,pf, netslr;
    char name[50];
};
void main()
{
    int n, tid, tbsalary;
    float tda, tta, thra, tgroslr, tpf, tnetslr;
    char tname[50];
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
    //sort
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(e[j].groslr<e[j+1].groslr){
                //swaping
                //emp_id
                tid = e[j].emp_id;
                e[j].emp_id = e[j+1].emp_id;
                e[j+1].emp_id = tid;

                //bsalary
                tbsalary = e[j].bsalary;
                e[j].bsalary = e[j+1].bsalary;
                e[j+1].bsalary = tbsalary;

                //da
                tda = e[j].da;
                e[j].da = e[j+1].da;
                e[j+1].da = tda;

                //ta
                tta = e[j].ta;
                e[j].ta = e[j+1].ta;
                e[j+1].ta = tta;

                //hra
                thra = e[j].hra;
                e[j].hra = e[j+1].hra;
                e[j+1].hra = thra;

                //tgroslr
                tgroslr = e[j].groslr;
                e[j].groslr = e[j+1].groslr;
                e[j+1].groslr = tgroslr;

                //pf
                tpf = e[j].pf;
                e[j].pf = e[j+1].pf;
                e[j+1].pf = tpf;

                //netslr
                tnetslr = e[j].netslr;
                e[j].netslr = e[j+1].netslr;
                e[j+1].netslr = tnetslr;

                //name
                strcpy(tname, e[j].name);
                strcpy(e[j].name, e[j+1].name);
                strcpy(e[j+1].name, tname);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", e[i].emp_id, e[i].name, e[i].bsalary, e[i].da, e[i].ta, e[i].hra, e[i].groslr, e[i].pf, e[i].netslr);
    }
}