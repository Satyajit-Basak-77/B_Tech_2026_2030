#include<stdio.h>
void main()
{
    int p,c,m,cs, avg;
    printf("Enter your marks of Physics Chemistry Math and Computer Science in similar order out of 100: ");
    scanf("%d%d%d%d", &p, &c, &m, &cs);
    if (p<0 || c<0 || m<0 || cs<0 || p>100 || c>100 || m>100 || cs>100)
    printf("Enter valid marks again.");
    avg = (p+c+m+cs)/4;

    if(avg>=0 && avg<40)
    printf("Grade D");
    else if(avg>=40 && avg<60)
    printf("Grade C");
    else if(avg>60 && avg<=80)
    printf("Grade B");
    else if(avg>80 && avg<=90)
    printf("Grade A");
    else if(avg>90 && avg<=100)
    printf("Grade AA");    
}