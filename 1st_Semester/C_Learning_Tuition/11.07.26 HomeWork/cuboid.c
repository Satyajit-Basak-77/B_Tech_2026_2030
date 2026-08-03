//   calc. area & perimeter of Cuboid.
#include<stdio.h>
void main()
{
    int l, b, h;
    printf("Enter l, b & h: ");
    scanf("%d%d%d", &l, &b, &h);
    printf("\nArea = %d", 2*(l*h + b*h + l*b));
    printf("\nPerimeter = %d", 2*(l+h)+2*(b+h)+2*(l+b));
    printf("\nVolume = %d", l*b*h);
}