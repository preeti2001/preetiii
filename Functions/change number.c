#include<stdio.h>
int changeNumber(int num)
{
    printf("\nNumber in the function is %d",num);
    num=num+10;
    printf("\n Number in the function is %d",num);
    return(num);
}

int main()
{
    int num=10;

    printf("\n Number is %d",num);
    num=changeNumber(num);
    printf("\n Number is %d",num);

    return(0);
}
