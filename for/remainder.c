#include<stdio.h>
int main()
{
int number,rem;
printf("enter a number:\n");
scanf("%d",&number);

while(number>0)
    {
        rem=number%10;
        printf("%d",rem);
        number=number/10;
    }
return(0);
}
