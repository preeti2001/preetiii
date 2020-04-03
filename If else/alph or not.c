#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    printf("this is alphabet");
    else
    printf("this is not an alphabet");
}
