// S = 1 - 3x/(9*1!) + 6(x^4)/(10*3!) - 9(x^7)/(11*5!) + 12(x^10)/(12*7!) - ...

#include<stdio.h>
#include<math.h>
void main()
{
    int i, n, j=3, p=1, x, num = 9, fc = 1, f=1;
    float t,s = 0.0, sum = 0.0;
    printf("Enter the terms you need: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    printf("1 ");
    for(i=1; i<=n-1; i++)
    {   
        //factorial
        if(fc==1)
            f=f*fc;
        else
            f=f*fc*(fc-1);

        // term calculation
        if(p%2 != 0)
        {   
            printf("- %d*(%d^%d)/%d*%d! ", j,x,p,num,fc);
            t = (j * (float)(pow(x,p))/(float)(num*f));
            s = s - t;
        }
        else
        {
            printf("+ %d*(%d^%d)/%d*%d! ", j,x,p,num,fc);
            t = (j * (float)(pow(x,p))/(float)(num*f));
            s = s + t;
        }

        //increment of variables
        j+=3;
        p+=3;
        num++;
        fc+=2;
    }
    sum = 1 + s;
    printf("\nThe sum of all terms is: %f", sum);
}