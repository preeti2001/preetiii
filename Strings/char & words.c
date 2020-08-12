#include<stdio.h>
void main()
{
    char str[20];
    int i,c1=0,c2=0;
    printf("\nEnter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        c1++;
        if(str[i]==' ')
            c2++;
    }
    printf("\nCHARACTERS = %d",c1);
    printf("\nWORDS = %d",c2+1);
}
