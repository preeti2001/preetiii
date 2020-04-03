#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
    printf("Divisible by 5");
    else if(x%11==0)
    printf("Divisible by 11");
    else
    printf("Not divisible");
}
