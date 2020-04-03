#include<stdio.h>
void main()
{
    char x;
    printf("Enter a value:\n");
    scanf("%c",&x);
    if(x>='a'&&x<='z'||x>='A'&&x<='Z')
    printf("This is an alphabet");
    else if(x>='0'&&x<='9')
    printf("This is a digit");
    else
    printf("This is a special character");
    system("pause");
    return 0;
}
