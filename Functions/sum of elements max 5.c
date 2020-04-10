#include<stdio.h>
#define MAX 5
int sumelements(int a[MAX],int n)
{
 int sum=0,i;
 for(i=0;i<MAX;i++)sum=sum+a[i];

 return(sum);
}

int main()
{
 int arr[MAX],i;

 printf("\n Enter %d elements",MAX);
 for(i=0;i<MAX;i++)scanf("%d",&arr[i]);

 i=sumelements(arr,MAX);
 printf("\n Sum is:%d",i);

 return(0);
}
