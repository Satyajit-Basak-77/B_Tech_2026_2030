// S = 1 - 3x/(9*1!) + 6(x^4)/(10*3!) - 9(x^7)/(11*5!) + 12(x^10)/(12*7!) - ...
#include<stdio.h>
#include<math.h>
float s5(float, int);
int fact(int);
void main()
{
    int n;
    float x;
    printf("Enter term and no of term: ");
    scanf("%f",&x);
    scanf("%d", &n);

    printf("%f is sum", s5(x, n));
}
float s5(float x, int n)
{
    int m=3, fm=9, fa=1, p=1;
    float sum=1,t;
    for (int i=2; i<=n; i++)
    {
        t = (m*(pow(x, p)))/(fm*fact(fa));
        if(i%2==0)
            sum-=t;
        else 
            sum+=t;
        
        //increment
        m+=3;
        p+=3;
        fm++;
        fa+=2;
    }

    return sum;
}
int fact(int n)
{
    int f=1;
    if(n==0)
        return 1;
    else
        for(int i=1; i<=n; i++)
            f*=i;
    return f;
}