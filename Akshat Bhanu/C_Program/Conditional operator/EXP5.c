/**/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))? printf("It is a character"):printf("Its not a character");
    return 0;
}
