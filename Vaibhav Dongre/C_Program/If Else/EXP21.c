#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,ch2,ch3,c4,ch5;
    printf("Enter character");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=90))
        printf("It is a Capital letter");
    else if((ch>=97)&&(ch<=122))
        printf("It is a Small case letter");

return 0;
}

