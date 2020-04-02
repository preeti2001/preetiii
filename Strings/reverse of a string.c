#include<stdio.h>
void main()
{
    char x[50];
    int i,c=0;
    printf("Enter a string:\n");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        c++;
    }
    for(i=c-1;i>=0;i--)
    printf("%c",x[i]);
}
