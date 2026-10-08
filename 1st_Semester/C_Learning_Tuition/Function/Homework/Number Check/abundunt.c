#include<stdio.h>
int factor(int);
void main()
{
    int n;
    scanf("%d", &n);
    if(n>factor(n)){
        printf("\nYes");
    } else {
        printf("\nNo");
    }
}
int factor(int n){
    int i,sum=0;
    for(i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("\n%d", sum);
    return sum;
}