#include<stdio.h>
void duck(int);
int f=0;
void main()
{   
    int n;
    scanf("%d", &n);
    duck(n);
    if(f==0)
        printf("\nNot Duck");
    else
        printf("\nDuck");
}
void duck(int n){
    while(n!=0){
        printf("%d\n", n%10);
        if(n%10 == 0){
            f=1;
            return;
        }
        n/=10;
    }
}