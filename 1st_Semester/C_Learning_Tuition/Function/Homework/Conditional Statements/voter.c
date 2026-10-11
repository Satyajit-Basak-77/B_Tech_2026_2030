#include<stdio.h>
void voter(){
    int n;
    scanf("%d", &n);
    if(n>18){
        printf("Eligible");
    } else {
        printf("No");
    }
}
void main(){
    voter();
}