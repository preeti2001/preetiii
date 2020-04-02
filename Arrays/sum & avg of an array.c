#include <stdio.h>
int main()
{
int x[10],i,average,sum=0,n;
printf("enter the number of elements in an array:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the elements of array:\n");
scanf("%d",&x[i]);
sum+=x[i];
}
average=sum/n;
printf("the sum of elements is %d\n the average of elements is %d",sum,average);
}
