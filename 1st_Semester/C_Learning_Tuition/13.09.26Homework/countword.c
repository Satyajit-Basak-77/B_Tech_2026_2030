// Count frequency of a word within a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[200], w[20];
    int f, i, j, k, got=0;
    printf("Enter your desired line:\n");
    gets(x);
    printf("Enter the word you need to get: \n");
    gets(w);
    for(i=0; x[i]!='\0'; i++)
    {   
        f=0;
        if(x[i]==w[0] && (i==0||x[i-1]==' '))
        {
            for(k=i,j=0; w[j]!='\0'; j++, k++)
            {
                if(x[k]!=w[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
        {
            got+=1;
        }
        }
    }
    printf("%d", got);
}