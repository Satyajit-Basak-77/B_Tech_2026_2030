// cos (x) = 1-(x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - ...
#include<stdio.h>
#include<math.h>
float cosine(float);
int fact(int);
void main()
{
    float x;
    printf("Enter the degrees for cosine value: ");
    scanf("%f", &x);
    printf("The cosine value is: %f",cosine(x));
}
float cosine(float x)
{
    float r,sum=0, t;
    int p=2,n=10;
    r = ((3.1415)/180)*x;
    for(int i=1; i<=n; i++)
    {   
        if(i==1)
            sum+=1;
        else if(i%2==0)
        {
            t = (pow(r, p))/fact(p);
            sum-=t;
            p+=2;
        }
        else if(i%2==1)
        {
            t = (pow(r, p))/fact(p);
            sum+=t;
            p+=2;
        }
    }
    return sum;
}
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
        f*=i;
    return f;
}