//c. 2/3, 4/5, 8/7 , 16/9 ...

#include<stdio.h>
#include<math.h>
float s3(int);
void main()
{
    int n;
    scanf("%d", &n);
    printf("\nThe sum is %f", s3(n));
}
float s3(int n)
{
    int i,j=1,k=3,p;
    float t, sum=0.0;

    for(i=1; i<=n; i++)
    {
        p = pow(2,j);
        printf("%d/%d ", p, k);
        t=(float)p/k;
        j++;
        k+=2;
        sum+=t;
    }
    return sum;
}