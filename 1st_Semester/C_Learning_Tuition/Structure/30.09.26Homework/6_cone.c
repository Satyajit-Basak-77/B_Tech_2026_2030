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
        c[i].vol = (1.0/3) * 3.141592653589793 * c[i].r * c[i].r * c[i].h;
    }

    printf("----------------------------------\n");
    printf("No.\tRadius\tHeight\tVolume\n");
    
    printf("----------------------------------\n");
    max = c[0].vol;
    for(i=0; i<n; i++)
    {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i+1, c[i].r, c[i].h, c[i].vol);
        if(c[i].vol > max)
            max = c[i].vol;
    }
    printf(" Max volume is %.2f\n", max);
}