#include<stdio.h>
int main()
{
int number,rem,newnum,oldn;
printf("\n Enter the number:\n");
scanf("%d",&number);

oldn=number;
newnum=0;

while(number>0)
    {
rem=number%10;
newnum=newnum+rem;
number=number/10;
    }
printf("\n sum of digits of %d is %d",oldn,newnum);
return(0);
}
