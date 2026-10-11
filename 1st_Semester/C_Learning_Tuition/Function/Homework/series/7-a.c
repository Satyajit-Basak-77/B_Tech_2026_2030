#include<stdio.h>
float s4(float, int);
void main()
{
    int n;
    float x;
    printf("Enter term and no of term: ");
    scanf("%f",&x);
    scanf("%d", &n);
    float sum = s4(x, n);
    printf("= %f", sum);
}
float s4(float x,int n)
{
    float sum=0.0;
    for (int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            printf("+ %f ", x);
            sum+=x;
        }
        else
        {   
            printf("- %f ", x);
            sum-=x;
        }
    }
    return sum;
}