#include<stdio.h>
void main()
{
    char x[20], y[20], r[50];
    int i,j,k;
    printf("Enter the String = ");
    gets(x);
    
    printf("Enter the String = ");
    gets(y);
    for(i=0; x[i]!='\0'; i++){
        r[i]= x[i];
    }

    for(j=0; y[j]!='\0'; j++){
        r[i+j]= y[j];
    }
    r[i+j]='\0';

    for(i=0; r[i]!='\0'; i++){
        printf("%c", r[i]);
    }
}