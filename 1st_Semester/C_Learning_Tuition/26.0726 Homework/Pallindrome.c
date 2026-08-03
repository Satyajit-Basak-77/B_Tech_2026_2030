#include <stdio.h>
void main()
{
    int n, rem, s=0, x;
    printf("Enter n: ");
    scanf("%d", &n);

    for(x=n; n>0; n=n/10){
        rem = n%10;
        s = s*10+rem;
    }

    if(s==x){
        printf("Pallingdrome");
    } else {
        printf("NOT Pallingdrome");
    }
}