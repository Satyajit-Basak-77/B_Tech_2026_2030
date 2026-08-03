#include<stdio.h>
#include<math.h>
void main()
{
    int i, x, sq, n, s=0, c=0, digit; 
    printf("Enter n: ");
    scanf("%d", &n);

    for(x=n; n>0; n=n/10)
    {
        c++;
    }
    sq = pow(x,2);

    digit = sq%((int)(pow(10, c)));
    sq = sq/((int)(pow(10, c)));
    s = digit + sq;

    if(s == x)
        printf("KapreKar");
    else 
        printf("NOT KapreKar");
}