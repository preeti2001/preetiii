#include <stdio.h>

int main()
{
    int x[5],i,flag=0,j=0,n,a;
    printf("Enter the size of an array \n");
    scanf("%d",&n);
    printf("Enter the elements of the array \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the elements too be searched:\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==x[i])
        {
            flag=1;
            j++;
        }
    }
    if(flag==1)
    printf("The number exists %d times in the array",j);
    else
    printf("The no. does not exist");
}
