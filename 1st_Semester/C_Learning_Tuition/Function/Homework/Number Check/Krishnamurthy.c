#include<stdio.h>
int mur(int);
int fact(int);
void main()
{
    int n;
    scanf("%d", &n);
    if(n == mur(n))
        printf("Yes");
    else
        printf("No");
}
int mur(int n){
    int x, sum=0;
    for(x=n; n!=0; n/=10){
        sum+=fact(n%10);
    }
    return sum;
}
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}