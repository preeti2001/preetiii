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
    printf("\nThe length of the string is %d",c);
}
