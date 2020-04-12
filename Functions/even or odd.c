#include<stdio.h>
void evenorodd(int n)
{
    if(n%2==0)
        printf("\nNumber %d is Even",n);
    else
        printf("\nNumber %d is Odd",n);
}
void main()
{
    int n;
    printf("\nEnter a Number to check whether it is Even or Odd:");
    scanf("%d",&n);
    evenorodd(n);
}
