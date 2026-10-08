#include<stdio.h>
float cube(float, float, float);
void main()
{   
    float l, b, h;
    printf("Enter l & b & h: ");
    scanf("%f%f%f", &l, &b, &h);
    cube(l, b, h);
}
float cube(float l, float b, float h){
    float tar = 2*(l*b + b*h + l*h);
    float vol = l*b*h;

    printf("Total area : %.2f\n", tar);
    printf("Total vol : %.2f\n", vol);
}