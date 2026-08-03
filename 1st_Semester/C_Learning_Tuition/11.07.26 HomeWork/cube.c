//calc. area & perimeter of Cube.
#include<Stdio.h>
void main()
{
    int a,ar,pr;
    printf("Enter the side of your Cube: ");
    scanf("%d", &a);
    ar = 6*a*a;
    pr = 12*a;
    printf("Area = %d Perimeter = %d" , ar,pr);
}