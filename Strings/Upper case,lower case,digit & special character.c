#include<stdio.h>
void main()
{
    char x[50];
    int i,c1=0,c2=0,c3=0,c4=0;
    printf("Enter a string:\n");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
        c1++;
        else if
        (x[i]>=97 && x[i]<=122)
        c2++;
        else if
        (x[i]>=48 && x[i]<=57)
        c3++;
        else
        c4++;
    }
    printf("\nUpper Case=%d",c1);
    printf("\nLower Case=%d",c2);
    printf("\nDigit=%d",c3);
    printf("\nSpecial Symbol=%d",c4);
}
