#include<stdio.h>
#include<conio.h>
int main()
{
    int in,en,i,n;
    printf("Enter starting point:\n");
    scanf("%d",&in);
    printf("Enter ending point:\n");
    scanf("%d",&en);
    printf("\nThe even numbers in the range %d to %d are: ",in,en);
    for(i=in;i<=en;i++)
    {
        if(i%2==0)
        printf("%d\t",i);
    }
    return 0;
}
