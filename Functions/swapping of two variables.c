#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int p,int q)
{
    int r;
    r=p;
    p=q;
    q=r;
    printf("\nValue1=%d,Value2=%d",p,q);
}
