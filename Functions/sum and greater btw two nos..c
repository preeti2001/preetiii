#include<stdio.h>
int addnum(int,int);
int pmax(int,int);
void main()
{
    int x,y;
    printf("\n Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("\n Sum:");
    addnum(x,y);
    printf("\n Max:");
    pmax(x,y);
    }
int addnum(int x,int y)
 {
     printf("\n %d",x+y);
     return(0);
 }
int pmax(int x,int y)
{
    if(x>y)printf("%d",x);
    else if(x==y)printf("\n Both are Equal.");
    else printf("%d",y);
}
