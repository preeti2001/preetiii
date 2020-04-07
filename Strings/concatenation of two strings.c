#include <stdio.h>
#include<stdlib.h>

void main()
{
    char a[5], b[5], c[10], i, j, k,x;
    printf("Enter string 1:\n");
    scanf("%s",a);
    printf("Enter string 2:\n");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
        c[i]=a[i];
    for(j=i,k=0;b[k]!='\0';j++,k++)
    {
        c[j]=b[k];
    }
    c[j]='\0';
    printf("Concatenated string is=");
    puts(c);
}
