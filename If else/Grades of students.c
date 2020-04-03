#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e;
    float p;
    printf("enter the marks of five subjects:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=((a+b+c+d+e)/500)*100;
    printf("the percentage is %f\\n",p);
    if(p>=90)
    printf("grade A");
    else if(p>=80)
    printf("grade B");
    else if(p>=70)
    printf("grade C");
    else if(p>=60)
    printf("grade D");
    else if(p>=40)
    printf("grade E");
    else
    printf("grade F");
}
