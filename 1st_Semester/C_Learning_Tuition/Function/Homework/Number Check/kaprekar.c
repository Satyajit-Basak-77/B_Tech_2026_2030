#include<stdio.h>
#include<math.h>
int kap(int);
void main()
{
    int n;
    scanf("%d", &n);
    if(kap(n) == n){
        printf("%d\n", kap(n));
        printf("Yes");
    } else {
        printf("%d\n", kap(n));
        printf("No");
    }
}
int kap(int n){
    int x = n, c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    n=x;
    int p = n*n;
    int pr = p%(int)(round(pow(10, c)));
    p = p / (int)(round(pow(10, c)));
    int sum = p + pr;
    return sum;
}