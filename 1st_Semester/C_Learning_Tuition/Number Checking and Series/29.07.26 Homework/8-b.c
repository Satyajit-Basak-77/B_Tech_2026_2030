// cos (x) = 1-(x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - ...

#include<stdio.h>
#include<math.h>
int fact(int);
void main()
{
    int i,j,n;
    float x, radian,sum=1, term;
    printf("Enter number of terms you need: ");
    scanf("%d", &n);
    printf("Enter your degree: ");
    scanf("%f", &x);

    printf("1 - ");
    for(i=0,j=2; i<=n; i++,j+=2){
    radian = x * (3.141)/180;
    term = pow(radian,j)/(float)fact(j);
        if(i%2==0)
            sum = sum - term;
        else
            sum = sum + term;
    printf("%f \n", term);
    }
}
int fact (int n)
{   
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    return f;
}