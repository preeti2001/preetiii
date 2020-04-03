#include<stdio.h>
void main()
{
    char x;
    printf("Enter an alphabet:\n");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    printf("This is a vowel");
    else
    printf("This is a consonant");
    system("pause");
    return 0;
}
