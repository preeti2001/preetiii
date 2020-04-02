#include<stdio.h>
void main()
{
    char x[50];
    int i,c1=0,c2=0;
    printf("Enter a string:\n");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
            c1++;
        else
            c2++;
    }
    printf("\nvowel =%d",c1);
    printf("\nconsonant=%d",c2);
}

