//6. WAP to create a cone structure with consists radius and height of the cone, 
//calculate the volume of cones of n times and find out the max volumes
#include<stdio.h>
struct cone
{
    float r, h, vol;
};
void main()
{
    int i,n;
    float max;
    scanf("%d", &n);
    struct cone c[n];
    for (i=0; i<n; i++)
    {
        printf("r: ");
        scanf("%f", &c[i].r);
        printf("h: ");
        scanf("%f", &c[i].h);
        c[i].vol = (3.1415 * c[i].r * c[i].r * c[i].h)/3;
    }

    printf("----------------------------------\n");
    printf("No.\tRadius\tHeight\tVolume\n");
    
    printf("----------------------------------\n");
    max = c[0].vol;
    for(i=0; i<n; i++)
    {
        printf("%d.\t%.1f\t%.1f\t%.1f\n", i+1, c[i].r, c[i].h, c[i].vol);
        if(c[i].vol > max)
            max = c[i].vol;
    }
    printf(" Max volume is %.2f\n", max);
}