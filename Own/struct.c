#include<stdio.h>
struct student
{
    int roll, ph_no, marks, reg;
    char dob[20], name[40], grd, remark[5];
};
void main()
{
    int i, j, f, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    struct student stu[n];
    // input
    for(i=0; i<n; i++)
    {
    printf("Roll: ");
    scanf("%d", &stu[i].roll);

    printf("ph_no: ");
    scanf("%d", &stu[i].ph_no);

    printf("marks: ");
    scanf("%d", &stu[i].marks);
    
    printf("reg: ");
    scanf("%d", &stu[i].reg);

    printf("dob: ");
    scanf("%s", &stu[i].dob);

    printf("name: ");
    scanf("%s", &stu[i].name);

    printf("grd: ");
    scanf("%c", &stu[i].grd);

    printf("remark: ");
    scanf("%s", &stu[i].remark);
    }

    // output
    printf("------------------------------------------------------------\n");
    printf("Roll\tPhone\tmark\treg\tdob\tname\tgrd\tremark\n");
    printf("------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n", stu[i].roll, stu[i].ph_no, stu[i].marks, stu[i].reg, stu[i].dob, stu[i].name, stu[i].grd, stu[i].remark);
    }
}