#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(((a%2)==0) && (a>=2 && a<=5))
    printf("not weird");
    else if(((a%2)==0) && (a>=6 && a<=20))
    printf("weird");
    else if(((a%2)==0) && (a>20))
    printf("not weird");
    else
    printf("not weird");
    return 0;
}
